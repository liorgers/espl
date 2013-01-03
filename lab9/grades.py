#!/usr/bin/env python 

import sys

input = open("grades.csv")

sum = 0
counter = 0

for line in input:
  line = line.strip()
  splittedLine = line.split(',')
 # print splittedLine[2]
 # if counter != 0:
  try:
    sum = sum + float(splittedLine[2])
    print sum
 
  except: pass
  counter = counter + 1
print sum/counter