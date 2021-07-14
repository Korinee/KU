# -*- coding: utf-8 -*-

a = 10 # a에 10을 대입

#1
if a > 0 :  # 만약 a가 0 초과라면
    print("양수") # 양수라는 단어를 출력함
    
print("종료") # 무조건 실행되는 출력문

#2
if a > 0 : 
    print("양수")
else :  # a가 0 초과가 아닌 다른 경우 즉, a가 0이하인 경우
    print("음수") # 음수라는 단어를 출력함
    
print("종료")

#3
if a > 0 : 
    print("양수")
elif a < 0 : 
    print("음수")
else :  # a가 0보다 크거나 작은게 아닌 나머지 즉, a가 0인 경우
    print("Zero") # Zero라는 단어를 출력
    
print("종료")

#4
if a < 0 : 
    pass #실행할 내용이 없으나 블락을 구성해야 할 경우 사용
else : 
    print("양수")
    
    
print("종료")

#5
if a == 0 : # a가 0과 같은 경우
    print("Zero")
elif a < 0 : 
    print("음수")
else : 
    print("양수")
    
print("종료")

#6
a = 85
if a >= 90 and a <= 100 : # a가 90~100인 경우
    print("A")
else :
    print("B")
    
print("종료")

#7
# 입력값이 0 ~ 100 범위로 가짐
score = int(input("정수를 입력하세요 : ")) # score 타입은 정수
if score >= 90 :
    print("A")
elif score >= 80 : 
    print("B")
elif score >= 70 : 
    print("C")
elif score >= 60 :
    print("D")
else : 
    print("F")

print("종료")
