prices= {
  "pizza": 3,
  "burger": 5,
  "coke": 1
}

quantity = {
  "pizza": 1,
  "burger": 4,
  "coke": 6
}

money=0

for i in prices:
  money += (prices[i]*quantity[i])

print(money)




