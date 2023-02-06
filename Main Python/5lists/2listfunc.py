#APPEND( adds at end)
var=[1,4,2,56,9]
var.append(6)
print(var)

#INSERT (insert at any point)
var1=[2,5,67,4,53]
var1.insert(1,8)
var1.insert(3,13)
print(var1)

#REMOVE (remove any)
var2=[3,6,36,8,45]
var2.remove(3)
print(var2)

#POP (remove last ele)
var3=[4,6,34,53]
var3.pop()
print(var3)

#SORT (LOW TO HIGH)
chips=["pringles","doritos","lays","balaji","mad angles"]
chips.sort()
print(chips)

#REVERSE (REVERSE ORDER)
chips=["pringles","doritos","lays","balaji","mad angles"]
chips.reverse()
print(chips)

#CHANGE VALUE
num=[2,5,6,34]
num[2]=7
print(num)

#CLEAR LIST
a=[1,"dfdf",5,3,6]
a.clear()
print(a)

#COPY LIST
b=[3,5,4,6]
x=b.copy()
print(x)

#COUNT ELEMENTS (count no. of specified ele)
c=[4,6,4,5,67,8,4]
y=c.count(4)
print(y)

#EXTEND LISTS
cars=["ford","maruti","bugati"]
laps=["asus","lenevo","msi"]
cars.extend(laps)
print(cars)

#INDEX (find ele position)
d=[2,4,56,7,6,7]
print(d.index(7))