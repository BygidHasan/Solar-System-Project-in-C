#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>

int sun()
{
    line(80,45,130,45);
    rectangle(130,3,380,85);
    outtextxy(135,10,"Name: Sun");
    outtextxy(135,35,"temperature: 5,778 K");
    outtextxy(135,62,"parameter: 6.09×10^12 km^2");
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(320,33,25);
    floodfill(321,34,YELLOW);
    delay(2500);
}

int mercury()
{
    line(80,95,130,95);
    rectangle(130,55,390,185);
    outtextxy(135,60,"Name: mercury");
    outtextxy(135,85,"Orbital period: 88 days");
    outtextxy(135,110,"Mass: 3.285 × 10^23 kg");
    outtextxy(135,135,"Radius: 2,439.7 km");
    outtextxy(135,160,"distance from sun: 57.91 million km");
    setcolor(6);
    setfillstyle(SOLID_FILL,6);
    circle(340,105,25);
    floodfill(341,106,6);
    delay(4000);
}

int venus()
{
    line(80,145,130,145);
    rectangle(130,105,395,235);
    outtextxy(135,110,"Name: venus");
    outtextxy(135,135,"Orbital period: 225 days");
    outtextxy(135,160,"Mass: 4.867 × 10^24 kg");
    outtextxy(135,185,"Radius: 6,051.8 km");
    outtextxy(135,210,"Distance from Sun: 108.2 million km");
    setcolor(5);
    setfillstyle(SOLID_FILL,5);
    circle(340,160,25);
    floodfill(341,161,5);
    delay(4000);
}

int earth()
{
    line(80,195,130,195);
    rectangle(130,155,395,285);
    outtextxy(135,160,"Name: earth");
    outtextxy(135,185,"Orbital period: 365 days");
    outtextxy(135,210,"Mass: 5.972 × 10^24 kg");
    outtextxy(135,235,"Radius: 6,371 km");
    outtextxy(135,260,"Distance from Sun: 149.6 million km");
    setcolor(10);
    setfillstyle(SOLID_FILL,10);
    circle(340,210,25);
    floodfill(341,221,10);
    delay(4000);
}

int mars()
{
    line(80,245,130,245);
    rectangle(130,205,400,335);
    outtextxy(135,210,"Name: mars");
    outtextxy(135,235,"Orbital period: 687 days");
    outtextxy(135,260,"Mass: 6.39 × 10^23 kg");
    outtextxy(135,285,"Radius: 3,389.5 km");
    outtextxy(135,310,"Distance from Sun: 240.26 million km");
    setcolor(4);
    setfillstyle(SOLID_FILL,4);
    circle(340,260,25);
    floodfill(341,261,4);
    delay(4000);
}

int jupiter()
{
    line(80,295,130,295);
    rectangle(130,255,400,380);
    outtextxy(135,260,"Name: jupiter");
    outtextxy(135,285,"Orbital period: 12 years");
    outtextxy(135,310,"Mass: 1.898 × 10^27 kg");
    outtextxy(135,335,"Radius: 69,911 km");
    outtextxy(135,360,"Distance from Sun: 782.76 million km");
    setcolor(8);
    setfillstyle(SOLID_FILL,8);
    circle(340,310,25);
    floodfill(341,311,8);
    delay(4000);
}
int saturn()
{
    line(80,345,130,345);
    rectangle(130,305,400,430);
    outtextxy(135,310,"Name: saturn");
    outtextxy(135,335,"Orbital period: 29 years");
    outtextxy(135,360,"Mass: 5.683 × 10^26 kg");
    outtextxy(135,385,"Radius: 58,232 km");
    outtextxy(135,410,"Distance from Sun: 1.4984 billion km");
    setcolor(5);
    setfillstyle(SOLID_FILL,5);
    circle(340,360,25);
    floodfill(341,361,5);
    delay(4000);
}

int uranus()
{
    line(80,395,130,395);
    rectangle(130,355,400,480);
    outtextxy(135,360,"Name: uranus");
    outtextxy(135,385,"Orbital period: 84 years");
    outtextxy(135,410,"Mass: 8.681 × 10^25 kg");
    outtextxy(135,435,"Radius: 25,362 km");
    outtextxy(135,460,"Distance from Sun: 2.965 billion km");
    setcolor(3);
    setfillstyle(SOLID_FILL,3);
    circle(340,410,25);
    floodfill(341,411,3);
    delay(4000);
}

