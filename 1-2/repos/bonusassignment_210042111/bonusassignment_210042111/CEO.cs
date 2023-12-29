using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.ConstrainedExecution;
using System.Text;
using System.Threading.Tasks;

namespace bonusassignment_210042111
{
   
    class CEO : Officer
        {
            public int car; public CEO()
            {

            }
        public string istransport()
            {
                if (car > 0)
                    return $"Car {car}";

            else
            {
                return "Personal Car";
            }

}
        }
    }




