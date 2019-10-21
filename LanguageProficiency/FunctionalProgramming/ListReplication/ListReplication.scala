object Solution {
    def main(args: Array[String]): Unit = {
        val s = scala.io.StdIn.readLine().toInt
        def valid (s: String) = s match {
            case null => false
            case _ => true
        }
        LazyList.continually(scala.io.StdIn.readLine())
            .takeWhile(valid(_))
            .toList
            .flatMap(e => List.fill(s)(e))
            .map(e => println(e))
    }
}