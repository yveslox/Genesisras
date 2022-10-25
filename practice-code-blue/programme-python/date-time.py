#!/usr/bin/python

import time;
import calendar

#current local time 
localtime = time.asctime(time.localtime(time.time()))
print("Current local time :",localtime)

#Calender of a month
print("Calender of april, 2022: ")
print(calendar.month(2022, 4))
