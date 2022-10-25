#!/usr/bin/python

import time;
import calendar;

# current local time

localtime= time.asctime(time.localtime(time.time()))

print("current local time: ",localtime)

print("Calender of march, 2022 :")
print (calendar.month(2022,3))
