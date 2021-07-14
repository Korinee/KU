# -*- coding: utf-8 -*-

# sin 곡선 그리기
import math
import turtle as t

t.shape("turtle")

t.penup()
t.goto(-360, 0)
t.pendown()
for x in range(-360, 360, 1) :
    y = math.sin(math.radians(x)) * 100
    t.goto(x,y)

t. done()
