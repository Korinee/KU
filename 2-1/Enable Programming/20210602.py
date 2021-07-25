#!/usr/bin/env python
# coding: utf-8

# In[2]:


from bs4 import BeautifulSoup
import pandas as pd
import urllib.request as ulib


# In[3]:


url = 'http://apis.data.go.kr/B552584/ArpltnInforInqireSvc/getCtprvnRltmMesureDnsty?serviceKey=8il3aySLkvVRYde7JaWr526jTITMHODcNWiAx4aBXxRtzWpltHesMTKa3NFsqXQuYwGuKHp%2B4bzcLEW6g0Gn2Q%3D%3D&returnType=xml&numOfRows=100&pageNo=1&sidoName=%EC%84%9C%EC%9A%B8&ver=1.0'
res = ulib.urlopen(url)
air = BeautifulSoup(res, "html.parser")


# In[8]:


df1 = []
df2 = []
for item in air.findAll('item') : 
    for stationname in item.findAll('stationname') : 
        df1.append(stationname.string)
    for pm10value in item.findAll('pm10value') :
        df2.append(pm10value.string)
        
print(df1)
print(df2)
df = pd.DataFrame({'측정소':df1, 'pm10':df2},)
df.head()
df.to_csv('test100.csv')


# In[9]:


df1 = []
df2 = []
for item in air.findAll('item') : #item태그를 찾아가기 위해
    for stationname in item.findAll('stationname') : 
        df1.append(stationname.string) #출력된 노드의 태그안 내용
    for pm10value in item.findAll('pm10value') :
        df2.append(pm10value.string)
        
print(df1)
print(df2)


# In[15]:


url = 'http://apis.data.go.kr/B552584/ArpltnInforInqireSvc/getMsrstnAcctoRltmMesureDnsty?serviceKey=8il3aySLkvVRYde7JaWr526jTITMHODcNWiAx4aBXxRtzWpltHesMTKa3NFsqXQuYwGuKHp%2B4bzcLEW6g0Gn2Q%3D%3D&returnType=xml&numOfRows=10&pageNo=1&stationName=%EC%A2%85%EB%A1%9C%EA%B5%AC&dataTerm=DAILY&ver=1.0'
res = ulib.urlopen(url)
air = BeautifulSoup(res, "html.parser")


# In[19]:


df1 = []
df2 = []
for item in air.findAll('item') : #item태그를 찾아가기 위해
    for datatime in item.findAll('datatime') : 
        df1.append(datatime.string[11:]) #출력된 노드의 태그안 내용
    for pm10value in item.findAll('pm10value') :
        df2.append(pm10value.string)
        
print(df1)
print(df2)
df = pd.DataFrame({'시간':df1, 'pm10':df2},)
df


# In[20]:


import matplotlib.pyplot as plt
plt.plot(df1, list(map(int, df2)), 'r--') #df2는 형변환
plt.show()


# In[ ]:




