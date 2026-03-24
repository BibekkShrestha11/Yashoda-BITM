#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    line(50, 50, 300, 50);

    circle(150, 150, 50);

    rectangle(50, 200, 250, 300);

    ellipse(300, 200, 0, 360, 80, 40);

    getch();

    closegraph();

    return 0;
}