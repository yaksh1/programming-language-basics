#IF FILE EXISTS
import os
if os.path.exists('deletethis.txt'):
  os.remove('deletethis.txt')
else:
  print('file does not exists')

#IF FILE DOESN'T EXISTS
import os
if os.path.exists("demofile.txt"):
  os.remove("demofile.txt")
else:
  print("The file does not exist")


  