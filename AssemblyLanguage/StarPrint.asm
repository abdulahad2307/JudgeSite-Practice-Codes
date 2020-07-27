

org 100h

mov cx ,5

mov dl, '*'

star:
mov ah , 2
int 21h
loop star

ret




