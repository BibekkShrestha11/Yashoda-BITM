#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    setbkcolor(BLUE);        
    cleardevice();          

    setcolor(YELLOW);       
    setlinestyle(SOLID_LINE, 0, 2);
    line(50, 50, 300, 50);   

    setcolor(RED);
    setlinestyle(DASHED_LINE, 0, 2);
    line(50, 100, 300, 100); 

    setcolor(GREEN);
    setlinestyle(DOTTED_LINE, 0, 2);
    line(50, 150, 300, 150); 

    getch();

    closegraph();

    return 0;
}