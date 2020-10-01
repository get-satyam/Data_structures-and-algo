import sys
n= input()
n=int (n)
d={}
for i in range(n):
    data = input().split('')
    d[data[0]] = data[1]

b = sys.stdin.readlines()
for i in b:
    name = i.strip()
    if name in d:
        print(name+ '=' + str( d[name] ))
        
   
    else:
        print('Not found')
    
