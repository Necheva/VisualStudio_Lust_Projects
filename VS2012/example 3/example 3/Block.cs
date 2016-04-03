using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;

namespace example_3
{
    class Block: Figure
    {
        Size sz;

        public Block():base()
        {
            sz = new Size(0,0);
        }
        public Block(int w, int h,Point p,Color c,Color c1):base(p,c,c1)
        {
            sz = new Size(w, h);
        }

        internal void paint(Graphics g)
        {
            g.FillRectangle(new SolidBrush(c2), p.X, p.Y, sz.Width, sz.Height);
            g.DrawRectangle(new Pen(c), p.X, p.Y, sz.Width, sz.Height);
        }

        internal Rectangle getRect()
        {
            return new Rectangle(p, sz);
        }
    }
}
