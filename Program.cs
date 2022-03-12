using System;

namespace ConsoleApp5
{
    class Program
    {
        public static void ConverttoF(float degrees)
        {
            degrees = (degrees * 1.8F) + 32;
            Console.WriteLine("Din Celsius in Fahrenheit: " + degrees.ToString("N3") + "  grade F");
        }
        public static void ConverttoC(float degrees)
        {
            degrees = (degrees - 32) * (0.555F);
            Console.WriteLine("Din Fahrenheit in Celsius: " + degrees.ToString("N3") + " grade C");

        }
       
        static void Main(string[] args)
        {
            Console.Write("Alegeti o optiune: ");
            Console.WriteLine(" Din Fahrenheit in Celsius (C)");
            Console.WriteLine("Din Celsius in Fahrenheit (F)");
          
            char option = Console.ReadKey().KeyChar;
            Console.Write("\nDati o temperatura de la tastura: ");
            float degrees = 0;
            try
            {
                degrees = float.Parse(Console.ReadLine());
            }
            catch (Exception)
            {
                Console.WriteLine("Wrong type of value given!");
                option = 'x';
            }
           
            switch (option)
            {
                case 'F':
                    ConverttoF(degrees);
                    break;
                case 'C':
                    ConverttoC(degrees);
                    break;
                default:
                    Console.WriteLine("Optiune Invalida!");
                    break;
            }
            Console.ReadKey();
            Console.Clear();

        }
    }
}
