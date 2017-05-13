#!/bin/python

import sys


S = raw_input().strip()
l=len(S)
count=0
for i in range(l):
    if((i%3==0 and S[i]!='S') or (i%3==1 and S[i]!='O') or (i%3==2 and S[i]!='S')):
        count+=1
print(count)
