numbers = gets.chomp()
cash, balance = numbers.split().map(&:to_f)

if (cash % 5 == 0)
  if (balance - 0.5) >= cash
    balance = balance - 0.5 - cash
  end
end

puts ("%.2f" % balance)