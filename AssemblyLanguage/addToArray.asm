

org 100h
mov bx , offset arr1
mov si , offset arr2
mov di , offset arr3

mov cx , 5

array:
mov al , [bx]
add al , [si]

mov [di], al

inc bx
inc si 
inc di
loop array

ret

arr1 db 10,15,20,25,30
arr2 db 30,25,20,15,10

arr3 db 5 dup(?)

