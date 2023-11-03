#!/usr/bin/python
import time;
import calendar 

localtime = time.asctime(time.localtime(time.time()))
print("Current local time : ",localtime)

print("Calender of November 2023")
print(calendar.Month(2023,11))