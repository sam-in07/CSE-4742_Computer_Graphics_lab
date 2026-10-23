#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

     int main( )
	 {
	     int x1,y1,x2,y2,dx,dy,ds,dt,d,x,y;
	     /* request auto detection */
	     int gdriver = DETECT, gmode;

	    /* initialize graphics and local variables */
	     initgraph(&gdriver, &gmode, " ");

	     x1=200;
	     x2=400;
	     y1=200;
	     y2=400;

	     x=x1;
	     y=y1;
	     dx=x2-x1;
	     dy=y2-y1;
	     dt=2*(dy-dx); // if m>1 dy will replace with dx and dx will replace with dy
	     ds=2*dy; // if m>1 dy will replace with dx
	     d=2*dy-dx; // if m>1 dy will replace with dx and dx will replace with dy

	     printf("Using Bresenham's Line Algorithm");
	     putpixel(x,y,7);
	     while(x<=x2) // y<=y2 for m>1
		    {
			x=x+1; //comment for draw vertical line. y=y+1 for m>1
			if(d<0)
			     d=d+ds;
			else
			     {
				y=y+1; //x=x+1 for m>1
				d=d+dt;
			     }
			putpixel(x,y,7);
		    }

	       getch();
	   closegraph();
	   return 0;
}



//	     while(x>=x2) // if m<0
//		    {
//			x=x-1; // if m<0
//			if(d<0)
//			     d=d+ds;
//			else
//			     {
//				y=y+1;
//				d=d+dt;
//			     }
//			putpixel(x,y,7);
//		    }
//
//	       getch();
//	   closegraph();
//	   return 0;
//}
