using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BSM
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
        public void button12(double amount)
        {

            balance += amount;
        }
        public bool button11(double amount)
        {
            if (balance >= amount)
            {
                balance -= amount;
                return true;
            }
            else
            {
                return false;

            }

        }
        public double button10(double balance)
        {
            return balance;

        }


    }
}
