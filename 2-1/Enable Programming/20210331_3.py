# -*- coding: utf-8 -*-


# 아래, 왼쪽, 오른쪽 방향키 사용 함수 추가(Down, Left, Right)
import turtle as t

t.shape("turtle")

def moveUp() : 
    t.setheading(90)
    t.forward(30)
    
t.onkeypress(moveUp, "Up")  # 위쪽 방향키를 눌렀을 경우

def moveDown() : 
    t.setheading(270)
    t.forward(30)
    
t.onkeypress(moveDown, "Down")  # 아래쪽 방향키를 눌렀을 경우

def moveLeft() : 
    t.setheading(180)
    t.forward(30)
    
t.onkeypress(moveLeft, "Left")  # 왼쪽 방향키를 눌렀을 경우

def moveRight() : 
    t.setheading(360)
    t.forward(30)
    
t.onkeypress(moveRight, "Right")  # 오른쪽 방향키를 눌렀을 경우


t.listen()  # 키보드 입력 이벤트 처리를 위해 필요
t.done()
