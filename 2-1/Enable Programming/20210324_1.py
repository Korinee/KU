# -*- coding: utf-8 -*-

# 키 입력에 의한 이동
import turtle as t          # 터틀 별명을 t로 지정
t.shape("turtle")           # 커서 모양을 거북이로 지정

def moveUp():               # 사용자 정의 함수
    t.setheading(90)        # 커서 방향을 위쪽으로 설정(오른쪽 방향이 0, 위쪽 방향이 90)
    t.forward(30)           # 커서 30픽셀 전진
    datestr = "파이썬 프로그래밍" # 파이썬 프로그래밍 문자열을 datestr에 저장
    t.write(datestr, font = ("굴림", 20, "normal")) # 위쪽방향기를 누를때마다 문자열이 출력됨
    
t.onkeypress(moveUp, "Up")  # 키 입력 이벤트 정의(위쪽 방향키)
t.listen()                  # 키보드 입력 포커스

t.done()
