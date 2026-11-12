
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    // Initial center position of circle
    int x = 320, y = 240;
    int radius = 30;
    int step = 15;

    char ch;

    initgraph(&gd, &gm, "");

    while (1)
    {
        cleardevice();

        // Draw circle
        circle(x, y, radius);

        // Display instructions
        outtextxy(10, 10, "Press l = Left");
        outtextxy(10, 30, "Press r = Right");
        outtextxy(10, 50, "Press u = Up");
        outtextxy(10, 70, "Press d = Down");
        outtextxy(10, 90, "Press ESC = Exit");

        ch = getch();

        if (ch == 'l' || ch == 'L')
        {
            x = x - step;
        }
        else if (ch == 'r' || ch == 'R')
        {
            x = x + step;
        }
        else if (ch == 'u' || ch == 'U')
        {
            y = y - step;
        }
        else if (ch == 'd' || ch == 'D')
        {
            y = y + step;
        }
        else if (ch == 27)
        {
            break;
        }

        // Prevent circle from moving outside screen
        if (x < radius)
            x = radius;

        if (x > getmaxx() - radius)
            x = getmaxx() - radius;

        if (y < radius)
            y = radius;

        if (y > getmaxy() - radius)
            y = getmaxy() - radius;
    }

    closegraph();
    return 0;
}
