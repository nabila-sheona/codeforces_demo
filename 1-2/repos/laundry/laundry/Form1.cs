using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace laundry
{
    public partial class Form1 : Form
    {
        List<string> idArray = new List<string>();
        List<string> nameArray = new List<string>();
        List<string> addressArray = new List<string>();
        List<order_status> orders = new List<order_status>();
        List<user_section> user = new List<user_section>();

        public Form1()
        {
            InitializeComponent();
            listBox1.Items.Add("Type\tQuantity\tto-do\tamount");

            comboBox1.Items.Add("pending");
            comboBox1.Items.Add("processing");
            comboBox1.Items.Add("delivered");

            comboBox2.Items.Add("iron");
            comboBox2.Items.Add("wash");
            comboBox2.Items.Add("both");

            comboBox3.Items.Add("iron");
            comboBox3.Items.Add("wash");
            comboBox3.Items.Add("both");

            comboBox4.Items.Add("iron");
            comboBox4.Items.Add("wash");
            comboBox4.Items.Add("both");

            comboBox5.Items.Add("iron");
            comboBox5.Items.Add("wash");
            comboBox5.Items.Add("both");
        }

        private void comboBox4_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void button4_Click(object sender, EventArgs e)
        {
           // textBox3.Text = Convert.ToString(balance.count);
           
         //   foreach (order_status f in orders)
           // {

             //   listBox1.Items.Add(Convert.ToString(f.type) + "\t" + Convert.ToString(f.quantity) + "\t" + Convert.ToString(f.todo)+ "t" + Convert.ToString(f.amount));
               // this.Controls.Add(listBox1);

          //  }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int id = Convert.ToInt32(textBox4.Text);
            string name = textBox5.Text;
            string address = textBox6.Text;

            user_section temp = new user_section(Convert.ToInt32(textBox4.Text), textBox5.Text, textBox6.Text);
        
            nameArray.Add(name);
            addressArray.Add(address);


            textBox4.Clear();
            textBox5.Clear();
            textBox6.Clear();
        }

        private void button3_Click(object sender, EventArgs e)
        {
         
            string shirt = textBox8.Text;
            string pants= textBox9.Text;
            string suits= textBox10.Text;
            string bedhseet= textBox11.Text;
            order_status temp = new order_status(textBox8.Text, textBox9.Text, textBox10.Text, textBox11.Text);
            orders.Add(temp);
            int balance1= Convert.ToInt32(textBox8.Text)*7;
           int  balance2= Convert.ToInt32(textBox9.Text)*3;
           int  balance3= Convert.ToInt32(textBox10.Text)*28;
            int balance4= Convert.ToInt32(textBox11.Text)*10;
            int balance= balance1+ balance2+balance3+balance4;
            
        }
        
    }
}

