SECTIONS
{
  . = 0;
  .text :
  {
    KEEP(*(.entry))      /* Place only _start here, first */
    *(.text*)            /* Then everything else */
  }
}
