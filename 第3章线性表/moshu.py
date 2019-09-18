# -*- coding: utf-8 -*-
# @Author: lcl1026504480
# @Date:   2019-09-16 21:47:15
# @Last Modified by:   lcl1026504480
# @Last Modified time: 2019-09-16 21:48:27
a = [[13, 12]]
n = 0
for i in range(11, 1, -1):
    b = []
    b.append(a[n][-1])
    b.append(i)
    for j in range(0, len(a[n]) - 1):
        b.append(a[n][j])
    a.append(b)
    n += 1
print(a)
