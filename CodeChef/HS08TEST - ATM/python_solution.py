numbers = input()
cash, balance = map(float, numbers.split())

if (cash % 5 == 0):
  if (cash + 0.5 <= balance):
    balance = balance - cash - 0.5

print("%.2f" % balance)