using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace file_manager
{
    internal class editable : addfile
    {
        public editable(string _name, string _type, string _content) : base(_name, _type, _content)
        {

        }



        public void NewContent(string temp)
        {
            filecontent = temp;
            size = temp.Length;
                

        }

    }
}

