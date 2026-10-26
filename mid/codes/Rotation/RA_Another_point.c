#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>

#define PI 3.14159265

int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    int h, k;
    float angle;

    initgraph(&gd, &gm, "");
    x1 = 300;
    y1 = 300;
    h = 200;
    k = 200;

    angle = (40 * PI) / 180.0;

    /* Original point and line */
    setcolor(WHITE);
    circle(x1, y1, 5);
    line(h, k, x1, y1);

    /* Rotation about (h,k) */
    x2 = h + (x1 - h) * cos(angle)
           - (y1 - k) * sin(angle);

    y2 = k + (x1 - h) * sin(angle)
           + (y1 - k) * cos(angle);

    /* Rotated point and line */
    setcolor(YELLOW);
    circle(x2, y2, 5);
    line(h, k, x2, y2);

    /* Rotation point */
    setcolor(RED);
    circle(h, k, 5);

    getch();
    closegraph();

    return 0;
}
