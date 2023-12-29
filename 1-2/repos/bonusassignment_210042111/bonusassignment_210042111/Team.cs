using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bonusassignment_210042111
{

        class Team : Officer
        {
            public int paper_count;
            public double yearly_budget;
            public int car_no;

            public Team()
            {
            }
           


 
public string ishead()
            {
                if (paper_count >= 20)
                {
                    return "Exclusive Team Leader";
                }
                else if (paper_count >= 10 && paper_count < 20)
                {

                return "Team Leader";

            }
                else
                {
                return "No";
                 }
            }




 
public string project_capability()
            {
                if (yearly_budget >= 500000)
                {
                    return "10 projects";
                }
                else if (yearly_budget >= 300000 && yearly_budget < 500000)
                {
                    return "5 projects";
                }
                else if (yearly_budget >= 100000 && yearly_budget < 300000)
                {
                    return "3 projects";
                }
                else if (yearly_budget >= 10000 && yearly_budget < 100000)
                {

                return "1 projects";

                 }
                else
                {
                return "No project";
                 }

        }
    }
    }


