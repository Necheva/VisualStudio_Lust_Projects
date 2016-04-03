using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;


namespace test_1
{
    public partial class Form1 : Form
    {
        public int speed_l1 = 2; // 01
        public int speed_t1 = 2;
        public int speed_l2 = 2; // 02
        public int speed_t2 = 2;
        public int speed_l3 = 3; // 03
        public int speed_t3 = 3;
        public int speed_l4 = 4; // 04
        public int speed_t4 = 4;
        public int speed_l5 = 2; // 05
        public int speed_t5 = 2;
        public int speed_l6 = 3; // 06
        public int speed_t6 = 3;
        public int speed_l7 = 1; // 07
        public int speed_t7 = 1;
        public int speed_l8 = 3; // 08
        public int speed_t8 = 3;
        public int speed_l9 = 4; // 09
        public int speed_t9 = 4;

        public int speed_q1 = 2; // 07
        public int speed_c1 = 2;
        public int speed_q2 = 2; // 08
        public int speed_c2 = 2;
        public int speed_q3 = 2; // 09
        public int speed_c3 = 2;
        public int speed_q4 = 2; // 10
        public int speed_c4 = 2;
        public int speed_q5 = 2; // 11
        public int speed_c5 = 2;
        public int speed_q6 = 2; // 12
        public int speed_c6 = 2;

        public int speed_q7 = 2; // 13
        public int speed_c7 = 2;
        public int speed_q8 = 2; // 14
        public int speed_c8 = 2;
        public int speed_q9 = 2; // 15
        public int speed_c9 = 2;
        public int speed_q10 = 2; // 16
        public int speed_c10= 2;
        public int speed_q11 = 2; // 17
        public int speed_c11= 2;
        public int speed_q12= 2; // 18
        public int speed_c12 = 2;

        public int speed_e1 = 2; // 19
        public int speed_x1 = 2;
        public int speed_e2 = 2; // 20
        public int speed_x2 = 2;
        public int speed_e3 = 2; // 21
        public int speed_x3 = 2;
        public int speed_e4 = 2; // 22
        public int speed_x4 = 2;
        public int speed_e5 = 2; // 23
        public int speed_x5 = 2;
        public int speed_e6 = 2; // 24
        public int speed_x6 = 2;

        public int speed_r1 = 2; // 25
        public int speed_z1 = 2;
        public int speed_r2 = 2; // 26
        public int speed_z2 = 2;
        public int speed_q21 = 2; // 27
        public int speed_c21 = 2;
     
        public Form1()
        {
            InitializeComponent();

            timer1.Enabled = true;
            timer2.Enabled = true;
            timer3.Enabled = true;
            timer4.Enabled = true;
            timer5.Enabled = true;
            timer6.Enabled = true;
            timer7.Enabled = true;
            timer8.Enabled = true;
            timer9.Enabled = true;
            timer10.Enabled = true;
            timer11.Enabled = true;
            timer12.Enabled = true;
            timer13.Enabled = true;
            timer14.Enabled = true;
            timer15.Enabled = true;
            timer16.Enabled = true;
            timer17.Enabled = true;
            timer18.Enabled = true;
            timer19.Enabled = true;
            timer20.Enabled = true;
            timer21.Enabled = true;
            timer22.Enabled = true;
            timer23.Enabled = true;
            timer24.Enabled = true;
            timer25.Enabled = true;
            timer26.Enabled = true;
            timer27.Enabled = true;
            timer28.Enabled = true;
            timer29.Enabled = true;
        }

        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {
            switch (e.KeyCode)
            {
                case Keys.Left: player.Left -= 1; break;
                case Keys.Right: player.Left += 1; break;
                case Keys.Up: player.Top -= 1; break;
                case Keys.Down: player.Top += 1; break;
           
            }
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            o1.Left -= speed_l1;
            o1.Top += speed_t1;


            if (o1.Left <= playground.Left)
            {
                speed_l1 = -speed_l1;
            }
            if (o1.Right >= playground.Right)
            {
                speed_l1 = -speed_l1;
            }
            if (o1.Top <= playground.Top)
            {
                speed_t1 = -speed_t1;
            }
            if (o1.Bottom >= playground.Bottom)
            {
                speed_t1 = -speed_t1;
            }
        }

        private void timer2_Tick(object sender, EventArgs e)
        {
            o2.Left += speed_l2;
            o2.Top -= speed_t2;


            if (o2.Left <= playground.Left)
            {
                speed_l2 = -speed_l2;
            }
            if (o2.Right >= playground.Right)
            {
                speed_l2 = -speed_l2;
            }
            if (o2.Top <= playground.Top)
            {
                speed_t2 = -speed_t2;
            }
            if (o2.Bottom >= playground.Bottom)
            {
                speed_t2 = -speed_t2;
            }
        }

