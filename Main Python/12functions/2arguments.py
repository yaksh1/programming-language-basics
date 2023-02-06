#ARGUMENT
def func(a,b):
  print(a+b)

func(2,4)

#ARBITRARY ARGUMENT 
#NOTE If the number of arguments is unknown, add a * before the parameter name:

def my_function(*kids):
  print("The youngest child is " + kids[2])

my_function("Emil", "Tobias", "Linus")

#KEYWORD ARGUMENT
def func(a,b):
  print(a-b)

func(b=2,a=4)

#ARBITRARY KEYWORD ARGUMENT
def my_function(**kid):
  print("His last name is " + kid["lname"])

my_function(fname = "Tobias", lname = "Refsnes")

#DEFAULT PARAMETER
#1
def my_function(country = "Norway"):
  print("I am from " + country)

my_function("Sweden")
my_function("India")
my_function()
my_function("Brazil")

#2
def hum(a=8,b=2):
  print(a+b)

hum(3,6)
hum()
hum(4,1)
