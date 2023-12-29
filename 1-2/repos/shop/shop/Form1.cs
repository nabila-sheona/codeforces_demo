using shop;
using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace shop
{
    public partial class Form1 : Form
    {
       

List<create_shop> create_Shops = new List<create_shop>();
List<Product> products = new List<Product>();
        // string p;
       


//ListBox listBox1 = new ListBox();

        public Form1()
        {
            InitializeComponent();
            //listbox2.Items.Add("ID \t Product_name \t price\t quantity");
           // listbox2.Location = new Point(500, 200);
            //listbox2.Size = new Size(250,300);
           // listBox1.BorderStyle = BorderStyle.Fixed3D;
            listBox1.Items.Add("ID\tName\tPrice\tQuantity");
            
        }

        //string s = string.Empty;
        //string t = string.Empty;
        //string u = string.Empty;
        //string v = string.Empty;

        private void Form1_Load(object sender, EventArgs e)
{

}

private void label1_Click(object sender, EventArgs e)
{
}






    //populate listbox


private void listBox2_SelectedIndexChanged(object sender, EventArgs e)
{

}

        private void button1_Click_1(object sender, EventArgs e)
        {
            comboBox1.Items.Add(Convert.ToInt32(textBox1.Text));
            create_shop temp = new create_shop(Convert.ToInt32(textBox1.Text), textBox2.Text, textBox3.Text);
            create_Shops.Add(temp);
            textBox1.Clear();
            textBox2.Clear();
            textBox3.Clear();
        }

        private void button2_Click_1(object sender, EventArgs e)
        {
            Product temp = new Product(Convert.ToInt32(textBox4.Text), textBox5.Text, Convert.ToInt32(textBox6.Text), Convert.ToInt32(textBox7.Text), Convert.ToInt32(textBox8.Text));
            foreach (create_shop shop in create_Shops)
            {
                if (shop.id == temp.shop_id)
                {
                    products.Add(temp);
                }
                
            }
            textBox4.Clear();
            textBox5.Clear();
            textBox6.Clear();
            textBox7.Clear();
            textBox8.Clear();
        }

        private void button3_Click_1(object sender, EventArgs e)
        {
            
           create_shop temp;
            foreach (create_shop shop in create_Shops)
            {
              if (shop.id == Convert.ToInt32(comboBox1.Text))
            {
              temp = shop;


           
           

           
                    Product asd;

                    foreach (Product pro in products)
                    {


                        if (pro.shop_id == Convert.ToInt32(comboBox1.Text))
                        {

                            asd = pro;

                           // s = Convert.ToString(asd.iid);

                            //t = asd.nname;

                            //u = Convert.ToString(asd.price); 
                            
                            //v=Convert.ToString(asd.quantity);


                            listBox1.Items.Add(Convert.ToString(asd.iid) + "\t" +  asd.nname + "\t" +Convert.ToString(asd.price) + "\t" + Convert.ToString(asd.quantity));
                            this.Controls.Add(listBox1);

                           

                        }
                    }



                }
            }


            //textBox9.Clear();
            textBox10.Clear();
        }

        private void listBox2_SelectedIndexChanged_1(object sender, EventArgs e)
        {

        }

        private void textBox11_TextChanged(object sender, EventArgs e)
        {

        }
    }
}


