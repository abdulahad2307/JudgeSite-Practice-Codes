import turtle
from alphabet import alphabet
myPen = turtle.Turtle()
myPen.hideturtle()
myPen.speed(-130)
window = turtle.Screen()
window.bgcolor("#000000")
myPen.pensize(3.9)

def displayMessage(message,fontSize,color,x,y):
  myPen.color(color)
  message=message.upper()
  
  for character in message:
    if character in alphabet:
      letter=alphabet[character]
      myPen.penup()
      for dot in letter:
        myPen.goto(x + dot[0]*fontSize, y + dot[1]*fontSize)
        myPen.pendown()
        
      x += fontSize
      
    if character == " ":
      x += fontSize
    x += characterSpacing 

#Main Program Starts Here

#Flag

def ractangle(color):
    myPen.begin_fill()
    myPen.fillcolor(color)
    for i in range(2):
        myPen.forward(365)
        myPen.right(90)
        myPen.forward(200)
        myPen.right(90)
    myPen.end_fill()
def circle(color):
    myPen.begin_fill()
    myPen.fillcolor(color)
    myPen.circle(-70)
    myPen.end_fill()

myPen.up()
myPen.goto(-190, -150)
myPen.down()
myPen.goto(-190, 200)
ractangle('#006a4e')

myPen.goto(-188.5,170)
myPen.color('#006a4e')
myPen.forward(150)
circle('#f42a41')

#String

fontSize = 26
characterSpacing = 3
fontColor = "#FFD700"

message = " Fifty "
displayMessage(message,fontSize,fontColor,-130,-50)

message = " Years of "
displayMessage(message,fontSize,fontColor,-178,-100)

message = "Glory"
displayMessage(message,fontSize,'#f42a41',-103,-150)
               
               
message = "Happy Independence Day!"
displayMessage(message,26,'#FFFFFF',-313,-200)

message = "BANGLADESH"
displayMessage(message,39,'#006a4e',-190,-250)


myPen.exitonclick()



