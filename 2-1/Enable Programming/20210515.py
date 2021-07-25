#!/usr/bin/env python
# coding: utf-8

# In[3]:


class Car:
  def __init__(self, carName) : # 생성자
    self.carName = carName    # self.속성명
    self.carSpeed = 100
    print(self.carName, '생성')
  def speedUp(self, speed) : # 메서드
    self.carSpeed += speed
    print(self.carName, '속도:', self.carSpeed)


# In[4]:


car1 = Car('승용차1')   # 객체 생성
car1.speedUp(20)
car1.speedUp(50)


# In[5]:


car2 = Car('승용차2')
car2.speedUp(50)


# In[ ]:




