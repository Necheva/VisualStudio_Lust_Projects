using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace test2
{
    public partial class Form1 : Form
    {
        public int speed_l1 = 1; // 01
        public int speed_t1 = 1;
        public int speed_l2 = 2; // 02
        public int speed_t2 = 2;
        public int speed_l3 = 1; // 03
        public int speed_t3 = 1;
        public int speed_l4 = 2; // 04
        public int speed_t4 = 2;
        public int speed_l5 = 1; // 05
        public int speed_t5 = 1;
        public int speed_l6 = 1; // 06
        public int speed_t6 = 1;
        public int speed_l7 = 1; // 07
        public int speed_t7 = 1;

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


       /* public int speed_q10 = 1; // 16
        public int speed_c10 = 1;
        public int speed_q11 = 1; // 17
        public int speed_c11 = 1;
        public int speed_q12 = 1; // 18
        public int speed_c12 = 1;
        public int speed_q21 = 1; // 27
        public int speed_c21 = 1;*/

        public Form1()
        {
            InitializeComponent();

            timer1.Enabled = true;
        }

        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {
            switch (e.KeyCode)
            {
                case Keys.Left: player.Left -= 4; break;
                case Keys.Right: player.Left += 4; break;
                case Keys.Up: player.Top -= 4; break;
                case Keys.Down: player.Top +=4; break;

            }
        }

        private void timer1_Tick(object sender, EventArgs e)
        {

            o1.Left -= speed_l1;
            o1.Top -= speed_t1;


            
            if (o1.Left <=g2.Left)
            {
                speed_l1 = -speed_l1;
            }
            if (o1.Right >= g2.Right)
            {
                speed_l1 = -speed_l1;
            }
            if (o1.Top <= g2.Top)
            {
                speed_t1 = -speed_t1;
            }
            if (o1.Bottom >= g2.Bottom)
            {
                speed_t1 = -speed_t1;
            }


            o2.Left += speed_l2;
            o2.Top += speed_t2;


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


            o6.Left += speed_l6;
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

            o7.Left -= speed_l7;
            o7.Top -= speed_t7;


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

            o3.Left -= speed_l3;
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

            o5.Left += speed_l5;
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


            q1.Left += speed_q1;
            q1.Top -= speed_c1;


            if (q1.Left <= g1.Left)
            {
                speed_q1 = -speed_q1;
            }
            if (q1.Right >= g1.Right)
            {
                speed_q1 = -speed_q1;
            }
            if (q1.Top <= g1.Top)
            {
                speed_c1 = -speed_c1;
            }
            if (q1.Bottom >= g1.Bottom)
            {
                speed_c1 = -speed_c1;
            }

            q2.Left -= speed_q2;
            q2.Top += speed_c2;


            if (q2.Left <= g1.Left)
            {
                speed_q2 = -speed_q2;
            }
            if (q2.Right >= g1.Right)
            {
                speed_q2 = -speed_q2;
            }
            if (q2.Top <= g1.Top)
            {
                speed_c2 = -speed_c2;
            }
            if (q2.Bottom >= g1.Bottom)
            {
                speed_c2 = -speed_c2;
            }

            q3.Left += speed_q3;
            q3.Top -= speed_c3;


            if (q3.Left <= g1.Left)
            {
                speed_q3 = -speed_q3;
            }
            if (q3.Right >= g1.Right)
            {
                speed_q3 = -speed_q3;
            }
            if (q3.Top <= g1.Top)
            {
                speed_c3 = -speed_c3;
            }
            if (q3.Bottom >= g1.Bottom)
            {
                speed_c3 = -speed_c3;
            }

            q6.Left -= speed_q6;
            q6.Top -= speed_c6;


            if (q6.Left <= g1.Left)
            {
                speed_q6 = -speed_q6;
            }
            if (q6.Right >= g1.Right)
            {
                speed_q6 = -speed_q6;
            }
            if (q6.Top <= g1.Top)
            {
                speed_c6 = -speed_c6;
            }
            if (q6.Bottom >= g1.Bottom)
            {
                speed_c6 = -speed_c6;
            }

            q8.Left += speed_q8;
            q8.Top -= speed_c8;


            if (q8.Left <= g1.Left)
            {
                speed_q8 = -speed_q8;
            }
            if (q8.Right >= g1.Right)
            {
                speed_q8 = -speed_q8;
            }
            if (q8.Top <= g1.Top)
            {
                speed_c8 = -speed_c8;
            }
            if (q8.Bottom >= g1.Bottom)
            {
                speed_c8 = -speed_c8;
            }

            q9.Left += speed_q9;
            q9.Top += speed_c9;


            if (q9.Left <= g1.Left)
            {
                speed_q9 = -speed_q9;
            }
            if (q9.Right >= g1.Right)
            {
                speed_q9 = -speed_q9;
            }
            if (q9.Top <= g1.Top)
            {
                speed_c9 = -speed_q9;
            }
            if (q9.Bottom >= g1.Bottom)
            {
                speed_c9 = -speed_c9;
            }

            /*
            if ((o4.Top <= o2.Bottom) && (o4.Right >= o2.Left) && (o4.Left <= o2.Right) && (o4.Bottom >= o2.Top))
            {
                speed_t4 = -speed_t4;
            }

            if ((o4.Top <= o1.Bottom) && (o4.Right >= o1.Left) && (o4.Left <= o1.Right) && (o4.Bottom >= o1.Top))
            {
                speed_t4 = -speed_t4;
            }


            if ((o4.Top <= o7.Bottom) && (o4.Right >= o7.Left) && (o4.Left <= o7.Right) && (o4.Bottom >= o7.Top))
            {
                speed_t4 = -speed_t4;
            }


            if ((o4.Top <= o5.Bottom) && (o4.Right >= o5.Left) && (o4.Left <= o5.Right) && (o4.Bottom >= o5.Top))
            {
                speed_t4 = -speed_t4;
            }


            if ((o4.Top <= o3.Bottom) && (o4.Right >= o3.Left) && (o4.Left <= o3.Right) && (o4.Bottom >= o3.Top))
            {
                speed_t4 = -speed_t4;
            }

             
            if ((o4.Top <= o6.Bottom) && (o4.Right >= o6.Left) && (o4.Left <= o6.Right) && (o4.Bottom >= o6.Top))
            {
                speed_t4 = -speed_t4;
            }


            if ((o1.Top <= o4.Bottom) && (o1.Right >= o4.Left) && (o1.Left <= o4.Right) && (o1.Bottom >= o4.Top))
            {
                speed_t4 = -speed_t4;
            }*/
        }

        private void playground_Paint(object sender, PaintEventArgs e)
        {

        }

       
    }
}
