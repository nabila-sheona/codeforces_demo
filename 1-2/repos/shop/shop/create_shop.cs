using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace shop
{
    public class create_shop
    {
        public int id;
        public string name;
        public string address;
        public create_shop(int _id, string _name, string _address)
        {

            id = _id;
            name = _name;
            address = _address;

        }





        private List<Product> products = new List<Product>();


    }
}