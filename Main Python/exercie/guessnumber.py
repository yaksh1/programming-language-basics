guess=1
while (guess<=9):

  a = int(input("enter your guess \n"))
  if a<20:
    print('increase your number\n')
    
  elif a>20:
    print('decrease your number\n')
    
  else:
    print('you guessed correctly\n')
    break
  print(9-guess,"no. of guesses are left")
  guess += 1

if guess>9:
  print('game over')