using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;

namespace example_3
{
    class Circle: Figure
    {
        int r;
        double Vx;
        double Vy;

        public Circle(): base()
        {
            r = 0;
            Vx = 0;
            Vy = 0;
        }

        public Circle(int r1, Point p, Color c, Color c1): base(p, c, c1)
        {
            r = r1;
            Random rand = new Random();
            Vy = rand.Next(-20, -5);
            Vx = rand.Next(-10, 10);
        }

        internal void paint(Graphics g)
        {
            g.FillEllipse(new SolidBrush(c2), p.X-r, p.Y-r, 2*r,2*r);
            g.DrawEllipse(new Pen(c), p.X-r, p.Y-r, 2*r,2*r);          
        }

        internal void move()
        {
            p.X +=(int) Vx;
            p.Y += (int)Vy;

        }

        internal Point getPoint()
        {
            return new Point(p.X - r, p.Y - r);
        }

        internal Size GetSize()
        {
            return new Size(2 * r, 2 * r);
        }

        internal void otscokx()
        {
            Vx = -Vx; 
        }

        internal void otscoky()
        {
            Vy = -Vy;
        }

        internal bool goOut(int maxY)
        {
            return p.Y > maxY;
        }
    }
}
