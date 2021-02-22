import java.util.Scanner

fun main() {
    val reader = Scanner(System.`in`)
    val testCases:Int = reader.nextInt()
    var nums = Array<Int>(3){0}

    var i = 1
    while (i <= testCases){
        for (j in 0..2) {
            nums[j] = reader.nextInt()
        }
        nums.sort()
        println("Case ${i}: ${nums[1]}")
        i++
    }

}