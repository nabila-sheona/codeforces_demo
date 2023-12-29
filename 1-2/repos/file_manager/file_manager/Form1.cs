using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace file_manager
{
    public partial class Form1 : Form
    {
        List<addfile> files = new List<addfile>();
        
        public Form1()
        {
            InitializeComponent();
            files.Clear();
            listBox1.Items.Add("Name\tType\tSize");
           
            comboBox1.Items.Add("Read-Only");
            comboBox1.Items.Add("Editable");
            
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        

        private void button2_Click(object sender, EventArgs e)
        {
            addfile.count--;

            string str = textBox4.Text;
            foreach(addfile f in files.ToList())
            {

                if (f.filename == str)
                {
                    files.Remove(f);
                }
            }

            textBox4.Clear();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            addfile.count++;
            addfile temp = new addfile(textBox1.Text, comboBox1.Text, textBox3.Text);
            files.Add(temp);

            textBox1.Clear();
            textBox3.Clear();
        }

        private void label6_Click(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {
            string str1 = textBox5.Text;
            foreach (addfile f in files)
            {

                if (f.filename == str1)
                {
                    if (f.filetype == "Read-Only")
                    {
                        @readonly temp = new @readonly(f.filename, f.filetype, f.filecontent);
                        temp.CannotUpdate();
                    }
                    else
                    {
                        textBox6.Text = f.filecontent;


                    }
                }
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            string str1 = textBox5.Text;
            foreach (addfile f in files)
            {

                if (f.filename == str1)
                {
                    if (f.filetype != "Read-Only")
                    {
                        editable temp = new editable(f.filename, f.filetype, f.filecontent);
                        temp.NewContent(textBox7.Text);
                            
                    }
                    
                }
            }
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void label11_Click(object sender, EventArgs e)
        {

        }

        private void button6_Click(object sender, EventArgs e)
        {
            string str2 = textBox8.Text;
            foreach (addfile f in files)
            {

                if (f.filename == str2)
                {
                    textBox9.Text = f.filecontent;
                    if (f.filetype == "Read-Only")
                    {
                        listBox2.Items.Clear();
                        listBox2.Items.Add("Share");
                        listBox2.Items.Add("Print");
                        listBox2.Items.Add("Archive");

                    }
                    else
                    {


                        listBox2.Items.Clear();
                        listBox2.Items.Add("Share");
                        listBox2.Items.Add("Compressed");
                        listBox2.Items.Add("Translete");
                    }

                }
            }

        }

        private void button5_Click(object sender, EventArgs e)
        {
            textBox2.Text = Convert.ToString(addfile.count);
            int t = 0;
            foreach (addfile f in files)
            {
                t = t + f.size;
                
            }

            textBox10.Text = Convert.ToString(t);
            foreach (addfile f in files)
            {

                listBox1.Items.Add(Convert.ToString(f.filename) + "\t" + Convert.ToString(f.filetype) + "\t" + Convert.ToString(f.size));
                this.Controls.Add(listBox1);

            }
        }

        private void textBox10_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
