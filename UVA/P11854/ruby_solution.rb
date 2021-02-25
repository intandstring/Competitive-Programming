tri = gets.chomp
sides = tri.split(" ")
sides[0] = sides[0].to_i
sides[1] = sides[1].to_i
sides[2] = sides[2].to_i

while ((sides[0] != 0) and (sides[1] != 0) and (sides[2] != 0))
  temp = (sides[0]**2) + (sides[1]**2)
  if (temp == (sides[2]**2))
    puts "right"
  else
    puts "wrong"
  end
  tri = gets.chomp
  sides = tri.split(" ")
  sides[0] = sides[0].to_i
  sides[1] = sides[1].to_i
  sides[2] = sides[2].to_i
end