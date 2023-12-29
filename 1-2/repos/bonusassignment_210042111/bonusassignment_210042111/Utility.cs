using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bonusassignment_210042111
{
     class Utility
    {

            public static int c = 1; 
            public static int t = 1; 
            public static void greet()
            {
                Console.WriteLine("\n Welcome To InTech BD\n");
            }
            public static void conclusion()
            {
                Console.WriteLine("\n\nThanks for visiting.\n");
            }
            public static void ceo_info()
            {

                Console.WriteLine($"\n\n Chief executive officer - {c} Info\n"); 
                c++;
            }
            public static void team_info()
            {
                Console.WriteLine($"\n\n Team leader - {t} Info\n"); 
                t++;
            }
        }
    }