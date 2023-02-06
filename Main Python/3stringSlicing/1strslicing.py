#String Slicing
var="hello world"
print(var[1])

#WANT A SPECIFIC ELEMENT
var1="you are awesome"
print(var1[0:4]) #first no. including , second no. excluding

#IF YOU PUT NO. MORE THAN ELEMENTS
var2="just do it"
print(var2[0:69])

#diff ways
print(var2[:5]) # 0 maan lega
print(var2[0:]) # end element maan lega
print(var2[:]) # 0 se end tak

#ALTERNATE ELEMENTS
print(var2[0:7:2]) 

#NEGATIVE NUMBERS
print(var2[-6:-1])
print(var2[::-2])