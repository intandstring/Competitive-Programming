def army_difference(num1, num2):
  bigger_army = max(num1, num2)
  smaller_army = min(num1, num2)
  return (bigger_army - smaller_army)

while True:
    try:
        line = input()
        line = line.split()
        ans = army_difference(int(line[0]), int(line[1]))
        print (ans)
    except EOFError:
        break