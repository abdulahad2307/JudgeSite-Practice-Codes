

org 100h

mov bx , offset arr

linf:
mov ah ,1
int 21h

mov [bx],al
inc bx

cmp al,0dh
jne linf

ret

arr db 100(?)



