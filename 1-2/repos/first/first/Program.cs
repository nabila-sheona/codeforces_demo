using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace first
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // int t = 5;

            //do
            //{
            //  Console.WriteLine(t);
            //t--;
            //} while (t > 0);
            //Console.Read();


            //int t = 5;

            // while(true>0)
            //{
            //  Console.WriteLine(t);
            //t--;
            //} 
            //Console.Read();




            //for(int i = 0; i < 5; i++) 
            //{
            //  Console.WriteLine(t);

            //} 
            //Console.Read();

            // int t = 6;
            //if (t > 5)
            //{
            //  Console.WriteLine("HI");
            //t--;
            //}
            //else
            //{

            //  Console.WriteLine("Bye");
            //}
            //Console.Read();
            // Console.WriteLine("HI");

            // Console.Read();

            //string abs = Console.WriteLine("HI"+ abs);
            //string firstName = "Nabila ";
            //string lastName = "Islam";
            //string name = firstName + " " + lastName;
            //Console.WriteLine(name);


            string firstName = "Nabila";
            string lastName = "Islam";
            //string name = $"My full name is: {firstName} {lastName}";
            //Console.WriteLine(name);

            //string firstName = "   Nabila";
            //string lastName = "Islam  ";
            string name = firstName + " " + lastName;

            int Id = 210042111;
            double myDoubleNum = 5.99D;
            char myLetter = 'S';
            string str = "Nabila Islam";
            bool is_it=true;
            int n;
            double d=13.34566;
            n = (int) d;
            Console.WriteLine(d);
            Console.WriteLine(n);
            // Console.WriteLine(firstName.TrimStart());
            //Console.WriteLine(lastName.TrimEnd());
            //Console.WriteLine(name.Trim());
            Console.WriteLine(name.Length);
            Console.WriteLine(name.ToUpper());
            Console.WriteLine(name.ToLower());
            Console.WriteLine(name.StartsWith("Nabila"));
            Console.WriteLine(name.Replace("Nabila", "Nafisa"));
            
            Console.WriteLine(Id);
            Console.WriteLine(myDoubleNum);
            Console.WriteLine(myLetter);
            Console.WriteLine(str);
            Console.WriteLine(is_it? "Yes" : "No");
            if (21 > 17)
            {
                Console.WriteLine("21 is greater than 17");
            }

            if (21 > 22)
            {
                Console.WriteLine("21 is greater than 22");
            }
            else
            {
                Console.WriteLine("21 is not greater than 22");

            }


            if (21 > 22)
            {
                Console.WriteLine("21 is greater than 22");
            }
            else if (21 > 20)
            {
                Console.WriteLine("21 is greater than 20");

            }
            else
            {
                Console.WriteLine("21");

            }


            int Int = 9;
            double Double = 3.14167;
            bool Bool = true;
            Console.WriteLine(Convert.ToString(Int));
            Console.WriteLine(Convert.ToDouble(Int));
            Console.WriteLine(Convert.ToInt32(Double));
            Console.WriteLine(Convert.ToString(Bool));

            List<string> colors = new List<string>();

            colors.Add("teal");
            colors.Add("blue");
            colors.Add("yellow");
            colors.Add("maroon");
            colors.Add("lavender");
          
            
            
            var index = colors.IndexOf("MUA");
            Console.WriteLine(index);

            Console.ReadKey();


        }
    }
}
