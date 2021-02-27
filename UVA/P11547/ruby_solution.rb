testCases = gets.chomp()
testCases = testCases.to_i

while (testCases != 0)
  num = gets.chomp()
  num = num.to_i
  num = (((((num * 567) / 9 ) + 7492 ) * 235 ) / 47 ) - 498;
  puts ((num.abs() / 10) % 10)
  testCases -=1
end