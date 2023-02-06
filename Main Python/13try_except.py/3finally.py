#FINALLY (The finally block, if specified, will be executed regardless if the try block raises an error or not.)
try:
  print("hello")
except:
  print('error')
finally:
  print('finished')

try:
  print(x)
except:
  print('error')
finally:
  print('finished')