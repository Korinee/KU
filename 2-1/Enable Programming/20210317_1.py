# -*- coding: utf-8 -*-

import turtle as t # 터틀 별명을 t로 지정

t.shape('turtle') # 커서 모양을 터틀모양으로 지정

'''
t.forward(50) # 터틀 머리방향으로 50픽셀 전진
t.right(90) # 시계방향 90도 회전
t.forward(50) # (50픽셀 전진)

t.penup() # 터틀이 움직이면서 이동하는 선 그리기 중지
t.goto(100, 200) # 원점에서 x방향으로 100픽셀, y방향으로 200픽셀 이동
t.pendown() # 이동하는 선 그리기 시작

t.goto(-100, 0) # 원점에서 x방향 반대편으로 100픽셀 이동
'''

# 별표 그리기
'''
for i in range(5) : # 반복블락(5번 반복)
    t.forward(100) # 앞으로 100픽셀 전진 이동
    t.right(144) # 시계방향으로 144도 회전
'''

# sin 함수 그리기

import math # sin 함수 사용하려면 써줘야함

t.penup() # 터틀이 움직이면서 이동하는 선 그리기 중지
t.goto(-360, 0) # x축 반대방향으로 360픽셀 이동시켜서 시작시킴
t.pendown() # 이동하는 선 그리기 시작

for x in range(-360, 360) : 
    t.goto(x, 300 * math.sin(x * 3.14 / 180)) 
    # 일반각을 radian 각으로
    # 300을 곱해준이유는 sin함수 값이 1이 최대이므로 이동한거리의 가시성을 높이기위함


t.done() #turtle 그래픽 종료
