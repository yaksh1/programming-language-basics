x = lambda a : a + 10
print(x(5))

y= lambda a,b: a*b
print(y(3,4))

def func(n):
  return lambda a:a*n

double=func(2)
triple=func(3)
print(double(23))
print(triple(23))
