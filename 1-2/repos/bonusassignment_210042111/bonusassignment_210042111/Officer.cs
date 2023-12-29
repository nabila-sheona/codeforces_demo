using bonusassignment_210042111;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace bonusassignment_210042111
{
     class Officer
    {
        // defining Attributes
        public string name;
        public string div;
        public int mission_complete;
        public int num;

        //defining Constructors
        public Officer(string aname, string adiv, int p, int number)
        {
            name = aname; 
            div = adiv;
            mission_complete = p;
            num = number;
        }
        public Officer()
        {

        }
//defining common attributes
     public string task()
{
            if (mission_complete > 0)
            {
                return $"Total {mission_complete} missions completed";
            }
            else
            {

                return $"No mission completed yet";
            }

}
 

 
public int office_room()
    {
        if (div == "Team Alpha")
        {
            return 401;
        }
        else if (div == "Team Beta")
        {

                return 402;
            }
            else if (div == "Team Gama")
            {

                return 403;
            }
            else
            {

                return 404;
            }
        }
}
}
 





