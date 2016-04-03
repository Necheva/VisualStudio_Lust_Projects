using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace osmos
{
    public partial class Form1 : Form
    {
        bool right;
        bool left;
        bool jump;
        int G = 20;
        int Force;

        public int speed_left = 1;   // скорость мячика
        public int speed_top = 1;
       

        public Form1()
        {
            InitializeComponent();

            timer1.Enabled = true;
          
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            if (right == true) { player.Left += 3; }
            if (left == true) { player.Left -= 3; }

            if (jump == true)
            {
                player.Top -= Force;
                Force -= 1;
            }
            if (player.Top + player.Height >= playground.Height)
            {
                player.Top = playground.Height - player.Height;
                jump = false;
            }
            else
            {
                player.Top += 1;
            }

            ball.Left -= speed_left;
            ball.Top -= speed_top;


            if (ball.Left <= playground.Left)
            {
                speed_left = -speed_left;
            }
            if (ball.Right >= playground.Right)
            {
                speed_left = -speed_left;
            }
            if (ball.Top <= playground.Top)
            {
                speed_top = -speed_top;
            }
            if (ball.Bottom >= playground.Bottom)
            {
                speed_top = -speed_top;
            }
        }

        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Right) { right = true; }
            if (e.KeyCode == Keys.Left) { left = true; }

            if (jump != true)
            {
                if (e.KeyCode == Keys.Space)
                {
                    jump = true;
                    Force = G;
                }
            }

        }

        private void Form1_KeyUp(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Right) { right = false; }
            if (e.KeyCode == Keys.Left) { left = false; }
        }

       

    }
}
