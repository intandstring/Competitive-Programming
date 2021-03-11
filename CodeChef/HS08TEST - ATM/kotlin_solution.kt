import java.util.Scanner

fun main() {
    val reader = Scanner(System.`in`)
    var cash : Int
    var balance : Double

    cash = reader.nextInt()
    balance = reader.nextDouble()

    if (cash % 5 == 0){
        if (balance - 0.5 >= cash) {
            balance -= 0.5
            balance -= cash
        }
    }
    println("%.2f".format(balance))
}



