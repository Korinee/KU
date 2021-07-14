# -*- coding: utf-8 -*-

# 1부터 10까지 홀수의 합 (while 반목문)
tot = 0
a = 1
while a <= 10 :
    if a % 2 == 1 : # 홀수일 경우
        tot += a
    a += 1          # 계속 반복
print(a, tot)


# 1부터 10까지 짝수의 합 (while 반목문)
tot = 0
a = 1
while a <= 10 :
    if a % 2 == 0 : # 짝수일 경우
        tot += a
    a += 1          # 계속 반복
print(a, tot)



# 1부터 20까지 3의 배수의 합 (while 반목문)
tot = 0
a = 1
while a <= 20 :
    if a % 3 == 0 :
        tot += a
    a += 1
print(a, tot)
