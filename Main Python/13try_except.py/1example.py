#SYNTAX
try:
  f=open('try.txt')
except Exception as e:
  print(e)

try:
  f=open('test.txt')
except:
  print('\nerror!')
