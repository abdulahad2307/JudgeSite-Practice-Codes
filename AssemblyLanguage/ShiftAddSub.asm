

org 100h

mov ah, 1
int 21h
sub al, '0'
mov bl , al

shl bl,3
shl al,1

add bl,al

mov ah,1
int 21h
sub al, '0'

add bl, al

ret




