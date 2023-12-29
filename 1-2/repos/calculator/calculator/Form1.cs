using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.ProgressBar;

namespace calculator
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        double num1=0, ans=0;
        int count, c=0;
        string concat = string.Empty;
        int dotindex = -1;

        private void button6_Click(object sender, EventArgs e)
        {
            c++;
            if (c <= 8)
            {
                if (textBox1.Text == "0")
                    textBox1.Clear();
              
                textBox1.Text = textBox1.Text + 8;
            }
        }

        private void button9_Click(object sender, EventArgs e)
        {
            c++;
            if (c <= 8)
            {
                if (textBox1.Text == "0")
                    textBox1.Clear();
               
                textBox1.Text = textBox1.Text + 4;
            }
        }

        private void button10_Click(object sender, EventArgs e)
        {
            c++;
            if (c <= 8)
            {
                if (textBox1.Text == "0")
                    textBox1.Clear();
                
                textBox1.Text = textBox1.Text + 5;
            }
        }

        private void button12_Click(object sender, EventArgs e)
        {
           
          
            num1 = double.Parse(textBox1.Text);
            textBox1.Clear();
            textBox1.Focus();
            c = 0;
            count = 1;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            textBox1.Clear();
            c = 0;
            textBox1.Text = "0";
          

        }

        private void button5_Click(object sender, EventArgs e)
        {
            c++;
            if (c <= 8)
            {
                if (textBox1.Text == "0")
                    textBox1.Clear();
              
                textBox1.Text = textBox1.Text + 7;
            }
        }

        private void button17_Click(object sender, EventArgs e)
        {
            c++;
            if (c <= 8)
            {
                if (textBox1.Text == "0")
                    textBox1.Clear();
                
                textBox1.Text = textBox1.Text + 0;

            }
        }

        private void button13_Click(object sender, EventArgs e)
        {
            c++;
            if (c <= 8)
            {
                if (textBox1.Text == "0")
                    textBox1.Clear();
                
                textBox1.Text = textBox1.Text + 1;
            }
        }

        private void button14_Click(object sender, EventArgs e)
        {
            c++;
            if (c <= 8)
            {
                if (textBox1.Text == "0")
                    textBox1.Clear();

                textBox1.Text = textBox1.Text + 2;
            }
        }

        private void button15_Click(object sender, EventArgs e)
        {
            c++;
            if (c <= 8)
            {
                if (textBox1.Text == "0")
                    textBox1.Clear();
                textBox1.Text = textBox1.Text + 3;
            }
        }

        private void button11_Click(object sender, EventArgs e)
        {
            c++;
            if (c <= 8)
            {
                if (textBox1.Text == "0")
                    textBox1.Clear();
                textBox1.Text = textBox1.Text + 6;
            }
        }


        private void button7_Click(object sender, EventArgs e)
        {
            c++;
            if (c <= 8)
            {
                if (textBox1.Text == "0")
                    textBox1.Clear();
                textBox1.Text = textBox1.Text + 9;
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
           
            
            num1 = double.Parse(textBox1.Text);
            textBox1.Clear();
            textBox1.Focus();
            c = 0;
            count =4;


        }
        private void button2_Click(object sender, EventArgs e)
        {

            num1 = double.Parse(textBox1.Text);
            textBox1.Clear();
            textBox1.Focus();
            count = 6;
            compute(count);
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
           
        }

        private void button18_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
                textBox1.Clear();
            textBox1.Text = textBox1.Text + ".";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            num1 = double.Parse(textBox1.Text);
            textBox1.Clear();
            textBox1.Focus();
            count = 5;
            compute(count);
        }

        private void button8_Click(object sender, EventArgs e)
        {
            num1 = double.Parse(textBox1.Text);
            textBox1.Clear();
            textBox1.Focus();
            c = 0;
            count = 3;
        }

        private void button16_Click(object sender, EventArgs e)
        {


            num1 += double.Parse(textBox1.Text);
            textBox1.Clear();
            textBox1.Focus();
            c = 0;
            count = 2;
         
        }

        private void button20_Click(object sender, EventArgs e)
        {
           
            compute(count);
        }
        public void compute(int count)
        {
            switch (count)
            {
                case 1:
                    ans = num1 - double.Parse(textBox1.Text);

                    concat= ans.ToString();
                    dotindex = concat.IndexOf('.');
                    if (dotindex != -1)
                    {
                        ans = Math.Round(ans, 8);
                        concat = ans.ToString();
                        textBox1.Text = concat;
                    }
                    else if (dotindex == -1 && concat.Length <= 8)
                    {
                        concat = ans.ToString();
                        textBox1.Text = concat;
                    }
                    else if (dotindex == -1 && concat.Length > 8)
                    {
                        textBox1.Text = "Error";
                    }

                    break;
                case 2:
                    ans = num1 + double.Parse(textBox1.Text);
                    concat = ans.ToString();
                    dotindex = concat.IndexOf('.');
                    if (dotindex != -1)
                    {
                        ans = Math.Round(ans, 8);
                        concat = ans.ToString();
                        textBox1.Text = concat;
                    }
                    else if (dotindex == -1 && concat.Length <= 8)
                    {
                        concat = ans.ToString();
                        textBox1.Text = concat;
                    }
                    else if (dotindex == -1 && concat.Length > 8)
                    {
                        textBox1.Text = "Error";
                    }


                    break;
                case 3:
                    ans = num1 * double.Parse(textBox1.Text);
                    concat = ans.ToString();
                    dotindex = concat.IndexOf('.');
                    if (dotindex != -1)
                    {
                        ans = Math.Round(ans, 8);
                        concat = ans.ToString();
                        textBox1.Text = concat;
                    }
                    else if (dotindex == -1 && concat.Length <= 8)
                    {
                        concat = ans.ToString();
                        textBox1.Text = concat;
                    }
                    else if (dotindex == -1 && concat.Length > 8)
                    {
                        textBox1.Text = "Error";
                    }
            
                    break;
                    
                case 4:
                    if (double.Parse(textBox1.Text) != 0)
                    {
                        ans = num1 / double.Parse(textBox1.Text);
                        concat = ans.ToString();
                        dotindex = concat.IndexOf('.');
                        if (dotindex != -1)
                        {
                            ans = Math.Round(ans, 8);
                            concat = ans.ToString();
                            textBox1.Text = concat;
                        }
                        else if (dotindex == -1 && concat.Length <= 8)
                        {
                            concat = ans.ToString();
                            textBox1.Text = concat;
                        }
                        else if (dotindex == -1 && concat.Length > 8)
                        {
                            textBox1.Text = "Error";
                        }
                    }
                    else
                    {
                        textBox1.Text = "Error";
                    }
                    break;
                case 5:

                    ans = num1 / 100;
                    concat = ans.ToString();
                    if (concat.Length <= 8)
                    {
                        textBox1.Text = concat;
                    }
                    else
                    {
                        textBox1.Text = "Error";
                    }



                    break;

                case 6: 
                    ans =num1*-1;
                    textBox1.Text = ans.ToString();
                   
                    break;

                default:
                    break;
            }
            num1 = 0;
            c = 8;
             
        }
      
    }
}
