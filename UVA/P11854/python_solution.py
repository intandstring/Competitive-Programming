triangle = input()
triangle = list(map(int, triangle.split()))
while ((triangle[0] != 0) and (triangle[1] != 0) and (triangle[2] != 0)):
  if (((triangle[0]**2) + (triangle[1]**2)) == (triangle[2]**2)):
    print ("right")
  else:
    print ("wrong")
  triangle = input()
  triangle = list(map(int, triangle.split()))