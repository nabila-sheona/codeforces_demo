using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bonusassignment_210042111
{
    internal class Program
    {
        static void Main(string[] args)
        {
           // Creating a new co-Chief executive officer 
        //Object
        
            CEO c1 = new CEO();

            c1.name = "Nabila Islam Sheona"; 
            c1.div = "Global missionary"; 
            c1.num = 1712345923;
            c1.mission_complete = 8;
            c1.car = 109;

           // Creating 2nd co-Chief executive officer
            CEO c2 = new CEO();
            c2.name = "Tashfia Hassan"; 
            c2.div = "Financial value driver";
            c2.num = 1922345924;
            c2.mission_complete = 0;
            c2.car = 0;

            // Creating 3rd Chief executive officer
            CEO c3 = new CEO();
            c3.name = "Sadman Sourav Labib";
            c3.div = "Corporate entrepreneur"; 
            c3.num = 1712343456;
            c3.mission_complete = 2;
            c3.car = 206;
                
            //Creating 1st Team Leader
            Team t1 = new Team();
            t1.name = "AH Emon";
            t1.div = "Team Alpha"; 
            t1.num = 1842355953;
            t1.mission_complete = 43;
            t1.paper_count = 13;
            t1.yearly_budget = 50000;
            t1.car_no = 202;

            //Creating 2nd  Team Leader
            Team t2 = new Team();
            t2.name = "Rifah Ramisa Ferdous"; 
            t2.div = "Team Beta"; 
            t2.num = 1452365977;
            t2.mission_complete = 12;
            t2.paper_count = 18;
            t2.yearly_budget = 90000;
            t2.car_no = 201;

            //Creating 3rd  Team Leader
            Team t3 = new Team();
            t3.name = "Rowshan Mannan"; 
            t3.div = "Team Gama";
            t3.num = 152368878;
            t3.mission_complete = 51;
            t3.paper_count = 26;
            t3.yearly_budget = 250000;
            t3.car_no = 102;

            //Creating 4th  Team Leader
            Team t4 = new Team();
            t4.name = "Shefayat Shams Adib"; 
            t4.div = "Team Sigma";
            t4.num = 164367778;
            t4.mission_complete = 23;
            t4.paper_count = 11;
            t4.yearly_budget = 90000;
            t4.car_no = 101;

          //  Now Printing Objects in
            // Console 
            Utility.greet();
            Utility.ceo_info();
            Console.WriteLine($"\tName \t\t : {c1.name} "); 
            Console.WriteLine($"\tDivision \t : {c1.div} "); 
            Console.WriteLine($"\tNumber \t\t : +880 {c1.num} "); 
            Console.WriteLine($"\tMissions\t : {c1.task()} ");
            Console.WriteLine($"\tOffice\t\t : {c1.office_room()} ");
            Console.WriteLine($"\tTransport \t : {c1.istransport()} ");

            Utility.ceo_info();
            Console.WriteLine($"\tName \t\t : {c2.name} "); 
            Console.WriteLine($"\tDivision \t : {c2.div} "); 
            Console.WriteLine($"\tNumber \t\t : +880 {c2.num} "); 
            Console.WriteLine($"\tMissions\t : {c2.task()} "); 
            Console.WriteLine($"\tOffice\t\t : {c2.office_room()} "); 
            Console.WriteLine($"\tMissions\t : {c2.istransport()} ");

            Utility.ceo_info();
            Console.WriteLine($"\tName \t\t : {c3.name} "); 
            Console.WriteLine($"\tDivision \t : {c3.div} "); 
            Console.WriteLine($"\tNumber \t\t : +880 {c3.num} "); 
            Console.WriteLine($"\tMissions\t : {c3.task()} ");
            Console.WriteLine($"\tOffice\t\t : {c3.office_room()} "); 
            Console.WriteLine($"\tTransport \t : {c3.istransport()} ");

            Utility.team_info();
            Console.WriteLine($"\tName \t\t : {t1.name} "); 
            Console.WriteLine($"\tDivision \t : {t1.div} "); 
            Console.WriteLine($"\tPosition \t : {t1.ishead()} "); 
            Console.WriteLine($"\tOffice\t\t : {t1.office_room()} "); 
            Console.WriteLine($"\tNumber \t\t : +880 {t1.num} "); 
            Console.WriteLine($"\tMissions\t : {t1.task()} "); 
            Console.WriteLine($"\tProjects\t : {t1.project_capability()} "); 
            Console.WriteLine($"\tTransport\t : {t1.car_no}");

            Utility.team_info();
            Console.WriteLine($"\tName \t\t : {t2.name} "); 
            Console.WriteLine($"\tDivision \t : {t2.div} "); 
            Console.WriteLine($"\tPosition \t : {t2.ishead()} "); 
            Console.WriteLine($"\tOffice\t\t : {t2.office_room()} "); 
            Console.WriteLine($"\tNumber \t\t : +880 {t2.num} "); 
            Console.WriteLine($"\tMissions\t : {t2.task()} "); 
            Console.WriteLine($"\tProjects\t : {t2.project_capability()} "); 
            Console.WriteLine($"\tTransport\t : {t2.car_no}");
                
            Utility.team_info();

            Console.WriteLine($"\tName \t\t : {t3.name} "); 
            Console.WriteLine($"\tDivision \t : {t3.div} "); 
            Console.WriteLine($"\tPosition \t : {t3.ishead()} "); 
            Console.WriteLine($"\tOffice\t\t : {t3.office_room()} "); 
            Console.WriteLine($"\tNumber \t\t : +880 {t3.num} "); 
            Console.WriteLine($"\tMissions\t : {t3.task()} "); 
            Console.WriteLine($"\tProjects\t : {t3.project_capability()} "); 
            Console.WriteLine($"\tTransport\t : {t3.car_no}");

            Utility.team_info();
            Console.WriteLine($"\tName \t\t : {t4.name} "); 
            Console.WriteLine($"\tDivision \t : {t4.div} "); 
            Console.WriteLine($"\tPosition \t : {t4.ishead()} "); 
            Console.WriteLine($"\tOffice\t\t : {t4.office_room()} "); 
            Console.WriteLine($"\tNumber \t\t : +880 {t4.num} "); 
            Console.WriteLine($"\tMissions\t : {t4.task()} "); 
            Console.WriteLine($"\tProjects\t : {t4.project_capability()} "); 
            Console.WriteLine($"\tTransport\t : {t4.car_no}");

            Utility.conclusion(); Console.ReadLine();
        }
    }
}
