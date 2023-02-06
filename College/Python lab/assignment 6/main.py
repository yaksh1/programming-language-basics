# ------program to read 3 subject marks and display pass or failed using classes and objects --------------

# create class
class Person:
  def __init__(self,name,age):
    self.name =name
    self.age =age
    
  def myFunc(abc):
    print("hello I am {}, age {}".format(abc.name,abc.age))

# create object
p1 = Person("Rohan",34)
p2 = Person("Kashish",18)

p1.myFunc()


