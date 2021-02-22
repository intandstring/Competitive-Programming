hello = input()
language = ""
case = 1

while (hello != "#"):
  if (hello == "HELLO"):
    language = "ENGLISH"
  elif (hello == "HOLA"):
    language = "SPANISH"
  elif (hello == "HALLO"):
    language = "GERMAN"
  elif (hello == "BONJOUR"):
    language = "FRENCH"
  elif (hello == "CIAO"):
    language = "ITALIAN"
  elif (hello == "ZDRAVSTVUJTE"):
    language = "RUSSIAN"
  else:
    language = "UNKNOWN"
  print ("Case {}: {}".format(case, language))
  case += 1
  hello = input()