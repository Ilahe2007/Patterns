n=int(input())
for i in range(n):
  for j in range(n):
    if i==j or (i%2==0 or j%2==1) and (j%2==0 or i%2==1):
      print("*",end='')
    else:
      print('',end=' ')
  print()
