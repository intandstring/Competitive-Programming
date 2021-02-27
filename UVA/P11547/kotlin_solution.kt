import java.util.Scanner
import kotlin.math.abs

fun main() {
    val reader = Scanner(System.`in`)
    var num:Int
    var testCases:Int = reader.nextInt()

    while (testCases != 0) {
        num = reader.nextInt()
        num = (((((num * 567) / 9 ) + 7492 ) * 235 ) / 47 ) - 498;
        println((abs(num) / 10) % 10)
        testCases -= 1;
    }
}