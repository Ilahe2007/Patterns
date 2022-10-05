n=input().split()
del n[0]
for i in n:
  i=int(i)
  for a in range(i):
    for b in range(i):
      if (a==b or a+b==i-1):
        print('X',end='')
      else:
        print('',end=' ')
    print(' ')
  print(' ')
