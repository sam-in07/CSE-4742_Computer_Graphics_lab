#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

     int main( )
	 {
	     int x1,y1,x2,y2,dx,dy,ds,dt,d,x,y;
	     int gdriver = DETECT, gmode;
	     initgraph(&gdriver, &gmode, " ");

	     x1=200;
	     x2=400;
	     y1=200;
	     y2=400;

	     x=x1;
	     y=y1;
	     dx=x2-x1;
	     dy=y2-y1;
	     dt=2*(dy-dx); 
	     ds=2*dy; 
	     d=2*dy-dx; 
	     printf("Using Bresenham's Line Algorithm");
	     putpixel(x,y,7);
	     while(x<=x2) 
		    {
			x=x+1; 
			if(d<0)
			     d=d+ds;
			else
			     {
				y=y+1; 
				d=d+dt;
			     }
			putpixel(x,y,7);
		    }
	       getch();
	   closegraph();
	   return 0;
}


// m<=1

// while (x <= x2)
// {
//     x = x + 1;

//     if (d < 0)
//         d = d + ds;
//     else
//     {
//         y = y + 1;
//         d = d + dt;
//     }

//     putpixel(x, y, 7);
// }


// m>1

// while (y <= y2)
// {
//     y = y + 1;

//     if (d < 0)
//         d = d + ds;
//     else
//     {
//         x = x + 1;
//         d = d + dt;
//     }

//     putpixel(x, y, 7);
// }

// m < 0 .
// while (x >= x2)
// {
//     x = x - 1;

//     if (d < 0)
//         d = d + ds;
//     else
//     {
//         y = y + 1;
//         d = d + dt;
//     }

//     putpixel(x, y, 7);
// }
