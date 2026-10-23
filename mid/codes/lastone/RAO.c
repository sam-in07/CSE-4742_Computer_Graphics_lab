#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>

#define PI 3.14159265

int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    float angle;

    initgraph(&gd, &gm, "");

    x1 = 300;
    y1 = 300;

    angle = (40 * PI) / 180.0;

    /* Original point */
    setcolor(WHITE);
    circle(x1, y1, 5);

    /* Line from origin to point */
    line(0, 0, x1, y1);

    /* Rotation about origin */
    x2 = x1 * cos(angle) - y1 * sin(angle);
    y2 = x1 * sin(angle) + y1 * cos(angle);

    /* Rotated point */
    setcolor(YELLOW);
    circle(x2, y2, 5);

    /* Line from origin to rotated point */
    line(0, 0, x2, y2);

    getch();
    closegraph();

    return 0;
}

