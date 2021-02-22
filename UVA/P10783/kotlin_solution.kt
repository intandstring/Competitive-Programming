import java.util.Scanner

fun main() {
    val reader = Scanner(System.`in`)
    var testCases = reader.nextInt()
    var lowerLimit: Int
    var upperLimit: Int
    var sum: Int
    for (i in 1..testCases) {
        sum = 0
        lowerLimit = reader.nextInt()
        upperLimit = reader.nextInt()
        for (j in lowerLimit..upperLimit) {
            if (j %2 != 0){
                sum += j
            }
        }
        println("Case ${i}: ${sum}")
    }
}