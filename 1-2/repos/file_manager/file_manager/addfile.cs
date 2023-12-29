using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace file_manager
{
    internal class addfile
    {

        public string filename;
        public string filecontent;
        public string filetype;

        public int size;

        public static int count = 0;

        public addfile(string _name, string _type, string _content)
        {


            filename = _name;

            filetype = _type;

            filecontent = _content;

            size = _content.Length;

        }

    }
}
