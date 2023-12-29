using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace shop
{
    public class Product
    {
        public int iid;
        public string nname;
        public int price;
        public int quantity;
        public int shop_id;

        public Product(int _id, string _name, int _price, int _quantity, int _shop_id)
        {

            iid = _id;
            nname = _name;
            price = _price;
            quantity = _quantity;
            shop_id = _shop_id;

        }

        public int ID
        {
            get { return iid; }
            set { iid = value; }
        }
        public string Name
        {
            get { return nname; }
            set { nname = value; }
        }
        public int Price
        {
            get { return price; }
            set { price = value; }
        }

        public int Quantity
        {
            get { return quantity; }
            set { quantity = value; }
        }

        public int Shop_id
        {
            get { return shop_id; }
            set { shop_id = value; }
        }

        //getters and setters

    }
}