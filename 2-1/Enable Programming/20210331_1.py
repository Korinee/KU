# -*- coding: utf-8 -*-

# x1 ~ x2 의 정수의 합
def func_sum(x1, x2) : 
    tot = 0
    for i in range(x1, x2 + 1) :
        tot += i
    print(tot)
    
print(func_sum(5, 10))  #호출

def func_tot(x) : 
    tot = 0  # 초기화
    for i in range(x + 1) : 
        tot += i
    return tot

print("합계는 : ", func_tot(10))

# 내장함수

# 수학 관련 모듈
import math  # sqrt기능을 사용하기 위해서는 math가 필요함
print(math.sqrt(5))
print(math.pi)
print(math.sin(math.radians(30)))  # sin에서 일반각을 사용하기 위해서는 radians을 넣어줘야한다

import random
for i in range(5) : 
    print(random.randint(1, 10))  # 1 ~ 10 정수난수(균등분포)
    
for i in range(5) : 
    print(randeom.uniform(1, 100))
