import java.util.Scanner

fun main() {
    val reader = Scanner(System.`in`)
    var number : Int
    var sum : Int

    number = reader.nextInt()

    while (number != 0){
        while (number > 10) {
            sum = 0
            while (number > 0) {
                sum += (number % 10)
                number /= 10
            }
            number = sum
        }
        println(number)
        number = reader.nextInt()
    }
}