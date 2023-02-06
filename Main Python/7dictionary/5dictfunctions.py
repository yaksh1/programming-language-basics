#CLEAR DICTIONARY
car = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
car.clear()
print(car)

#COPY DICT
car = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
x = car.copy()
print(x)

#FROMKEYS (The fromkeys() method returns a dictionary with the specified keys and the specified value.)
x = ('key1', 'key2', 'key3')
y = 0
thisdict = dict.fromkeys(x, y)
print(thisdict)

#GET
car = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
x = car.get("model")
print(x)

#ITEMS
car = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
x = car.items()
print(x)

#KEYS
car = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
x = car.keys()
print(x)

#POP (removes specified)
car = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
car.pop("model")
print(car)

#POPITEM (removes last item)
car = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
car.popitem()
print(car)

#SETDEFAULT

#NOTE The setdefault() method returns the value of the item with the specified key.

#If the key does not exist, insert the key, with the specified value, see example below
car = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
x = car.setdefault("model", "Bronco")
print(x) 

#UPDATE
car = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
car.update({"color": "White"})
print(car)

#VALUES
car = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
x = car.values()
print(x)