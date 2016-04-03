using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace osmols2
{
    public partial class Form1 : Form
    {


       
        public int speed_left = 1;   // скорость мячика
        public int speed_top = 1;
        public int speed_left1 = 1;   // скорость мячика
        public int spid_top = 1;
        public int speed_left2 = 3;   // скорость мячика
        public int spiid_top = 3;
        public int spad_left = 1;
        public int spad_top = 1;
        public int spod_left = 0;
        public int spod_top= 1;


        public Form1()
        {
            InitializeComponent();

            timer1.Enabled = true;
            timer2.Enabled = true;
            timer3.Enabled = true;
            timer4.Enabled = true;
   
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
          
            ball.Left += speed_left;
            ball.Top += speed_top;
             

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

        private void timer2_Tick(object sender, EventArgs e)
        {
            oval1.Left += speed_left1;
            oval1.Top += spid_top;


            if (oval1.Left <= playground.Left)
            {
                speed_left1 = -speed_left1;
            }
            if (oval1.Right >= playground.Right)
            {
                speed_left1 = -speed_left1;
            }
            if (oval1.Top <= playground.Top)
            {
                spid_top = -spid_top;
            }
            if (oval1.Bottom >= playground.Bottom)
            {
                spid_top = -spid_top;
            }
        }

        private void timer3_Tick(object sender, EventArgs e)
        {
            oval3.Left += speed_left2;
            oval3.Top += spiid_top;


            if (oval3.Left <= playground.Left)
            {
                speed_left2 = -speed_left2;
            }
            if (oval3.Right >= playground.Right)
            {
                speed_left2 = -speed_left2;
            }
            if (oval3.Top <= playground.Top)
            {
                spiid_top = -spiid_top;
            }
            if (oval3.Bottom >= playground.Bottom)
            {
                spiid_top = -spiid_top;
            }
        }

        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {
            switch (e.KeyCode)
            {
                case Keys.Left: player.Left -= 2; break;
                case Keys.Right: player.Left += 2; break;
                case Keys.Up: player.Top -= 2; break;
                case Keys.Down: player.Top += 2; break;
            }
        }

        private void timer4_Tick(object sender, EventArgs e)
        {
            oval4.Left += spad_left;
            oval4.Top += spad_top;


            if (oval4.Left <= playground.Left)
            {
                spad_left = -spad_left;
            }
            if (oval4.Right >= playground.Right)
            {
                spad_left = -spad_left;
            }
            if (oval4.Top <= playground.Top)
            {
                spad_top = -spad_top;
            }
            if (oval4.Bottom >= playground.Bottom)
            {
                spad_top = -spad_top;
            }
        }

    }
}
