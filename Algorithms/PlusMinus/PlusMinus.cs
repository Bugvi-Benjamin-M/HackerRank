using System;
using System.Linq;

public class PlusMinus
{
    
    public static int Main(string[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine());

        var pos = 0;
        var neg = 0;
        var zero = 0;
        Console.ReadLine()
            .Split()
            .Select(s => Convert.ToInt32(s))
            .ToList()
            .ForEach(i => 
            {
                if (i == 0) zero++;
                else if (i > 0) pos++;
                else neg++;
            });

        Console.WriteLine("{0:F6}", (float) pos/n);
        Console.WriteLine("{0:F6}", (float) neg/n);
        Console.WriteLine("{0:F6}", (float) zero/n);
        return 0;
    }
}