using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

Namespace star__1
{
    public partial class Form1 : Form
    {
        Public Form1()
        {
            InitializeComponent();
            timer1.Enabled = true;

            Cursor.Hide();                                                //отключить курсор

            spaceship.Top = playground.Bottom - (playground.Bottom / 4);   //установка ракеты внизу экрана

        }       

        private void timer1_Tick(object sender, EventArgs e)
        {
            spaceship.Left = Cursor.Position.X - (spaceship.Width / 2);        //установка позиции курсора
        }
    }
}
