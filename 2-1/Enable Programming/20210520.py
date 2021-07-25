#!/usr/bin/env python
# coding: utf-8

# In[1]:


import numpy as np
arr1 = np.array([[1,2,3],[4,5,6],[7,8,9],[10,11,12]])  # 메서드
print(arr1)
print(arr1.shape)  # 속성 출력


# In[2]:


print(arr1[1,2]) # 1행 1열 (0행 0열 부터 시작)
print(arr1[:,2]) # 2열 전체


# In[3]:


data1 = np.random.randn(5,5)  # 정규분포 난수
print(data1)


# In[4]:


np.sum(data1)


# In[5]:


np.mean(data1)


# In[6]:


import matplotlib.pyplot as plt
plt.plot([1,2,3,4],[5,6,2,3])  # 그리기

plt.show()  # 그리기 작업의 마지막 라인에 반드시 작성


# In[7]:


import cv2
imgBGR = cv2.imread('image1.jpg')  # 이미지파일을 읽어 변수에 저장
imgBGR = cv2.cvtColor(imgBGR, cv2.COLOR_BGR2RGB)  # RGB 형식으로 변환

plt.imshow(imgBGR)  # 이미지 출력
plt.show()


# In[3]:


f = open('newfile.txt', 'w')  
# 쓰기전용 파일 오픈, 파일이 없을 경우 생성, 있을 경우 덮어씀
f.write('프로그래밍 활용\n')
f.write('파이썬 프로그래밍\n')

f.close()  # open 함수와 대칭이 되도록 해야 함


# In[4]:


f = open('newfile.txt', 'r')  # 읽기전용 파일 오픈, 파일이 없을 경우 에러
a = f.read()  # 파일 내용 전체를 한꺼번에 읽어 변수에 저장(내용이 적을 경우 사용)
print(a)
f.close()  # open 함수와 대칭


# In[10]:


f = open('newfile.txt', 'r')
while True :  # 마지막 라인일 경우 중단
  text = f.readline()  # 한 라인을 읽어 변수에 저장, 읽은 뒤에는 다음 라인으로 이동
  if not text :  # 라인을 모두 읽었을 경우
    break
  print(text, end='')  # 이 부분이 없을 경우 개행이 추가됨
  
f.close()


# In[9]:


f = open('newfile.txt', 'a')  # 기존 파일에 추가

f.write('프로그래밍 활용\n')
f.write('파이썬 프로그래밍\n')

f.close()


# In[11]:


import shutil
shutil.copy('newfile.txt', 'newfile2.txt')  
# 왼쪽 원본 파일을 오른쪽 목표 파일로 복사


# In[12]:


import os
os.rename('newfile2.txt', 'newfile3.txt')  
# 왼쪽 파일을 오른쪽 파일로 이름 변경, 오른쪽 파일은 없어야 됨


# In[14]:


files = os.listdir("C:/Users/programing/test")  # files 변수는 리스트 구조
for ff in files :  # 디렉터리의 파일 수만큼 반복 
  print(ff)

