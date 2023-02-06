#1
with open('text.txt') as f:
  print(f.read(),'\n')

#2
with open('text.txt') as f:
  print(f.readline(),end=" ")
  print(f.readline())

#3
with open('text.txt') as f:
  print(f.readlines(),'\n')

#4
with open('text.txt') as f:
  for line in f:
    print(line,end='')

print('\n') 

#5 (TO READ SPECIFIC NUMBER OF CHARACTERS)
with open('text.txt') as f:
  print(f.read(50),end='')
  print(f.read(50),'\n')

#6 (TO READ A HUGE FILE)
with open('text.txt') as f:

  characters=10
  f_content=f.read(characters)

  while len(f_content)>0 :
    print(f_content,end='*') #after every 10 characters theres a asterisk
    f_content=f.read(characters)

print('\n')


  
