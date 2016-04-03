using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;

namespace example_3
{
    class Figure
    {
      protected  Point p; // позиция
       protected Color c; // контур
       protected Color c2; // заливка

        public Figure()   // конструктор без параметров
        {
            p = new Point(0, 0);
            c = Color.Black;
            c2 = Color.White;
        }
        public Figure(Point p1, Color c1,Color c3)   // конструктор с параметрами
        {
            p = p1;
            c = c1;
            c2 = c3;
        }
    }
}
