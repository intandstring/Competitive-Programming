cases = int(input())

while (cases != 0):
  num = (int(input()))
  num = (((((num * 567) / 9 ) + 7492 ) * 235 ) / 47 ) - 498
  newnum = str(num)
  print (newnum[newnum.find(".") - 2])
  cases -= 1