
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    int x = 300, y = 200;
    int size = 60;
    int step = 15;
    char ch;

    initgraph(&gd, &gm, "");

    while (1)
    {
        cleardevice();

        // Draw Square
        rectangle(x, y, x + size, y + size);

        outtextxy(10, 10, "L = Left");
        outtextxy(10, 30, "R = Right");
        outtextxy(10, 50, "U = Up");
        outtextxy(10, 70, "D = Down");
        outtextxy(10, 90, "ESC = Exit");

        ch = getch();

        if (ch == 'l' || ch == 'L')
            x -= step;
        else if (ch == 'r' || ch == 'R')
            x += step;
        else if (ch == 'u' || ch == 'U')
            y -= step;
        else if (ch == 'd' || ch == 'D')
            y += step;
        else if (ch == 27)
            break;

        if (x < 0) x = 0;
        if (x > getmaxx() - size)
            x = getmaxx() - size;

        if (y < 0) y = 0;
        if (y > getmaxy() - size)
            y = getmaxy() - size;
    }

    closegraph();
    return 0;
}
