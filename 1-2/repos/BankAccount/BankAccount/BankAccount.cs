using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace BankAccount
{

    internal class BankAccount
    {
        private int accno;
        private string name;
        private string branchname;
        private double balance = 0;

        public BankAccount(int _accno, string _name, string _branchname)
        {
            accno = _accno;
            name = _name;
            branchname = _branchname;

        }

     
       
     

    }

}
