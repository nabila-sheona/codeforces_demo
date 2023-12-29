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

namespace listbox_test
{
    public partial class Form1 : Form
    {

        ListBox mylist = new ListBox();

        public Form1()
        {
            InitializeComponent();

            // Creating and setting the 
            // properties of ListBox

           
           
            listBox1.Items.Add("Geeks");
            listBox1.Items.Add("GFG");
            listBox1.Items.Add("GeeksForGeeks");
            listBox1.Items.Add("gfg");

            // Adding ListBox control to the form
            this.Controls.Add(listBox1);


        }



       



        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

         
        }

        private void listBox1_SelectedIndexChanged_1(object sender, EventArgs e)
        {

        }
    }
}
