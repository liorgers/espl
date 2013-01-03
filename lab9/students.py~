#!/usr/bin/env python 

import sys

input = open("grades.csv")

studentMap = {}
input.next()
for line in input:
  line = line.strip()
  splittedLine = line.split(',')
  try:
    studentMap[splittedLine[2]]+=1
  except KeyError:
    studentMap[splittedLine[2]] = 1
  except: pass

for grade in studentMap.items():
  print grade
