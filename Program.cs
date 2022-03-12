using System;

namespace ConsoleApp4
{
    class Program
    {
        public static void SimpleSum(float a,float b)
        {
                      
            Console.WriteLine(a + " + " + b + " = " + (a + b));
        }
        public static void SimpleDif(float a,float b)
        {
            
         
            Console.WriteLine(a + " - " + b + " = " + (a - b));
        }
        public static void  SimpleDiv(float a,float b)
        {
            
            float rez = 0;
            try
            {
                rez = (float)a / b;
            }
            catch (Exception)
            {
                Console.WriteLine("Operation imposible");
            }
            Console.WriteLine(a + " / " + b + " = " + rez);
        }
        public static void SimpleMul(float a,float b)
        {
         
            Console.WriteLine(a + " * " + b + " = " + (a * b));
        }

        static void Main(string[] args)
        {
            Console.WriteLine("Calculator  Simplu");
            float a = 0f;
              float  b=0f;
            Console.WriteLine("Alegeti 2 numere cu care urmeaza sa faceti operatii  ");
            Console.Write("Introduceti numarul a=  ");
            try
            {
                a = float.Parse(Console.ReadLine());
            }
            catch (Exception)
            {
                Console.WriteLine("Wrong type Values");
            }
            Console.Write("Introduceti numarul b=  ");
            try
            {
                b = float.Parse(Console.ReadLine());
            }
            catch (Exception)
            {
                Console.WriteLine("Wrong type Values");
            }
            char operation='+';
            Console.WriteLine("Alegeti ce operatie doriti sa efectuati: ");
            Console.Write("  + - * /  =  ");
            try
            {
                operation = char.Parse(Console.ReadLine());
            }
            catch (Exception)
            {
                Console.WriteLine("Wrong type of value given!");
            }
             switch(operation)
            {
                case '+':
                    Console.WriteLine("Felicitari! Ati selectat operatia de adunare!");
                    SimpleSum(a,b);
                    break;
                case '-':
                    Console.WriteLine("Felicitari! Ati selectat operatia de scadere!");
                    SimpleDif(a,b);
                    break;
                case '/':
                    Console.WriteLine("Felicitari! Ati selectat operatia de impartire!");
                    SimpleDiv(a,b);
                    break;
                case '*':
                    Console.WriteLine("Felicitari! Ati selectat operatia de inmultire!");
                    SimpleMul(a,b);
                    break;
                default:
                    Console.WriteLine("Invalid operation!");
                    break;
            }
            Console.ReadKey();
            Console.Clear();
        }
    }
           
        }
    

