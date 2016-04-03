using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace example_3
{
    public partial class Form1 : Form
    {
        Game game;                    // подключили класс game
        int Nblocks;                  // количество блоков

        public Form1()
        {
            InitializeComponent();
            Nblocks= 10;              // инициализируем переменную, отвечающуюза количество блоков
            game = new Game(Nblocks, this.ClientSize);   // указываем расположение блоков на игровом поле
        }

        private void Form1_Paint(object sender, PaintEventArgs e) // подключаем обработчик рисования
        {
            Graphics g = this.CreateGraphics();
            game.paint(g);
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            int result=game.Time(400);
            Invalidate();// отрисовка движения

            if (result == 1)
            {
                timer1.Enabled = false;
                MessageBox.Show("проиграл");
            }
            if (result == 2)
            {
                timer1.Enabled = false;
                MessageBox.Show("победа");
            }
           
        }

        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == (Keys.LButton | Keys.MButton | Keys.Space))
            {
                    game.moveDesk(-3);
            }

            if (e.KeyCode == (Keys.LButton |Keys.RButton | Keys.MButton | Keys.Space))
            {
                game.moveDesk(3);
            }
        }
    }
}
