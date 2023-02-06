#ADD (Adds an element to the set)
a={1,4,5}
a.add(6)
print(a)

#CLEAR (removes all elements in a set.)
a={4,5,6}
a.clear()
print(a)

#COPY (Returns a copy of the set)
a={1,3,4}
x=a.copy()
print(x)

#DIFFERENCE (Returns a set containing the difference between two or more sets)

#NOTE: Return a set that contains the items that only exist in set x, and not in set y:
x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
z = x.difference(y)
print(z)

x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
l= {"banana","yolo"}
z = x.difference(y,l)
print(z)

#DIFFERENCE_UPDATE() (Removes the items in this set that are also included in another, specified set)
a={1,2,3}
b={3,4,5}
a.difference_update(b)
print(a)

"""NOTE:The difference_update() method is different from the difference() method, because the difference() 
method returns a new set, without the unwanted items, 
and the difference_update() method removes the unwanted items from the original set."""

#DISCARD
a={1,3,4}
a.discard(1)
print(a)

#INTERSECTION (Return a set that contains the items that exist in both set x, and set y:)

x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
z = x.intersection(y)
print(z)

#INTERSECTION_UPDATE() (Remove the items that is not present in both x and y:)

x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
x.intersection_update(y)
print(x)

#DISJOINT (Return True if no items in set x is present in set y:)

x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "facebook"}
z = x.isdisjoint(y)
print(z)

#ISSUBSET (Return True if all items in set x are present in set y:)

x={1,2,3}
y={4,6,8,1,2,3}
z=x.issubset(y)
print(z)

#ISSUPERSET (Return True if all items in set x are present in set y:)

x = {"a", "b", "c"}
y = {"f", "e", "d", "c", "b", "a"}
z = y.issuperset(x)
print(z)

#POP (Remove a random item from the set:)

fruits = {"apple", "banana", "cherry"}
fruits.pop()
print(fruits)
#to print the removed element
a={"apple", "banana", "cherry"}
x=a.pop()
print(a)#new set
print(x)#removed element

#REMOVE (Remove specified element from the set:)

fruits = {"apple", "banana", "cherry"}
fruits.remove("banana")
print(fruits)

#SYMMETRIC_DIFFERENCE() (Return a set that contains all items from both sets, except items that are present in both sets:)

x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
z = x.symmetric_difference(y)
print(z)

#SYMMETRIC_DIFFERENCE_UPDATE() (Remove the items that are present in both sets, AND insert the items that is not present in both sets:)

x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
x.symmetric_difference_update(y)
print(x)

#UNION (Return a set that contains all items from both sets, duplicates are excluded:)
x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
z = x.union(y)
print(z)

#UPDATE (Insert the items from set y into set x:)

x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
x.update(y)
print(x)