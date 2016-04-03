using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace PingPong
{

    public partial class Form1 : Form
    {
        
        public int speed_left =4 ;   // скорость мячика
        public int speed_top = 4;
    
        public Form1()
        {
 
            InitializeComponent();
            timer15.Enabled = true;
            timer6.Enabled = true;
            timer7.Enabled = true;
            timer8.Enabled = true;
            timer9.Enabled = true;
            timer10.Enabled = true;
            timer11.Enabled = true;
            timer12.Enabled = true;
            timer13.Enabled = true;
            timer14.Enabled = true;
            timer4.Enabled = true;
            timer5.Enabled = true;
            timer3.Enabled = true;
            timer2.Enabled = true;
            timer1.Enabled = true;

            //Cursor.Hide();                                                //отключить курсор

           // racker.Top = playgroung.Bottom - (playgroung.Bottom / 10);   //установка ракетки внизу экрана

        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            racker.Left = Cursor.Position.X - (racker.Width / 2);        //установка позиции курсора
         
            ball.Left += speed_left;
            ball.Top += speed_top;

            if ((ball.Bottom >= racker.Top) && (ball.Right >= racker.Left) && (ball.Left <= racker.Right))   //удар об ракетку
            {
                speed_top = -speed_top;     //изменяет направление
            }
       
            if (ball.Left <= playgroung.Left)
            {
                speed_left = -speed_left;
            }
            if (ball.Right >= playgroung.Right)
            {
                speed_left = -speed_left;
            }
            if (ball.Top <= playgroung.Top)
            {
              speed_top = -speed_top;
            }
            if (ball.Bottom >= playgroung.Bottom)
            {
               timer1.Enabled = false;
            }
        }
   
        /////////////////////////////////////////////////////////////////////////////////////////////   РАБОТА С БЛОКАМИ (TIMER_2 - TIMER_14)
  
   
          private void timer2_Tick(object sender, EventArgs e)           
          {
              if ((ball.Top <= step1.Bottom) && (ball.Right >= step1.Left) && (ball.Left <= step1.Right)&&(ball.Bottom>=step1.Top))
              {
                 // speed_left = -speed_left;
                  speed_top = -speed_top;
                  step1.Hide();
                  timer2.Enabled = false;
                
              }

          }

          private void timer3_Tick(object sender, EventArgs e)
          {

              if ((ball.Top <= step2.Bottom) && (ball.Left <= step2.Right) && (ball.Right >= step2.Left))
              {
                 // speed_top = -speed_top;
                  step2.Hide();
                  timer3.Enabled = false;
              }

          }

          private void timer4_Tick(object sender, EventArgs e)
          {
              if ((ball.Top <= step3.Bottom) && (ball.Right >= step3.Left) && (ball.Left <= step3.Right)&&(ball.Bottom>=step3.Top))
              {
                 // speed_left = -speed_left;
                  speed_top = -speed_top;
                  step3.Hide();
                  timer4.Enabled = false;
              }

          }

          private void timer5_Tick(object sender, EventArgs e)
          {
              if ((ball.Top <= step4.Bottom) && (ball.Left >= step4.Left) && (ball.Right <= step4.Right))
              {
                  speed_top = -speed_top;
                  step4.Hide();
                  timer5.Enabled = false;
              }

          }

          private void timer6_Tick(object sender, EventArgs e)
          {
              if ((ball.Top <= step5.Bottom) && (ball.Right >= step5.Left) && (ball.Left <= step5.Right) && (ball.Bottom >= step5.Top))
              {
                  
                  speed_top = -speed_top;
                  step5.Hide();
                  timer6.Enabled = false;

              }

          }

          private void timer7_Tick(object sender, EventArgs e)
          {
              if ((ball.Top <= step6.Bottom) && (ball.Right >= step6.Left) && (ball.Left <= step6.Right) && (ball.Bottom >= step6.Top))
              {
                 // speed_left = -speed_left;
                  speed_top = -speed_top;
                  step6.Hide();
                  timer7.Enabled = false;

              }
          }

          private void timer8_Tick(object sender, EventArgs e)
          {
              if ((ball.Top <= step7.Bottom) && (ball.Right>= step7.Left) && (ball.Left<= step7.Right) && (ball.Bottom >= step7.Top))
              {
                 // speed_left = -speed_left;
                  speed_top = -speed_top;
                  step7.Hide();
                  timer8.Enabled = false;

              }
          }

          private void timer9_Tick(object sender, EventArgs e)
          {
              if ((ball.Top <= step8.Bottom) && (ball.Right >= step8.Left) && (ball.Left <= step8.Right) && (ball.Bottom >= step8.Top))
              {
                  //speed_left = -speed_left;
                  speed_top = -speed_top;
                  step8.Hide();
                  timer9.Enabled = false;

              }
          }

          private void timer10_Tick(object sender, EventArgs e)
          {
              if ((ball.Top <= step9.Bottom) && (ball.Right >= step9.Left) && (ball.Left <= step9.Right) && (ball.Bottom >= step9.Top))
              {
                 // speed_left = -speed_left;
                  speed_top = -speed_top;
                  step9.Hide();
                  timer10.Enabled = false;

              }
          }

          private void timer11_Tick(object sender, EventArgs e)
          {
              if ((ball.Top <= step10.Bottom) && (ball.Right >= step10.Left) && (ball.Left <= step10.Right) && (ball.Bottom >= step10.Top))
              {
                //  speed_left = -speed_left;
                  speed_top = -speed_top;
                  step10.Hide();
                  timer11.Enabled = false;

              }
          }

          private void timer12_Tick(object sender, EventArgs e)
          {
              if ((ball.Top <= step11.Bottom) && (ball.Left >= step11.Left) && (ball.Right <= step11.Right) && (ball.Bottom >= step11.Top))
              {
                  
                  speed_top = -speed_top;
                  step11.Hide();
                  timer12.Enabled = false;

              }
          }

          private void timer13_Tick(object sender, EventArgs e)
          {
              if ((ball.Top <= step12.Bottom) && (ball.Left >= step12.Left) && (ball.Right <= step12.Right) && (ball.Bottom >= step12.Top))
              {
                  
                  speed_top = -speed_top;
                  step12.Hide();
                  timer13.Enabled = false;

              }
          }

          private void timer14_Tick(object sender, EventArgs e)
          {
              if ((ball.Top <= step13.Bottom) && (ball.Left >= step13.Left) && (ball.Right <= step13.Right) && (ball.Bottom >= step13.Top))
              {
                  
                  speed_top = -speed_top;
                  step13.Hide();
                  timer14.Enabled = false;

              }
          }

          private void timer15_Tick(object sender, EventArgs e) // Предположительно должен выводить окно с поздравлениями о пройденном уровне, но программа вместо одного окна выводит около 20-30 окон!
          {
             /* if ((timer2.Enabled == false) && (timer3.Enabled == false) && (timer4.Enabled == false) && (timer5.Enabled == false) && (timer6.Enabled == false) && (timer7.Enabled == false) && (timer8.Enabled == false) && (timer9.Enabled == false) && (timer10.Enabled == false) && (timer11.Enabled == false) && (timer12.Enabled == false) && (timer13.Enabled == false) && (timer14.Enabled == false))
              {
                  MessageBox.Show("Вы прошли уровень, поздравляю!", "Arcanoid", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                  timer15.Enabled = false;
              }*/
          }
          private void Form1_KeyDown(object sender, KeyEventArgs e)
          {
              
              if (e.KeyCode == Keys.Escape) { this.Close(); }           //Esc для выхода
          }

    }
}