int neptune()
{
    line(80,445,130,445);
    rectangle(130,405,400,530);
    outtextxy(135,410,"Name: neptune");
    outtextxy(135,435,"Orbital period: 165 years");
    outtextxy(135,460,"Mass: 1.024 × 10^26 kg");
    outtextxy(135,485,"Radius: 24,622 km");
    outtextxy(135,510,"Distance from Sun: 4.4772 billion km");
    setcolor(9);
    setfillstyle(SOLID_FILL,9);
    circle(340,460,25);
    floodfill(341,461,9);
    delay(4000);
}


int main()
{
    int sun_r,a,b,x,y,mer_r, ven_r, ear_r, mar_r, jup_r, sat_r, ura_r, nep_r,t=0;
    int gd=DETECT, gm;
    initgraph(&gd, &gm,"C:\\TC\\bgi");
    initwindow(1000,600,"solar system");
    POINT cursor;

    do
    {
        cleardevice();

        GetCursorPos(&cursor);
        x=cursor.x;
        y=cursor.y;

                //menu_sun
                setcolor(WHITE);
                setfillstyle(SOLID_FILL,7);
                rectangle(5,30,80,60);
                setcolor(8);
                outtextxy(30,36,"sun");

                if(x>5 && x<80 && y>50 && y<80 )       //button
                {
                    if(GetAsyncKeyState(VK_LBUTTON))
                    sun();
                }

                //menu_mercury
                setcolor(WHITE);
                setfillstyle(SOLID_FILL,7);
                rectangle(5,80,80,110);
                setcolor(8);
                outtextxy(16,86,"mercury");

                if(x>5 && x<80 && y>100 && y<130 )       //button
                {
                    if(GetAsyncKeyState(VK_LBUTTON))
                    mercury();
                }

                //menu_venus
                setcolor(WHITE);
                setfillstyle(SOLID_FILL,7);
                rectangle(5,130,80,160);
                setcolor(8);
                outtextxy(22,136,"venus");

                if(x>5 && x<80 && y>150 && y<180 )       //button
                {
                    if(GetAsyncKeyState(VK_LBUTTON))
                    venus();
                }

                //menu_earth
                setcolor(WHITE);
                setfillstyle(SOLID_FILL,7);
                rectangle(5,180,80,210);
                setcolor(8);
                outtextxy(24,186,"earth");

                if(x>5 && x<80 && y>200 && y<230 )       //button
                {
                    if(GetAsyncKeyState(VK_LBUTTON))
                    earth();
                }

                //menu_mars
                setcolor(WHITE);
                setfillstyle(SOLID_FILL,7);
                rectangle(5,230,80,260);
                setcolor(8);
                outtextxy(24,236,"mars");

                if(x>5 && x<80 && y>250 && y<280 )       //button
                {
                    if(GetAsyncKeyState(VK_LBUTTON))
                    mars();
                }

                //menu_jupiter
                setcolor(WHITE);
                setfillstyle(SOLID_FILL,7);
                rectangle(5,280,80,310);
                setcolor(8);
                outtextxy(21,286,"jupiter");

                if(x>5 && x<80 && y>300 && y<330 )       //button
                {
                    if(GetAsyncKeyState(VK_LBUTTON))
                    jupiter();
                }

                //menu_saturn
                setcolor(WHITE);
                setfillstyle(SOLID_FILL,7);
                rectangle(5,330,80,360);
                setcolor(8);
                outtextxy(19,335,"saturn");

                if(x>5 && x<80 && y>350 && y<380 )       //button
                {
                    if(GetAsyncKeyState(VK_LBUTTON))
                    saturn();
                }


                //menu_uranus
                setcolor(WHITE);
                setfillstyle(SOLID_FILL,7);
                rectangle(5,380,80,410);
                setcolor(8);
                outtextxy(18,385,"uranus");

                if(x>5 && x<80 && y>400 && y<430 )       //button
                {
                    if(GetAsyncKeyState(VK_LBUTTON))
                    uranus();
                }

                //menu_neptune
                setcolor(WHITE);
                setfillstyle(SOLID_FILL,7);
                rectangle(5,430,80,460);
                setcolor(8);
                outtextxy(15,435,"neptune");

                if( x>5 && x<80 && y>450 && y<480 )       //button
                {
                    if(GetAsyncKeyState(VK_LBUTTON))
                    neptune();
                }


//solar system

        //For Sun
        sun_r=30;
        setcolor(YELLOW);
        setfillstyle(DOTTED_LINE,YELLOW);
        circle(600,300,sun_r);
        floodfill(600,300,YELLOW);
        setcolor(1);
        outtextxy(590,290,"sun");

        //orbit for mercury
        setcolor(WHITE);
        ellipse(600,300,0,360,50,20);

        //for mercury
        mer_r=5;
        setcolor(6);
        a=600+50*cos(360-t*0.92047);
        b=300+20*sin(360-t*0.92047);
        setfillstyle(SOLID_FILL,6);
        circle(a,b,mer_r);
        floodfill(a,b,6);
        setcolor(9);
        outtextxy(a+6,b,"Mercury");

        //orbit for venus
        setcolor(WHITE);
        ellipse(600,300,0,360,80,30);

        //for venus
        ven_r=6;
        setcolor(5);
        a=600+80*cos(360-t*0.750047);
        b=300+30*sin(360-t*0.750047);
        setfillstyle(SOLID_FILL,5);
        circle(a,b,ven_r);
        floodfill(a,b,5);
        setcolor(9);
        outtextxy(a+7,b,"Venus");

        //orbit for earth
        setcolor(WHITE);
        ellipse(600,300,0,360,110,40);

        //for earth
        ear_r=11;
        setcolor(10);
        a=600+110*cos(360-t*0.6056);
        b=300+40*sin(360-t*0.6056);
        setfillstyle(SOLID_FILL,10);
        circle(a,b,ear_r);
        floodfill(a,b,10);
        setcolor(9);
        outtextxy(a+12,b,"Earth");

        //orbit for mars
        setcolor(WHITE);
        ellipse(600,300,0,360,140,50);

        //for mars
        mar_r=8;
        setcolor(4);
        setfillstyle(SOLID_FILL,4);
        a=600+140*cos(360-t*0.4057);
        b=300+50*sin(360-t*0.4057);
        circle(a,b,mar_r);
        floodfill(a,b,4);
        setcolor(9);
        outtextxy(a+9,b,"Mars");

        //orbit for jupiter
        setcolor(WHITE);
        ellipse(600,300,0,360,180,70);

        //for jupiter
        jup_r=15;
        setcolor(8);
        setfillstyle(SOLID_FILL,8);
        a=600+180*cos(360-t*0.25047);
        b=300+70*sin(360-t*0.25047);
        circle(a,b,jup_r);
        floodfill(a,b,8);
        setcolor(9);
        outtextxy(a+16,b,"Jupiter");

        //orbit for saturn
        setcolor(WHITE);
        ellipse(600,300,0,360,200,90);

        //for saturn
        sat_r=14;
        setcolor(5);
        setfillstyle(SOLID_FILL,5);
        a=600+200*cos(360-t*0.12047);
        b=300+90*sin(360-t*0.12047);
        circle(a,b,sat_r);
        floodfill(a,b,5);
        setcolor(9);
        outtextxy(a+15,b,"Saturn");

        //orbit for uranus
        setcolor(WHITE);
        ellipse(600,300,0,360,220,110);

        //for uranus
        ura_r=13;
        setcolor(3);
        setfillstyle(SOLID_FILL,3);
        a=600+220*cos(360-t*0.0409);
        b=300+110*sin(360-t*0.0409);
        circle(a,b,ura_r);
        floodfill(a,b,3);
        setcolor(9);
        outtextxy(a+14,b,"Uranus");

        //orbit for neptune
        setcolor(WHITE);
        ellipse(600,300,0,360,240,120);

        //for neptune
        nep_r=12;
        setcolor(9);
        setfillstyle(SOLID_FILL,9);
        a=600+240*cos(360-t*0.01145);
        b=300+120*sin(360-t*0.01145);
        circle(a,b,nep_r);
        floodfill(a,b,9);
        setcolor(9);
        outtextxy(a+13,b,"Neptune");

        //others
        line(0,540,1000,540);
        line(0,541,1000,541);
        setcolor(WHITE);
        settextstyle(3,HORIZ_DIR,1);
        outtextxy(410,560,"Solar System By Bygid Hasan");

        delay(200);
        t++;

    }while(!kbhit());

    getch();
    closegraph();
    return(0);
}

