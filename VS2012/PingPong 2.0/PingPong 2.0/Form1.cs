using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace PingPong_2._0
{
    public partial class Form1 : Form
    {
        public int speed_left = 3;   // speed of the ball
        public int speed_top = 2;
        public int speed_left1= 4;   // speed of the ball
        public int spid_top = 3;
       

        public Form1()
        {
            InitializeComponent();
            step1.Visible = true;
            timer1.Enabled = true;
            timer2.Enabled = true;
            //Cursor.Hide();                //hide the cursor

            this.FormBorderStyle = FormBorderStyle.None;    //Remove any border
          
            this.Bounds = Screen.PrimaryScreen.Bounds;      //make it full screen


            racket.Top = playground.Bottom - (playground.Bottom / 10);   //set the position of racket

        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            racket.Left = Cursor.Position.X - (racket.Width / 2);        //set the center of the racket of the position of the cursor
           
            ball.Left += speed_left;
            ball.Top += speed_top;

            if ((ball.Bottom>= racket.Top) && (ball.Bottom <= racket.Bottom) && (ball.Left >= racket.Left) && (ball.Right <= racket.Right))   //racket collision
            {
                speed_top +=1;
                speed_left +=1;
                speed_top = -speed_top;     //change direction
                
            }

            if (ball.Top <= step1.Bottom)
            {
                speed_top = -speed_top;
                step1.Visible  = false;
            }

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
                timer1.Enabled = false;
            }
        }

       
        private void timer2_Tick(object sender, EventArgs e)
        {
            racket.Left = Cursor.Position.X - (racket.Width / 2);        //set the center of the racket of the position of the cursor

            ball1.Left += speed_left1;
            ball1.Top += spid_top;

            if ((ball1.Bottom >= racket.Top) && (ball1.Bottom <= racket.Bottom) && (ball1.Left >= racket.Left) && (ball1.Right <= racket.Right))   //racket collision
            {
                spid_top += 1;
                speed_left1 += 1;
                spid_top = -spid_top;     //change direction

            }
            if (ball1.Left <= playground.Left)
            {
                speed_left1 = -speed_left1;
            }
            if (ball1.Right >= playground.Right)
            {
                speed_left1 = -speed_left1;
            }
            if (ball1.Top <= playground.Top)
            {
                spid_top = -spid_top;
            }
            if (ball1.Bottom >= playground.Bottom)
            {
                timer2.Enabled = false;
            }
        }

        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {
            MessageBox.Show("Press OK to continue", "PingPong", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            if (e.KeyCode == Keys.Escape) { this.Close(); }                      //press escape to quit
        }

        private void button1_Click(object sender, EventArgs e)
        {
            sound.play_fail();
        }


    }
}
