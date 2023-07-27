section .data
    hello db 'Hello, Holberton', 10, 0   ; Null-terminated string to be printed with a newline character (10)

section .text
    global main   ; Rename the entry point to 'main'

    extern printf ; Declare the printf function as an external symbol

main:
    ; Call printf to print the string
    mov     rdi, hello              ; Load the address of the string into rdi
    xor     rax, rax                ; Clear rax to indicate printf with zero float registers
    call    printf                  ; Call the printf function

    ; Exit the program
    xor     rdi, rdi                ; Clear rdi (exit code 0)
    mov     rax, 60                 ; syscall number for exit
    syscall                         ; Call the system call to exit

