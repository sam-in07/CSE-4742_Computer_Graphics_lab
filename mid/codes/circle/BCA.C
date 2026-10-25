#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

      int main(void)
	     {
		 int x,d,y,r,h,k;
		 /* request auto detection */
		 int gdriver = DETECT, gmode;
		 initgraph(&gdriver, &gmode, "");

		 printf("Using Bresenham's Circle Algorithm");

		 x=0;
		 r=120;
		 y=r;
		 h=400;
		 k=250;

		 d=3-(2*r);
		 while(x<=y)
		    {
		      putpixel(x+h,y+k,2); //315 to 270
		      putpixel(y+h,x+k,2); //360 to 315
              putpixel(-y+h,x+k,3); //225 to 180
		      putpixel(-x+h,y+k,3); //270 to 225
		      putpixel(-x+h,-y+k,4); //135 to 90
		      putpixel(-y+h,-x+k,4); //180 to 135
		      putpixel(y+h,-x+k,5); // 45 to 0
		      putpixel(x+h,-y+k,5); //90 to 45

		      if(d<0)
			    d=d+(4*x)+6;
		      else
			 {
			    d=d+4*(x-y)+10;
			    y--;
			 }
		      x++;
		    }
	   getch();
      closegraph();
 }

