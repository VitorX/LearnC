.text       # Section declaration
    .global main

main:
    # Write our string to stdout
    movl $len, %edx
    lea msg, %ecx # load the effective address (=lea) of msg into ecx
    movl $1, %ebx
    movl $4, %eax
    int $0x80 # call the Kernel

    # Exit
    movl $0, %ebx
    movl $1, %eax
    int $0x80

.data
msg:
    .ascii "Hello, world!\n"        # Our string
    len = . - msg       # Length of the string
