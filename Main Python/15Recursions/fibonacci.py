def fibo(n, p=0,c=1):
  if n>0:
    print(c)
    fibo(n-1,c,c+p)
    
# def func(n):
#   if n==1:
#     return 0
#   elif n==2:
#     return 1
#   else:
#     return func(n-1) + func(n-2)

number=int(input('enter: '))
print(fibo(number))

