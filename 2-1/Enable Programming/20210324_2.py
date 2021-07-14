# -*- coding: utf-8 -*-

# 마우스 클릭 이동
import turtle as t          # 터틀 별명을 t로 지정
import datetime
t.shape("turtle")           # 커서 모양을 거북이로 지정

def move(x,y):              # 사용자 정의 함수 : 마우스 좌표가 전달됨
    t.penup()               # 그리기 상태 해제
    t.goto(x,y)             # (x,y) 좌표로 커서 이동
    t.pendown()             # 그리기 설정
    
    d = datetime.datetime.now() # 현재 컴퓨터 시스템 날짜 및 시간
    datestr = "%4d-%02d-%02d %02d:%02d:%02d" % (d.year, d.month, d.day, d.hour, d.minute, d.second)
    t.write(datestr, font = ("굴림", 15, "normal"))
    
t.onscreenclick(move,1)     # 마우스 왼쪽버튼 클릭 이벤트 정의 (마우스 중간은 2, 왼쪽은 3으로 사용가능함)

t.done()
