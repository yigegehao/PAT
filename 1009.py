import re

str = input()
regex = re.compile('\s+')
j = regex.split(str)
j.reverse()
print(j)
for i in j:
    if i==j[-1]:
        print(i,end='')
    else:
        print(i + ' ',end='')

