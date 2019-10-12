using System;
using System.Linq;

public class DiagonalDifference {


    public static int Main(string[] args)
    {

        var n = Convert.ToInt32(Console.ReadLine());
        int diag1Sum = 0;
        int diag2Sum = 0;
        for(int i = 0; i < n; i++) {
            int[] row = Console.ReadLine()
                        .Split(' ')
                        .Select(s => Convert.ToInt32(s))
                        .ToArray();
            for (int j = 0; j < n; j++)
            {
                if(i == j) {
                    diag1Sum += row[j];
                    diag2Sum += row[n-1-j];
                }
            }
        }
        Console.WriteLine(Math.Abs(diag1Sum-diag2Sum));
        return 0;
    }
}