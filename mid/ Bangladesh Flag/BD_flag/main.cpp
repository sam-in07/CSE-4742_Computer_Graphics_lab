#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    setbkcolor(WHITE);
    cleardevice();

    // Flag pole
    setfillstyle(SOLID_FILL, BLACK);
    bar(90, 100, 100, 230);

    // Green flag
    setfillstyle(SOLID_FILL, GREEN);
    bar(100, 100, 300, 220);

    // Red circle
    setfillstyle(SOLID_FILL, RED);
    circle(200, 160, 40);
    floodfill(200, 160, GREEN);

    getch();
    closegraph();

    return 0;
}
