import re
import sys

def parse_sfd_file(filename):
    with open(filename, "r") as f:
        lines = f.readlines()

    funcs = set()

    for line in lines:
        line = line.strip()

        # Skip comments and markers
        if not line or line.startswith("*") or line.startswith("=="):
            continue

        # Match function declaration line like:
        # return_type name(args...) (registers)
        # We're interested in capturing the function name
        match = re.match(r'^[^=]+\b(\w+)\s*\([^)]*\)\s*\([^)]*\)$', line)
        if match:
            func_name = match.group(1)
            funcs.add(func_name)

    # Now find pairs like CreateGadget/CreateGadgetA
    special_cases = []
    remaining = set(funcs)

    for name in funcs:
        if name.endswith("A"):
            base = name[:-1]
            if base in funcs:
                special_cases.append((base, name))
                remaining.discard(base)
                remaining.discard(name)

    # Output
    output = []

    if special_cases:
        output.append(",\n".join(f'{{ "name": "{base}", "tagList": "{tag}" }}' for base, tag in sorted(special_cases)))

    if remaining:
        output.append(", ".join(f'"{name}"' for name in sorted(remaining)))

    return output


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python extract_funcs.py <file.sfd>")
        sys.exit(1)

    for line in parse_sfd_file(sys.argv[1]):
        print(line)
