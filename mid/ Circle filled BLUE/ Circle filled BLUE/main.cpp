#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    int x = 300, y = 150, radius = 50;

    initgraph(&gd, &gm, "");

    setfillstyle(SOLID_FILL, BLUE);
    circle(x, y, radius);
    floodfill(x, y, WHITE);

    getch();
    closegraph();

    return 0;
}
