#!/usr/bin/env python
# coding: utf-8

# In[1]:


import matplotlib.pyplot as plt
import numpy as np


# In[3]:


plt.plot([1,2,3,4])
plt.ylabel('number')
plt.show()


# In[4]:


plt.plot([1,2,3,4],[1,4,9,16])  # 그래프 x, y축 정해주기
plt.show()  # 그래프 보여주기


# In[6]:


plt.plot([1,2,3,4],[1,4,9,16], 'ro')  # 그래프 모양 빨간원으로 변경
plt.axis([0,6,0,20])  # x,y 축 최소, 최대
plt.show()  # 그래프 보여주기


# In[14]:


t = np.arange(0., 5.0, 0.2)  # 0 ~ 5 까지 0.2 간격 리스트 생성
plt.plot(t, t, 'r--', t, t**2, 'bs', t, t**3, 'g^')
plt.show()


# In[11]:


names = ['group_a', 'group_b', 'group_c']  # 각 이름 설정
values = [1, 10, 100]  # 이름에 값 부여

plt.figure(figsize=(9,3))  # 면적으로 설정, 인치 단위, 분할그래프 시작

plt.subplot(1, 3, 1)  # 1행 3열 첫번째
plt.bar(names, values)

plt.subplot(1, 3, 2)  # 1행 3열 두번째
plt.scatter(names, values)

plt.subplot(1, 3, 3)  # 1행 3열 세번째
plt.plot(names, values)

plt.suptitle('Cateforial Plotting')  # 그래프 전체 제목 설정

plt.show()


# In[13]:


t = np.arange(0.0, 2.0, 0.01)
s = 1 + np.sin(2 * np.pi * t)  # sin 2ㅠ = 360도, t가 2일경우 720도
fig, ax = plt.subplots()
ax.plot(t, s)
ax.set(title = 'Sample Plot')  # 그래프 제목 생성
ax.grid()  # 그래프에 칸 만들기

plt.show()


# In[15]:


x1 = np.linspace(0.0, 5.0)
x2 = np.linspace(0.0, 2.0)
y1 = np.cos(2 * np.pi * x1) * np.exp(-x1)
y2 = np.cos(2 * np.pi * x2)


# In[16]:


plt.subplot(2, 1, 1)
plt.plot(x1, y1,'o-')

plt.subplot(2, 1, 2)
plt.plot(x2, y2, '.-')

plt.show()


# In[18]:


plt.plot([1,2,3], label="Line 1", linestyle='--')
plt.plot([3,2,1], label="Line 2", linewidth=4)

plt.legend()

plt.show()


# In[19]:


import matplotlib.image as mpimg


# In[21]:


img = mpimg.imread('image1.jpg')  # 이미지파일을 읽어 변수에 저장
plt.imshow(img)  # 이미지 출력

plt.xticks([])  # x 눈금 제거
plt.yticks([])  # y 눈금 제거

plt.show()


# In[29]:


# 임의의 이미지 4개를 각각 2행 2열로 배치 (image1,2,3,4)

img1 = mpimg.imread('img1.jpg')
img2 = mpimg.imread('img2.png')
img3 = mpimg.imread('img3.jpg')
img4 = mpimg.imread('img4.jpg')

plt.subplot(2,2,1)
plt.title('img1')
plt.imshow(img1)
plt.xticks([])  # x 눈금 제거
plt.yticks([])  # y 눈금 제거

plt.subplot(2,2,2)
plt.title('img2')
plt.imshow(img2)
plt.xticks([])  # x 눈금 제거
plt.yticks([])  # y 눈금 제거

plt.subplot(2,2,3)
plt.title('img3')
plt.imshow(img3)
plt.xticks([])  # x 눈금 제거
plt.yticks([])  # y 눈금 제거

plt.subplot(2,2,4)
plt.title('img4')
plt.imshow(img4)
plt.xticks([])  # x 눈금 제거
plt.yticks([])  # y 눈금 제거

plt.show()

