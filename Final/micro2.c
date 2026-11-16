#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    cleardevice();
    setcolor(WHITE);
    setlinestyle(SOLID_LINE, 0, 3);

    // 1. Microphone capsule (top semicircle + vertical sides + bottom semicircle)
    arc(320, 125, 0, 180, 55);      // Top semicircle
    line(265, 125, 265, 225);       // Left straight side
    line(375, 125, 375, 225);       // Right straight side
    arc(320, 225, 180, 360, 55);    // Bottom semicircle

    // 2. Outer U-shaped holder (with gap around the capsule)
    line(242, 210, 242, 225);       // Left holder tip
    line(398, 210, 398, 225);       // Right holder tip
    arc(320, 225, 180, 360, 78);    // Outer U-curve

    // 3. Stand and base
    line(320, 303, 320, 405);       // Vertical stand
    line(265, 405, 375, 405);       // Horizontal base

    getch();
    closegraph();

    return 0;
}