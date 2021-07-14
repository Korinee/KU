# -*- coding: utf-8 -*-

import datetime

d = datetime.datetime.now() # 현재 컴퓨터 시스템 날짜 및 시간
datestr = "%4d-%02d-%02d %02d:%02d:%02d" % (d.year, d.month, d.day, d.hour, d.minute, d.second)
print(datestr)
