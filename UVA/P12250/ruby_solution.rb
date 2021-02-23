hello = gets.chomp
language = ""
i = 1

while !(hello.eql?("#"))
  if (hello.eql?("HELLO"))
    language = "ENGLISH"
  elsif (hello.eql?("HOLA"))
    language = "SPANISH"
  elsif (hello.eql?("HALLO"))
    language = "GERMAN"
  elsif (hello.eql?("BONJOUR"))
    language = "FRENCH"
  elsif (hello.eql?("CIAO"))
    language = "ITALIAN"
  elsif (hello.eql?("ZDRAVSTVUJTE"))
    language = "RUSSIAN"
  else 
    language = "UNKNOWN"
  end
  puts "Case #{i}: #{language}"
  i += 1
  hello = gets.chomp
end
