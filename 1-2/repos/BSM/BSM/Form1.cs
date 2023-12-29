using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Reflection.Emit;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace BSM
{
    public partial class Form1 : Form
    {
        List<string> nameArray = new List<string>();
        List<string> branchArray = new List<string>();
        List<string> TypeArray = new List<string>();
        List<double> CurrBalanceArray = new List<double>();
        public Form1()
        {
            InitializeComponent();
            // int x = nameArray.Count;
            int x = 1;
            textBox1.Text = $"Account no : {x + 1}";
        }


        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }






        private void textBox3_TextChanged(object sender, EventArgs e)
        {

        }

        private void button7_Click(object sender, EventArgs e)
        {

        }



        private void button8_Click_1(object sender, EventArgs e)
        {

            int accno = Convert.ToInt32(textBox4.Text) - 1;
            label10.Text = $"Name : {nameArray[accno]}";
            label11.Text = $"Branch : {branchArray[accno]}";
            label12.Text = $"Type : {TypeArray[accno]}";

            string bal = Convert.ToString(CurrBalanceArray[accno]);
            label13.Text = $"Current Balance : {bal}";
        }

        private void comboBox1_SelectedIndexChanged_1(object sender, EventArgs e)
        {
            comboBox1.Items.Add("Gazipur)");
            comboBox1.Items.Add("Uttara");
            comboBox1.Items.Add("Motijheel");
            comboBox1.Items.Add("Rajshahi");
        }

        private void comboBox2_SelectedIndexChanged_1(object sender, EventArgs e)
        {
            comboBox2.Items.Add("Savings)");
            comboBox2.Items.Add("Current");
        }

        private void label12_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged_1(object sender, EventArgs e)
        {
            string name = textBox3.Text;
            string branch = comboBox1.Text;
            string type = comboBox2.Text;
            double inidip = textBox6.Text;

            nameArray.Add(name);
            branchArray.Add(branch);
            TypeArray.Add(type);
            CurrBalanceArray.Add(inidip);

            textBox3.Clear();

            textBox6.Clear();

            int x = CurrBalanceArray.Count;
            label7.Text = $"Account no : {x + 1}";
        }
    }
}
