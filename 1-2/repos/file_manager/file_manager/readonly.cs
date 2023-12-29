using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace file_manager
{
     internal class @readonly : addfile
    {

        public @readonly(string _name, string _type, string _content):base(_name,_type,_content )
        {

        }



        public void CannotUpdate()
        {

            MessageBox.Show("Cannot Update");
        }
    }
}