

org 100h
mov bx , offset arr
mov cx , 0

input:
mov ah,1
int 21h
cmp al , 0dh
je next
mov [bx],al
inc bx
inc cx
jmp input

next:
mov bx, offset arr
mov dl,0dh
mov ah,2
int 21h
mov dl, 0ah
int 21h


print:
mov dl , [bx]
cmp dl , 0dh
je end
cmp dl , 97
inc bx
jl print
cmp dl, 122
jg print
mov ah,2
int 21h

loop print

end:


ret

arr db 100 dup(?)



