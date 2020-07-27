
org 100h

mov bx , offset arr
mov cx , 0 

input:
mov ah,1
int 21h
cmp al, 0dh
je next

mov [bx],al
inc bx
inc cx
jmp input

next:
mov ah,2
mov dl, 0dh
int 21h
mov dl,0ah
int 21h
mov bx, offset arr

print:
mov dl,[bx]
mov ah,2
int 21h
inc bx
loop print

ret

arr db 100 dup(?)


