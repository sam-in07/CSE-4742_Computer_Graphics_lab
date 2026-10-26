#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>

#define PI 3.14159265

int main()
{
    int gd = DETECT, gm;

    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    int h, k;
    float angle;
    initgraph(&gd, &gm, "");

    x1 = 300;
    y1 = 300;
    x2 = 450;
    y2 = 300;
    h = 300;
    k = 300;

    angle = (45 * PI) / 180.0;

    /*   line */
    setcolor(WHITE);
    line(x1, y1, x2, y2);

    /* Rotate 1 ep*/
    x3 = h + (x1 - h) * cos(angle)
           - (y1 - k) * sin(angle);

    y3 = k + (x1 - h) * sin(angle)
           + (y1 - k) * cos(angle);

    /* Rotate 2 ep */
    x4 = h + (x2 - h) * cos(angle)
           - (y2 - k) * sin(angle);

    y4 = k + (x2 - h) * sin(angle)
           + (y2 - k) * cos(angle);

    /* D rotated line */
    setcolor(YELLOW);
    line(x3, y3, x4, y4);

    /* D ro point */
    setcolor(RED);
    circle(h, k, 5);

    getch();
    closegraph();

    return 0;
}
