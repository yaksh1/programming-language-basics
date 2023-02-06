#create a list and perform operations
my_list = [2,6,7]
print(my_list)

#add as a single element
my_list.append([45,23]) #[2,6,7,[45,23]]
print(my_list)

#add as a different element
my_list.extend([456,'hello']) #[2,6,7,[45,23],456,'hello']
print(my_list)

#add element at ith location
my_list.insert(1,'insert_example') #[2,'insert_example',6,7,[45,23],456,'hello']
print(my_list)

#delete element at ith location
del my_list[2] #[2,'insert_example',7,[45,23],456,'hello']
print(my_list)

#remove element with value
my_list.remove('hello') #[2,'insert_example',7,[45,23],456]
print(my_list)

#pop
popped = my_list.pop(1) #[2,7,[45,23],456,'hello']
print('popped element: ',popped,'\nremaining list: ',my_list)

#empty the list
my_list.clear() #[]
print(my_list)

#find length  of list
my_list = [4,6,7,6,2,1]
print(len(my_list))

#return the index of the value
print(my_list.index(6))

#return count of the value
print(my_list.count(6))

#sort the list using sorted
print(sorted(my_list)) #original remains same

#sort using .sort
my_list.sort(reverse = True) #changes the original list
print(my_list)

#----------------------------------------------------------------
#                           TUPLE
#----------------------------------------------------------------

#create a tuple with student id,name,age,branch details
stud = (11,'yaksh',19,'CSE')
print(stud)

#length of tuple
print(len(stud))

#join the tuple
tup1 = (3,6)
tup2 = (4,7)
print(tup1+tup2)

#----------------------------------------------------------------
#                           DICTIONARY
#----------------------------------------------------------------

#create a dictionary
dict = {
  "name": ("yaksh",'rahul'),
  "rollNo": 2,
  "prn": 1032210898
}
print(dict)
print(dict['name'][1])

#find keys
print(dict.keys())

#find values
print(dict.values())

#printing the items 
print(dict.items()) #(keys,values)

#adding in the dictionary
dict['college'] = 'mit'
print(dict)

#del - removes the key value pairs
del dict['college']
print(dict)

#empty dictionary
print(dict.clear())

dict = {
  "Name" : "programming language",
  "Rank" : 1,
  'brand' : 'indian',
  'year' : 2020,
  'colors' : ['white', 'blue'],
  'comment' : ["python is the best programming language",5]
}
print(dict)
print(type(dict))