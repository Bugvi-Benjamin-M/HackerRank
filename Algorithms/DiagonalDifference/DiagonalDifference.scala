import scala.io._

object Solution {
    def main(args: Array[String]): Unit = {

        val n = StdIn.readLine.trim.toInt

        var diag1Sum = 0
        var diag2Sum = 0
        for (i <- 0 until n) {
            val arr = StdIn.readLine.trim().split(" ").map(_.toInt)
            for (j <- 0 until n) {
                if(i == j) {
                    diag1Sum += arr(j)
                    diag2Sum += arr(n-1-j)
                }
            }
        }
        println(Math.abs(diag1Sum-diag2Sum))
    }
}
