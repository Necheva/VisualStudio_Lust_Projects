using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace XO
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            button1.Text = " ";
            button2.Text = "  ";
            button3.Text = "   ";
            button4.Text = "    ";
            button5.Text = "     ";
            button6.Text = "      ";
            button7.Text = "       ";
            button8.Text = "        ";
            button9.Text = "         ";
        }
        
        string tmp = "X";

        bool check()
        {
            if ((button1.Text == button2.Text) && (button1.Text == button3.Text))
            {
                return true;
            }
            else if ((button4.Text == button5.Text) && (button4.Text == button6.Text))
            {
                return true;
            }
            else if ((button7.Text == button8.Text) && (button7.Text == button9.Text))
            {
                return true;
            }
            else if ((button1.Text == button4.Text) && (button1.Text == button7.Text))
            {
                return true;
            }
            else if ((button2.Text == button5.Text) && (button2.Text == button8.Text))
            {
                return true;
            }
            else if ((button3.Text == button6.Text) && (button3.Text == button9.Text))
            {
                return true;
            }
            else if ((button1.Text == button5.Text) && (button1.Text == button9.Text))
            {
                return true;
            }
            else if ((button3.Text == button5.Text) && (button3.Text == button7.Text))
            {
                return true;
            }
            return false;
        }

        void Cliced(Button btm)
        {
            btm.Text = tmp;
            btm.Enabled = false;
            if (check())
            {
                MessageBox.Show("ПОБЕДА : " + tmp, "УРА", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
            if (tmp == "X")
                tmp = "O";
            else
                if (tmp == "O")
                    tmp = "X";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Cliced(button1);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Cliced(button2);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Cliced(button3);
        }

        private void button4_Click(object sender, EventArgs e)
        {
            Cliced(button4);
        }

        private void button5_Click(object sender, EventArgs e)
        {
            Cliced(button5);
        }

        private void button6_Click(object sender, EventArgs e)
        {
            Cliced(button6);
        }

        private void button7_Click(object sender, EventArgs e)
        {
            Cliced(button7);
        }

        private void button8_Click(object sender, EventArgs e)
        {
            Cliced(button8);
        }

        private void button9_Click(object sender, EventArgs e)
        {
            Cliced(button9);
        }
    }
}
