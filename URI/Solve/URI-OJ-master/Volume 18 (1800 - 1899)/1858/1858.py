#!/usr/bin/env python3

n = int(input())
l = [int(i) for i in input().split(' ')]
print(l.index(min(l))+1)