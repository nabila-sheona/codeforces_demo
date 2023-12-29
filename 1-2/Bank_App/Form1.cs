using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bank_App
{
    public partial class Form1 : Form
    {
        List<string> nameArray= new List<string>();
        List<string> branchArray = new List<string>();
        List<string> TypeArray = new List<string>();
        List<double> CurrBalanceArray = new List<double>();


        public Form1()
        {
            InitializeComponent();
            int x = nameArray.Count;
            crt_acno_label.Text = $"Account no : {x+1}";

        }

        private void crt_acc_button_Click(object sender, EventArgs e)
        {
            string name = crt_name_textBox.Text;
            string branch = comboBox4.Text;
            string type = comboBox5.Text;
            double inidip = Convert.ToDouble(crt_inidip_textBox.Text);

            nameArray.Add(name);
            branchArray.Add(branch);
            TypeArray.Add(type);
            CurrBalanceArray.Add(inidip);

            crt_name_textBox.Clear();
            
            crt_inidip_textBox.Clear();

            int x = CurrBalanceArray.Count;
            crt_acno_label.Text = $"Account no : {x+1}";

        }

        private void diposit_button_Click(object sender, EventArgs e)
        {
            int acno = Convert.ToInt32(banking_acno_textBox.Text) - 1;
            double amount = Convert.ToDouble(banking_amount_textbox.Text);

            CurrBalanceArray[acno] += amount;

            MessageBox.Show("Successful");

            banking_amount_textbox.Clear();
            banking_acno_textBox.Clear();
        }

        private void withdraw_button_Click(object sender, EventArgs e)
        {
            int acno = Convert.ToInt32(banking_acno_textBox.Text) - 1;
            double amount = Convert.ToInt32(banking_amount_textbox.Text);

            if (CurrBalanceArray[acno] >= amount)
            {
                CurrBalanceArray[acno] -= amount;
                MessageBox.Show("Successful");
            }
            else
            {
                MessageBox.Show("Insufficiant Amount");
            }

            banking_amount_textbox.Clear();
            banking_acno_textBox.Clear();

        }

        private void info_button_Click(object sender, EventArgs e)
        {
            int acno = Convert.ToInt32(info_acno_textbox.Text) - 1;
            info_name_label.Text = $"Name : {nameArray[acno]}";
            info_branch_label.Text = $"Branch : {branchArray[acno]}";
            info_type_label.Text = $"Type : {TypeArray[acno]}";

            string bal = Convert.ToString(CurrBalanceArray[acno]);
            info_bal_label.Text = $"Current Balance : {bal}";

        }

        private void bank_name_label_Click(object sender, EventArgs e)
        {

        }

        private void comboBox4_SelectedIndexChanged(object sender, EventArgs e)
        {
            comboBox4.Items.Add("Gazipur)");
            comboBox4.Items.Add("Uttara");
            comboBox4.Items.Add("Motijheel");
            comboBox4.Items.Add("Rajshahi");
        }

        private void comboBox5_SelectedIndexChanged(object sender, EventArgs e)
        {
            comboBox5.Items.Add("Savings)");
            comboBox5.Items.Add("Current");
        }

        private void info_acno_textbox_TextChanged(object sender, EventArgs e)
        {

        }



        //create acc - name, branch, accType, iniDiposit - accNo
        // diposit, withdraw, unsuccessful
        // info

    }
}
