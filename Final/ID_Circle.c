
#include <graphics.h>
#include <conio.h>
#include <iostream.h>

int main()
{
    int gd = DETECT, gm;
    int x = 300, y = 250;
    int r = 50;
    char ch;

    initgraph(&gd, &gm, "");

    while (1)
    {
        cleardevice();

        // Draw circle
        circle(x, y, r);

        // Display instructions
        outtextxy(200, 50, "Press 'i' to Increase Radius");
        outtextxy(200, 70, "Press 'd' to Decrease Radius");
        outtextxy(200, 90, "Press 'ESC' to Exit");

        ch = getch();

        if (ch == 'i' || ch == 'I')
        {
            r = r + 15;
        }
        else if (ch == 'd' || ch == 'D')
        {
            if (r > 15)
                r = r - 15;
        }
        else if (ch == 27)
        {
            break;
        }
    }

    closegraph();

    return 0;
}