        private void timer3_Tick(object sender, EventArgs e)
        {
            o3.Left += speed_l3;
            o3.Top -= speed_t3;


            if (o3.Left <= playground.Left)
            {
                speed_l3 = -speed_l3;
            }
            if (o3.Right >= playground.Right)
            {
                speed_l3 = -speed_l3;
            }
            if (o3.Top <= playground.Top)
            {
                speed_t3 = -speed_t3;
            }
            if (o3.Bottom >= playground.Bottom)
            {
                speed_t3 = -speed_t3;
            }
        }

        private void timer4_Tick(object sender, EventArgs e)
        {
            o4.Left -= speed_l4;
            o4.Top += speed_t4;


            if (o4.Left <= playground.Left)
            {
                speed_l4 = -speed_l4;
            }
            if (o4.Right >= playground.Right)
            {
                speed_l4 = -speed_l4;
            }
            if (o4.Top <= playground.Top)
            {
                speed_t4 = -speed_t4;
            }
            if (o4.Bottom >= playground.Bottom)
            {
                speed_t4 = -speed_t4;
            }
        }

        private void timer5_Tick(object sender, EventArgs e)
        {
            o5.Left -= speed_l5;
            o5.Top += speed_t5;


            if (o5.Left <= playground.Left)
            {
                speed_l5 = -speed_l5;
            }
            if (o5.Right >= playground.Right)
            {
                speed_l5 = -speed_l5;
            }
            if (o5.Top <= playground.Top)
            {
                speed_t5 = -speed_t5;
            }
            if (o5.Bottom >= playground.Bottom)
            {
                speed_t5 = -speed_t5;
            }
        }

        private void timer6_Tick(object sender, EventArgs e)
        {
            o6.Left -= speed_l6;
            o6.Top += speed_t6;


            if (o6.Left <= playground.Left)
            {
                speed_l6 = -speed_l6;
            }
            if (o6.Right >= playground.Right)
            {
                speed_l6 = -speed_l6;
            }
            if (o6.Top <= playground.Top)
            {
                speed_t6 = -speed_t6;
            }
            if (o6.Bottom >= playground.Bottom)
            {
                speed_t6 = -speed_t6;
            }
        }

        private void timer7_Tick(object sender, EventArgs e)
        {
            q1.Left -= speed_q1;
            q1.Top -= speed_c1;


            if (q1.Left <= playground.Left)
            {
                speed_q1 = -speed_q1;
            }
            if (q1.Right >= playground.Right)
            {
                speed_q1 = -speed_q1;
            }
            if (q1.Top <= playground.Top)
            {
                speed_c1 = -speed_c1;
            }
            if (q1.Bottom >= playground.Bottom)
            {
                speed_c1 = -speed_c1;
            }
        }

        private void timer8_Tick(object sender, EventArgs e)
        {
            q2.Left += speed_q2;
            q2.Top += speed_c2;


            if (q2.Left <= playground.Left)
            {
                speed_q2 = -speed_q2;
            }
            if (q2.Right >= playground.Right)
            {
                speed_q2 = -speed_q2;
            }
            if (q2.Top <= playground.Top)
            {
                speed_c2 = -speed_c2;
            }
            if (q2.Bottom >= playground.Bottom)
            {
                speed_c2 = -speed_c2;
            }
        }

        private void timer9_Tick(object sender, EventArgs e)
        {
            q3.Left += speed_q3;
            q3.Top -= speed_c3;


            if (q3.Left <= playground.Left)
            {
                speed_q3 = -speed_q3;
            }
            if (q3.Right >= playground.Right)
            {
                speed_q3 = -speed_q3;
            }
            if (q3.Top <= playground.Top)
            {
                speed_c3 = -speed_c3;
            }
            if (q3.Bottom >= playground.Bottom)
            {
                speed_c3 = -speed_c3;
            }
        }

        private void timer10_Tick(object sender, EventArgs e)
        {
            q6.Left += speed_q6;
            q6.Top -= speed_c6;


            if (q6.Left <= playground.Left)
            {
                speed_q6 = -speed_q6;
            }
            if (q6.Right >= playground.Right)
            {
                speed_q6 = -speed_q6;
            }
            if (q6.Top <= playground.Top)
            {
                speed_c6 = -speed_c6;
            }
            if (q6.Bottom >= playground.Bottom)
            {
                speed_c6 = -speed_c6;
            }
        }

        private void timer11_Tick(object sender, EventArgs e)
        {
            q8.Left -= speed_q8;
            q8.Top += speed_c8;


            if (q8.Left <= playground.Left)
            {
                speed_q8 = -speed_q8;
            }
            if (q8.Right >= playground.Right)
            {
                speed_q8 = -speed_q8;
            }
            if (q8.Top <= playground.Top)
            {
                speed_c8 = -speed_c8;
            }
            if (q8.Bottom >= playground.Bottom)
            {
                speed_c8 = -speed_c8;
            }
        }

