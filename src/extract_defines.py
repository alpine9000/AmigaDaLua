import re
import sys

def extract_defines(filename):
    with open(filename, 'r') as f:
        content = f.read()

    # Match lines like #define NAME value (ignore macro arguments)
    define_pattern = re.compile(r'^\s*#define\s+([A-Za-z_][A-Za-z0-9_]*)\b(?!\()', re.MULTILINE)
    matches = define_pattern.findall(content)

    # Format as comma-separated quoted strings
    quoted = [f'"{name}"' for name in matches]
    print(','.join(quoted))

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python extract_defines.py <header_file>")
        sys.exit(1)

    extract_defines(sys.argv[1])
