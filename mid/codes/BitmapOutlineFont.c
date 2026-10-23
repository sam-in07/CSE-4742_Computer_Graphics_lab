#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int i, j, x, y, x1, y1, x2, y2;
    
    // 7x5 Bitmap matrix for the character 'A'
    int bitmap_A[7][5] = {
        {0, 1, 1, 1, 0},
        {1, 0, 0, 0, 1},
        {1, 0, 0, 0, 1},
        {1, 1, 1, 1, 1},
        {1, 0, 0, 0, 1},
        {1, 0, 0, 0, 1},
        {1, 0, 0, 0, 1}
    };

    // Initialize graphics
    initgraph(&gd, &gm, "C:\\TC\\BGI"); // Update path if using a different compiler/setup

    // Clear the screen and set background
    cleardevice();
    setbkcolor(BLACK);
    setcolor(WHITE);

    // ==========================================
    // 1. BITMAP METHOD (Raster Representation)
    // ==========================================
    
    // Title for Bitmap Method
    outtextxy(80, 50, "Bitmap Method (Raster)");
    
    int scale = 8;       // Size of each pixel block to make it visible
    int startX = 100;    // Starting X coordinate
    int startY = 100;    // Starting Y coordinate

    setfillstyle(SOLID_FILL, CYAN);

    // Scan convert the bitmap matrix
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 5; j++) {
            if (bitmap_A[i][j] == 1) {
                // Calculate coordinates for the small block
                x1 = startX + (j * scale);
                y1 = startY + (i * scale);
                x2 = x1 + scale - 1;
                y2 = y1 + scale - 1;
                
                // Draw and fill the block
                bar(x1, y1, x2, y2); 
            }
        }
    }

    // ==========================================
    // 2. OUTLINE METHOD (Vector Representation)
    // ==========================================
    
    // Title for Outline Method
    outtextxy(350, 50, "Outline Method (Vector)");

    int outStartX = 350; // Starting X coordinate for outline
    int outStartY = 100; // Starting Y coordinate for outline
    
    setcolor(YELLOW);
    setlinestyle(SOLID_LINE, 0, THICK_WIDTH); // Make outline thick for visibility

    // Define the boundary lines for 'A'
    // Left leg
    line(outStartX, outStartY + 70, outStartX + 25, outStartY);
    
    // Right leg
    line(outStartX + 25, outStartY, outStartX + 50, outStartY + 70);
    
    // Crossbar
    line(outStartX + 12, outStartY + 40, outStartX + 38, outStartY + 40);

    
    getch();
    closegraph();
    
    return 0;
}