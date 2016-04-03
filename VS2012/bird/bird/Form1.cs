using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace bird
{
    public partial class Form1 : Form
    {
        public int speed_top = 9;

    
        public Form1()
        {
            InitializeComponent();
            timer1.Enabled = true;

        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            player.Top += speed_top;

            /*if (player.Bottom >= screen.Bottom)
            {
      
                MessageBox.Show("Вы проиграли!", "FlyBird", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
            */
        }

        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {
            switch (e.KeyCode)
            {
                case Keys.Up: player.Top -= 70;
                    break;
                case Keys.Right: player.Left += 70;
                    break;
            }

           
        }

    }
}
