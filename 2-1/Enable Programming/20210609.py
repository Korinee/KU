#!/usr/bin/env python
# coding: utf-8

# In[1]:


import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
import matplotlib.font_manager as fm


# In[8]:


fl = fm.FontProperties(fname="C:/Windows/Fonts/malgun.ttf").get_name()
plt.rc('font', family=fl)
df = pd.read_csv("./population001.csv", engine="python", encoding="euc-kr")


# In[9]:


print(df['행정구역(시군구)별'])


# In[10]:


print(df[df['행정구역(시군구)별'] == '서울특별시'])


# In[12]:


print(df[df['행정구역(시군구)별'].str.endswith(pat='도')]) # 도로 끝나는 행정구역


# In[14]:


print(df[df['행정구역(시군구)별'].str.endswith(pat='광역시')]) # 광역시로 끝나는 행정구역


# In[15]:


df1 = df[df['행정구역(시군구)별'].str.endswith(pat='도')]
df2 = df[df['행정구역(시군구)별'].str.endswith(pat='광역시')]
df12 = pd.concat([df1, df2]) # 데이터 프레임 병합
print(df12)


# In[16]:


df3 = pd.DataFrame({'행정구역' : df1['행정구역(시군구)별'], '총전입': df1['총전입[명]']}) # 데이터 프레임 생성


# In[17]:


plt.plot(df3['행정구역'],df3['총전입'], 'ro')
plt.show()


# In[ ]:




