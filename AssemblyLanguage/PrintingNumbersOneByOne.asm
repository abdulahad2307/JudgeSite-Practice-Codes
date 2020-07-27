

org 100h

mov dl, 78

mov ah, 0
mov al,dl

mov bl,10

div bl
mov cl, ah

mov dl,al
add dl,'0'
mov ah,2
int 21h

mov dl, cl
add dl, '0'
mov ah,2
int 21h

ret




