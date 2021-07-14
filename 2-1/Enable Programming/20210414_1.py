# -*- coding: utf-8 -*-

'''
# 1부터 10까지 정수의 합
tot = 0
for a in range(11) :   # 0 ~ 10
    tot += a
print(a, tot)
'''

'''
# 1부터 10까지 홀수의 합
tot = 0
for a in range (1, 11, 2):  # 1부터 9까지 2씩 증가
    tot += a
print(a, tot)
'''

'''
# 1부터 10까지 짝수의 합
tot = 0
for a in range(2, 11, 2):  # 2부터 10까지 2씩 증가
    tot += a
print(a, tot)
'''

'''
# 1부터 20까지 3의 배수의 합
tot = 0
for a in range(3, 21, 3):  # 3부터 20까지 3씩 증가
    tot += a
print(a, tot)
'''

'''
# 1부터 10까지의 합 (while 문)
tot = 0
a = 1
while a <= 10 :  # 1부터 10까지
    tot += a
    a += 1
print(a, tot)  # a값은 증가되어 있음(주의)
'''

'''
# break문
tot = 0
a = 0
while True :  # 무한반복
    tot += a
    a += 1
    if tot > 100 :
        break
print(a, tot)  # a값은 증가되어 있음
'''

'''
# 1부터 10까지 홀수의 합 (continue 문)
tot = 0
for a in range(11) :  
    if a % 2 == 0 :  # 만약 짝수라면 아래를 건너뜀
        continue
    tot += a
print(a, tot)
'''

