#IF FILE DOESNOT EXISTS IT IS CREATED
with open('text2.txt','w') as f:
  print(f.write('new file created\n'))

with open('text2.txt','a') as f:
  print(f.write('WE CAN ADD ANYTHING USING APPENDING.'))

#CREATE AND READ 
with open('text3.txt','w') as f:
  print(f.write('i am gonna read this.\n'))

with open('text3.txt','r') as f:
  print(f.read())

#NOTE: 'w' will overwrite if the file already exists


