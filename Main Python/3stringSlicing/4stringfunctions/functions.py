var="tom is an actor"
var1="heyoworld"
var2="harry4"
var3="7786"
#ALNUM
print(var.isalnum())
print(var1.isalnum())
print(var2.isalnum())

#ALPHA
print(var.isalpha())
print(var1.isalpha())
print(var2.isalpha())

#NUMERIC
print(var2.isnumeric())
print(var3.isnumeric())

#ENDSWITH
print(var.endswith("r"))
print(var1.endswith("world"))
print(var2.endswith("7"))

#COUNT
print(var.count("a"))

#CAPITALIZE
print(var.capitalize())

#FIND
print(var.find("an"))

#LOWER
print(var1.lower())

#UPPER
print(var2.upper())

#REPLACE
print(var.replace("tom","Rohan"))

print(var.translate("hindi"))
