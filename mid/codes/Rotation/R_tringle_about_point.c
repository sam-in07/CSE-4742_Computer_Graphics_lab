#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>

#define PI 3.14159265

int main()
{
    int gd = DETECT, gm;

    int x1, y1;
    int x2, y2;
    int x3, y3;

    int x4, y4;
    int x5, y5;
    int x6, y6;

    int h, k;
    float angle;

    initgraph(&gd, &gm, "");

    /* Original triangle */
    x1 = 400;
    y1 = 400;

    x2 = 400;
    y2 = 300;

    x3 = 300;
    y3 = 400;

    /* Rotation point */
    h = 400;
    k = 400;

    angle = (45 * PI) / 180.0;

    /* Draw original triangle */
    setcolor(WHITE);

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    /* Ro first vertex */
    x4 = h + (x1 - h) * cos(angle)
           - (y1 - k) * sin(angle);

    y4 = k + (x1 - h) * sin(angle)
           + (y1 - k) * cos(angle);

    /* Ro second vertex */
    x5 = h + (x2 - h) * cos(angle)
           - (y2 - k) * sin(angle);

    y5 = k + (x2 - h) * sin(angle)
           + (y2 - k) * cos(angle);

    /* Ro third vertex */
    x6 = h + (x3 - h) * cos(angle)
           - (y3 - k) * sin(angle);

    y6 = k + (x3 - h) * sin(angle)
           + (y3 - k) * cos(angle);

    /* Draw rotated triangle */
    setcolor(YELLOW);

    line(x4, y4, x5, y5);
    line(x5, y5, x6, y6);
    line(x6, y6, x4, y4);

    /* Draw rotation point */
    setcolor(RED);
    circle(h, k, 5);

    getch();
    closegraph();

    return 0;
}

