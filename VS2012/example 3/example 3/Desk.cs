using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;


namespace example_3
{
    class Desk: Figure
    {
        Size sz1;
        double Vx;

         public Desk():base()
        {
            sz1 = new Size(0,0);
            Vx = 0;
        }
        public Desk(int w, int h,Point p,Color c,Color c1):base(p,c,c1)
        {
            sz1 = new Size(w, h);
            Vx = 0;
        }


        internal void paint(Graphics g)
        {
            g.FillRectangle(new SolidBrush(c2), p.X, p.Y, sz1.Width, sz1.Height);
            g.DrawRectangle(new Pen(c), p.X, p.Y, sz1.Width, sz1.Height);
        }

        internal void move()
        {
            p.X += (int)Vx;
        }

        internal void changeV(int p)
        {
            Vx += p;
        }

        internal Rectangle getRect()
        {
            return new Rectangle(p, sz1);
        }
    }
}
