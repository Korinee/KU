# -*- coding: utf-8 -*-

str1 = "0123456789" # 문자열 저장
str2 = 'abcdefghijk'
 
print("%s" % str1[0]) # 0번째 출력
print("%s" % str1[2:7]) # 2 ~ 6까지 출력
print("%s" % str1[5:]) # 5 ~ 끝까지 출력
# len은 괄호안 배열의 크기를 나타냄
print("%d %d" % (len(str1), len(str2))) # 형식이 2개 이상일 경우 괄호 필요

str3 = "012345'6789" # 큰 따옴표안에 작은따옴표가 들어가도 출력됨
str4 = '1bcde"fgh' # 작은 따옴표안에 큰따옴표가 들어가도 출력됨
str5 = "012345\n6789" # \n은 줄바꿈을 처리해줌

print("%s" % str3)
print("%s" % str4)
print("%s" % str5)

str1 = "파이썬 문자열 다루기"
str2 = "파이썬의 문자열 관련 함수"
str3 = "      파이썬 문자열      "
str4 = "파이썬:문자열:다루기" # :를 통해 칸막이 효과를 나타낼수 있음

print(str1.find("문자")) # str1에서 "문자" 단어가 시작되는 위치의 인덱스 반환
print(str2.find("클래스")) # str2에서 "클래스" 단어가 시작되는 위치의 인덱스 반환
# 만약 문자열에 단어가 포함되어있지 않으면 -1 반환
print(str1.find("문자열", 8)) # 8의 위치에서부터 검색
# 8의 위치부터는 검색할 수 없기때문에 실패함 즉, -1 반환
print(str3) # 앞뒤로 공백이 있어도 공백과 같이 출력됨
print(str3.strip()) # 앞뒤 공백을 제거하고 출력함. 단, 중간 공백은 제거 불가 
print(str1.replace("파이썬", "장고")) # "파이썬" 단어를 "장고"단어로 바꿈
print(str1.split()) # 문자열 중간 공백을 기준으로 나눠서 단어마다 구분해서 출력
print(str4.split(":")) # ":"문자를 기준으로 나눠서 단어마다 구분해서 출력
