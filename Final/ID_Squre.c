
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    int x = 300, y = 200;
    int size = 60;
    char ch;

    initgraph(&gd, &gm, "");

    while (1)
    {
        cleardevice();

        // Draw Square
        rectangle(x, y, x + size, y + size);

        outtextxy(200, 50, "Press I to Increase Size");
        outtextxy(200, 70, "Press D to Decrease Size");
        outtextxy(200, 90, "Press ESC to Exit");

        ch = getch();

        if (ch == 'i' || ch == 'I')
            size += 15;

        else if (ch == 'd' || ch == 'D')
        {
            if (size > 15)
                size -= 15;
        }

        else if (ch == 27)
            break;
    }

    closegraph();
    return 0;
}
