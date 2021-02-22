input_amount = int(input())
i = 1
while(i <= input_amount):
  line = input()
  numbers = list(map(int, line.split())) 
  numbers.sort()
  print ("Case {}: {}".format(i, numbers[1]))
  i += 1