testCases = gets.chomp.to_i
(1..testCases).each do |testCase|
  grades = gets.split(' ').map &:to_i
  sum = 0
  students = grades[0]
  grades = grades.drop(1)
  average = grades.inject(0){|sum, x| sum + x}
  average = average.to_f / students.to_f
  grades.each { |grade|
    if average < grade
      sum += 1
    end
  }
  puts "%0.3f%%" % [((sum.to_f/students.to_f) * 100)]
end