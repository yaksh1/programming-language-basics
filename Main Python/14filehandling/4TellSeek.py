#f.tell() (tells how many characters are printed)
with open('text.txt') as f: 

  characters=20
  f_content=f.read(characters)
  
  print(f.tell())

#f.seek (to start from any point)
with open('text.txt') as f: 

  characters=20
  f_content=f.read(characters)
  print(f_content,'\n')

  f.seek(0)
  f_content=f.read(characters)
  print(f_content)

  f.seek(50)
  f_content=f.read(characters)
  print(f_content)