        private void timer12_Tick(object sender, EventArgs e)
        {
            q10.Left += speed_q10;
            q10.Top += speed_c10;


            if (q10.Left <= playground.Left)
            {
                speed_q10 = -speed_q10;
            }
            if (q10.Right >= playground.Right)
            {
                speed_q10 = -speed_q10;
            }
            if (q10.Top <= playground.Top)
            {
                speed_c10 = -speed_c10;
            }
            if (q10.Bottom >= playground.Bottom)
            {
                speed_c10 = -speed_c10;
            }
        }

        private void timer13_Tick(object sender, EventArgs e)
        {
            q12.Left += speed_q12;
            q12.Top -= speed_c12;


            if (q12.Left <= playground.Left)
            {
                speed_q12 = -speed_q12;
            }
            if (q12.Right >= playground.Right)
            {
                speed_q12 = -speed_q12;
            }
            if (q12.Top <= playground.Top)
            {
                speed_c12 = -speed_c12;
            }
            if (q12.Bottom >= playground.Bottom)
            {
                speed_c12 = -speed_c12;
            }
        }

        private void timer14_Tick(object sender, EventArgs e)
        {
            q21.Left += speed_q21;
            q21.Top -= speed_c21;


            if (q21.Left <= playground.Left)
            {
                speed_q21 = -speed_q21;
            }
            if (q21.Right >= playground.Right)
            {
                speed_q21 = -speed_q21;
            }
            if (q21.Top <= playground.Top)
            {
                speed_c21 = -speed_c21;
            }
            if (q21.Bottom >= playground.Bottom)
            {
                speed_c21 = -speed_c21;
            }
        }

        private void timer15_Tick(object sender, EventArgs e)
        {
            q11.Left -= speed_q11;
            q11.Top += speed_c11;


            if (q11.Left <= playground.Left)
            {
                speed_q11 = -speed_q11;
            }
            if (q11.Right >= playground.Right)
            {
                speed_q11 = -speed_q11;
            }
            if (q11.Top <= playground.Top)
            {
                speed_c11 = -speed_c11;
            }
            if (q11.Bottom >= playground.Bottom)
            {
                speed_c11 = -speed_c11;
            }
        }

        private void timer16_Tick(object sender, EventArgs e)
        {
            q9.Left -= speed_q9;
            q9.Top -= speed_c9;


            if (q9.Left <= playground.Left)
            {
                speed_q9 = -speed_q9;
            }
            if (q9.Right >= playground.Right)
            {
                speed_q9 = -speed_q9;
            }
            if (q9.Top <= playground.Top)
            {
                speed_c9 = -speed_q9;
            }
            if (q9.Bottom >= playground.Bottom)
            {
                speed_c9 = -speed_c9;
            }
        }

        private void timer17_Tick(object sender, EventArgs e)
        {

        }

        private void timer18_Tick(object sender, EventArgs e)
        {

        }

        private void timer19_Tick(object sender, EventArgs e)
        {

        }

        private void timer20_Tick(object sender, EventArgs e)
        {

        }

        private void timer21_Tick(object sender, EventArgs e)
        {

        }

        private void timer22_Tick(object sender, EventArgs e)
        {

        }

        private void timer23_Tick(object sender, EventArgs e)
        {

        }

        private void timer24_Tick(object sender, EventArgs e)
        {

        }

        private void timer25_Tick(object sender, EventArgs e)
        {

        }

        private void timer26_Tick(object sender, EventArgs e)
        {

        }

        private void timer27_Tick(object sender, EventArgs e)
        {
            o9.Left += speed_l9;
            o9.Top += speed_t9;


            if (o9.Left <= playground.Left)
            {
                speed_l9 = -speed_l9;
            }
            if (o9.Right >= playground.Right)
            {
                speed_l9 = -speed_l9;
            }
            if (o9.Top <= playground.Top)
            {
                speed_t9 = -speed_t9;
            }
            if (o9.Bottom >= playground.Bottom)
            {
                speed_t9 = -speed_t9;
            }
        }

        private void timer28_Tick(object sender, EventArgs e)
        {
            o8.Left -= speed_l8;
            o8.Top -= speed_t8;


            if (o8.Left <= playground.Left)
            {
                speed_l8 = -speed_l8;
            }
            if (o8.Right >= playground.Right)
            {
                speed_l8 = -speed_l8;
            }
            if (o8.Top <= playground.Top)
            {
                speed_t8 = -speed_t8;
            }
            if (o8.Bottom >= playground.Bottom)
            {
                speed_t8 = -speed_t8;
            }
        }

        private void timer29_Tick(object sender, EventArgs e)
        {
            o7.Left -= speed_l7;
            o7.Top += speed_t7;


            if (o7.Left <= playground.Left)
            {
                speed_l7 = -speed_l7;
            }
            if (o7.Right >= playground.Right)
            {
                speed_l7 = -speed_l7;
            }
            if (o7.Top <= playground.Top)
            {
                speed_t7 = -speed_t7;
            }
            if (o7.Bottom >= playground.Bottom)
            {
                speed_t7 = -speed_t7;
            }
        }

      
        }
        
    }


