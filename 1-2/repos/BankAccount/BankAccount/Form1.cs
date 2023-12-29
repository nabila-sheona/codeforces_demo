using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace BankAccount
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
            int x = CurrBalanceArray.Count;
            accno.Text = $"Account no : {x + 1}";
            comboBox1.Items.Add("Gazipur");
            comboBox1.Items.Add("Uttara");
            comboBox1.Items.Add("Motijheel");
            comboBox1.Items.Add("Rajshahi");

            comboBox2.Items.Add("Savings");
            comboBox2.Items.Add("Current");
        }


        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }


        

        

        private void button7_Click(object sender, EventArgs e)
        {

        }

       

        private void button8_Click_1(object sender, EventArgs e)
        {

            int acno = Convert.ToInt32(textBox4.Text) - 1;
            label10.Text = $"Name : {nameArray[acno]}";
            label11.Text = $"Branch : {branchArray[acno]}";
            label12.Text = $"Type : {TypeArray[acno]}";

            string bal = Convert.ToString(CurrBalanceArray[acno]);
            label13.Text = $"Current Balance : {bal}";
        }

        private void comboBox1_SelectedIndexChanged_1(object sender, EventArgs e)
        {
            
        }

        private void comboBox2_SelectedIndexChanged_1(object sender, EventArgs e)
        {
           
        }

        private void label12_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged_1(object sender, EventArgs e)
        {
            
        }

        private void button6_Click(object sender, EventArgs e)
        {
            string name = textBox3.Text;
            string branch = comboBox1.Text;
            string type = comboBox2.Text;
            int initial = Convert.ToInt32(textBox5.Text);

            nameArray.Add(name);
            branchArray.Add(branch);
            TypeArray.Add(type);
            CurrBalanceArray.Add(initial);

            textBox3.Clear();

            textBox5.Clear();


            int x = CurrBalanceArray.Count;
            accno.Text = $"Account no : {x + 1}";
        }

        private void textBox4_TextChanged(object sender, EventArgs e)
        {

        }

        private void accno_Click(object sender, EventArgs e)
        {

        }

        private void button12_Click(object sender, EventArgs e)
        {

            int acno = Convert.ToInt32(textBox2.Text) - 1;
            double amount = Convert.ToDouble(textBox1.Text);

            CurrBalanceArray[acno] += amount;

            MessageBox.Show("Successful");

            textBox1.Clear();
            textBox2.Clear();
        }
        private void button11_Click(object sender, EventArgs e)
        {
            int acno = Convert.ToInt32(textBox2.Text) - 1;
            double amount = Convert.ToInt32(textBox1.Text);

            if (CurrBalanceArray[acno] >= amount)
            {
                CurrBalanceArray[acno] -= amount;
                MessageBox.Show("Successful");
            }
            else
            {
                MessageBox.Show("Insufficiant Amount");
            }

            textBox2.Clear();
            textBox1.Clear();

        }

        private void button10_Click(object sender, EventArgs e)
        {
          
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            k
        }
    }
}
