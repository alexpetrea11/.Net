using System;

namespace ConsoleApp2
{
    class Program
    {
        public static int FibonacciRecursiv(int n)
        {
            if (n == 0)
            {
                return 0;
            }
            else
            {
                if (n == 1)
                {
                    return 1;
                }
                else
                {
                    return FibonacciRecursiv(n - 1) + FibonacciRecursiv(n - 2);
                }
                public static void SirulluiFibonacci()
                {
                    int n = -1;
                    Console.Write("Mergem pana la numarul n=   ");
                    try
                    {
                        n = int.Parse(Console.ReadLine());
                    }
                    catch (Exception)
                    {
                        Console.WriteLine("N-ul trebuie sa fie pozitiv");
                    }
                    if (n >= 0)
                    {
                        Console.WriteLine("F" + n + " = " + FibonacciRecursiv(n));
                    }
                    Console.ReadKey();
                    Console.Clear();
                }
                static void Main(string[] args)
        {
            Console.WriteLine("Sirul lui Fibonaccu");
                    SirulluiFibonacci(n);
        }
    }
}
