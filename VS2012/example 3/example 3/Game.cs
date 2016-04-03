using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;

namespace example_3
{
    class Game 
    {
        int Nblocks;
        List<Block> B;  // список блоков 
        List< Rectangle> W;
        Circle C; 
        Size D; 
        Desk Q;

        public Game()
        {
            Nblocks = 0;
            B = new List<Block>();//  новый список блоков
            W = new List<Rectangle>();
            C = new Circle();       //  новый круг
            D = new Size();  
            Q = new Desk();         //  новая доска
        }

        public Game(int N, Size d)
        {
            Nblocks = N;
            B = new List<Block>(Nblocks); 
            CreateBlocks();
            W = new List<Rectangle>(3);
            CreateWall();
            D = d;
            C = new Circle(10, new Point(d.Width / 2, d.Height - 60), Color.Red, Color.Red); // указываем параметры нашего шарика
            Q = new Desk(100, 10, new Point(d.Width / 2, d.Height - 20), Color.Black, Color.Black); // указываем параметры нашей доски
        }

        private void CreateWall()
        {
            W.Add(new Rectangle(1,1,1,700));       //левая стена для отражения
            W.Add(new Rectangle(480,1,1,700));     //правя стена для отражения
            W.Add(new Rectangle(1,1,700,1));       //верхняя стена для отражения
        }

        private void CreateBlocks()  
        {
            B.Add(new Block(80, 40, new Point(10,10), Color.Yellow, Color.Yellow));
            B.Add(new Block(80, 40, new Point(70, 70), Color.Yellow, Color.Blue));
            B.Add(new Block(80, 40, new Point(160, 70), Color.Yellow, Color.Blue));
            B.Add(new Block(80, 40, new Point(250, 70), Color.Yellow, Color.Blue));
            B.Add(new Block(80, 40, new Point(340, 70), Color.Yellow, Color.Blue));
            B.Add(new Block(80, 40, new Point(390, 10), Color.Yellow, Color.Yellow));
            B.Add(new Block(80, 40, new Point(160, 120), Color.Red, Color.Red));
            B.Add(new Block(80, 40, new Point(250, 120), Color.Red, Color.Red));
           
        }

        internal void paint(Graphics g)         // функция рисования
        {
            for (int i = 0; i < B.Count; i++)    // рисуем блоки в цикле
            {
                B[i].paint(g);
            }
            C.paint(g);                      // рисуем круг
            Q.paint(g);                      // рисуем доску
        }

        internal int Time(int maxY)                 // функция таймера
        {

            C.move();
            if (C.goOut(maxY))
            {
                return 1;  //game over
            }
            Q.move();
            hitBlocks();
            if (B.Count == 0)
            {
                return 2; // победа
            }
            hitWalls();
            hitDesk();

            return 0;
        }

        private void hitDesk()
        {
            Rectangle rc = new Rectangle(C.getPoint(), C.GetSize());
            Rectangle rb = Q.getRect();
            if(rc.IntersectsWith(rb))
            {
                C.otscoky();
            }

        }

        private void hitWalls()
        {
            Rectangle rc = new Rectangle(C.getPoint(), C.GetSize());



            if (rc.IntersectsWith(W[0]))
            {
                C.otscokx();
            }

            if (rc.IntersectsWith(W[1]))
            {
                C.otscokx();
            }

            if (rc.IntersectsWith(W[2]))
            {
                C.otscoky();
            }
          
        }

        private void hitBlocks()
        {
            Rectangle rc = new Rectangle(C.getPoint(), C.GetSize());
            for (int i = 0; i < B.Count; i++)  
            {
                Rectangle rb = B[i].getRect();
                if (rc.IntersectsWith(rb))
                {
                    B.RemoveAt(i);
                }

            }
        }

        internal void moveDesk(int p)
        {
            Q.changeV(p);
        }
    }
}
