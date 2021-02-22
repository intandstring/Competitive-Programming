import java.util.Scanner
import kotlin.math.abs

fun main() {
    val read = Scanner(System.`in`)
    var army1 : Int
    var army2 : Int
    var armyDifference : Int

    while(read.hasNextInt()){
        army1 = read.nextInt()
        army2 = read.nextInt()
        armyDifference = abs(army1 - army2)
        println(armyDifference)
    }
}