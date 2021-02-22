def comparator(num1, num2): 
  if num1 > num2:
    return '>'
  elif num1 < num2:
    return '<'
  else:
    return '='

input_amount = int(input())
i = 0
while(i < input_amount):
  line = input()
  numbers = line.split()
  print (comparator(numbers[0], numbers[1]))
  i += 1