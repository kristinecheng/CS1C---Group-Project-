#include "text.h"


/*
Text::Text(int x1, int y1, int l_in, int w_in, QPaintDevice *device)
    : Shape(device) , x(x1) , y(y1) , l(l_in) , w(w_in) , align(Qt::AlignCenter) ,
      output("hello world") , text("Times")
{
    shapeID = TextCount++;
    shapeID = shapeID + 8000;
}
*/

Text:: Text(int x_in, int y_in,int l_in, int w_in)
{

   this->x = x_in;
   this->y = y_in;
   this->l = l_in;
   this->w = w_in;

   ali = Qt::AlignCenter;

   TextCount++;

}


void Text::draw()
{
    QRect drawRect(x,y,l,w);
    drawText(drawRect,ali,out);
}

void Text::move(int x_in, int y_in)
{
    x = x_in;
    y = y_in;
}

double Text::getPerimeter()
{
    return 0;
}

double Text::getArea()
{
    return 0;
}

void Text::setTextString(QString value)
{
    out = value;
}

void Text::setTextColor(Qt::GlobalColor c)
{
    pen.setColor(c);
}

void Text::setTextAllignment(Qt::AlignmentFlag a)
{
    ali = a;
}

void Text::setTextPointSize(int size)
{
    text.setPointSize(size);
}

void Text::setTextFontFamily(QString f)
{
    text.setFamily(f);
}

void Text::setTextFontStyle(QFont::Style sty)
{
    text.setStyle(sty);
}

void Text::setTextFontWeight(QFont::Weight w)
{
    text.setWeight(w);
}
