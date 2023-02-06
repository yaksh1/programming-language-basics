


def fact(n):
  if n>1:
    return n*fact(n-1)
  else:
    return n
num=int(input('enter your number: '))

print('factorial of the number is:',fact(num))

    