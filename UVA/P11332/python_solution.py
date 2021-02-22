number = input()

while (number != '0'):
  while (int(number) > 10):
    sum = 0
    for digit in number:
      sum += int(digit)
    number = str(sum)
  print (number)
  number = input()
    
    