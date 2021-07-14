# -*- coding: utf-8 -*-

import turtle as t
t.shape("turtle")

t.penup()
t.goto(-100,-100)
t.pendown()

for i in range(4):    
    t.forward(200)
    t.left(90)

def decision(x,y):
    if -100<=x<=100 and -100<=y<=100:
        t.pencolor('blue')     
    else:
        t.pencolor('red')
        
    t.penup()
    t.goto()
    t.pendown
    t.circle(5)
         
t.onscreenclick(decision,1)

t.done
