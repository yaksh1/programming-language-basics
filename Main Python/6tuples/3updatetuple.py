#CHANGE TUPLE VALUE
x = ("apple", "banana", "cherry")
y = list(x)
y[1] = "kiwi"
x = tuple(y)
print(x)

#ADD IN TUPLE USING APPEND
thistuple = ("apple", "banana", "cherry")
y = list(thistuple)
y.append("orange")
thistuple = tuple(y)
print(thistuple)

#ADD IN TUPLE USING INSERT
thistuple = ("apple", "banana", "cherry")
y = list(thistuple)
y.insert(1,"orange")
thistuple = tuple(y)
print(thistuple)

#ADDING TWO TUPLES
thistuple = ("apple", "banana", "cherry")
y = ("orange",)
thistuple += y
print(thistuple)

#REMOVING FROM TUPLE
thistuple = ("apple", "banana", "cherry")
y = list(thistuple)
y.remove("apple")
thistuple = tuple(y)
print(thistuple)

#DELETING TUPLE
a = ("apple", "banana", "cherry")
del a
print(a) 
#this will raise an error because the tuple no longer exists

