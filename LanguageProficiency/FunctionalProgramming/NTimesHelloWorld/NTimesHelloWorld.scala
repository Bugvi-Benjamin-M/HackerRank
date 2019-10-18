object Solution {
  def f (n: Int): Unit = {
    if(n>0) {
        println("Hello World")
        f(n-1)
    }
  }
  def main(arg: Array[String]): Unit = {
    var n = scala.io.StdIn.readInt
    f(n)
  }
}
