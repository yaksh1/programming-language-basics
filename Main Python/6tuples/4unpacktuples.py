#UNPACKING
a=(1,3,4)
(x,y,z)=a
print(x)
print(y)
print(z)

#NOTE: The number of variables must match the number of values in the tuple, if not, you must use an asterisk to collect the remaining values as a list.

#USING ASTERISK(*)
fruits = ("apple", "banana", "cherry", "strawberry", "raspberry")
(green, yellow, *red) = fruits
print(green)
print(yellow)
print(red)

#IF ASTERISK ADDED TO ANOTHER VARIABLE
fruits = ("apple", "mango", "papaya", "pineapple", "cherry")
(green, *tropic, red) = fruits
print(green)
print(tropic)
print(red)
#Python will assign values to the variable until the number of values left matches the number of variables left.