fun main() {
    var hello = readLine()
    var case = 1
    var language : String

    while ( hello != "#" ) {
        language = when (hello) {
            "HELLO" -> "ENGLISH"
            "HOLA" -> "SPANISH"
            "HALLO" -> "GERMAN"
            "BONJOUR" -> "FRENCH"
            "CIAO" -> "ITALIAN"
            "ZDRAVSTVUJTE" -> "RUSSIAN"
            else -> "UNKNOWN"
        }
        println("Case $case: $language")
        case++
        hello = readLine()
    }
}