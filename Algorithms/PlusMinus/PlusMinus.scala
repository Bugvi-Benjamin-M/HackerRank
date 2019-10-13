import java.util._
import scala.annotation.tailrec


object Solution {
    def main(args: Array[String]): Unit = {
        val stdin = scala.io.StdIn

        val n = stdin.readLine.trim.toInt

        val arr = stdin
            .readLine
            .trim
            .split(" ")
            .map(_.toFloat)

        @tailrec
        def loop(i: Int, posAccum: Float, negAccum: Float, zeroAccum: Float): Unit = {
            if(i < 0) {
                val fi = n.asInstanceOf[Float];
                printf("%.6f\n", posAccum/fi)
                printf("%.6f\n", negAccum/fi)
                printf("%.6f\n", zeroAccum/fi)
            } else {
                if(arr(i) == 0) loop(i-1, posAccum, negAccum, zeroAccum + 1)
                else if(arr(i) > 0) loop(i-1, posAccum + 1, negAccum, zeroAccum)
                else loop(i-1, posAccum, negAccum + 1, zeroAccum)
            }
        } 
        loop(n-1,0.0f,0.0f,0.0f)
    }
}
