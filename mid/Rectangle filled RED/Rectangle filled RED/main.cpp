#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    int left = 100, top = 100, right = 200, bottom = 200;

    initgraph(&gd, &gm, "");

    setfillstyle(SOLID_FILL, RED);
    bar(left, top, right, bottom);

    getch();
    closegraph();

    return 0;
}
