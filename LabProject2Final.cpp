#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
float p=-185;
float s=-185;
float u=-185;
float m=-185;
float n=-185;
float o=-185;
float x=-200;
float y=-200;

void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy) 
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(int i=0; i<100; i++)
    {
        float angle = 4.0f * 3.1416f * i/100;
        float x = cx + rx * cosf(angle);
        float y = cy + ry * sinf(angle);

        glVertex2f(x,y);
    }
    glEnd();
}

void city()
{
    glClear (GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);

    //top green color part on the building backgound
    glColor3f (0.204,0.51,0.204);
    glVertex3f(-185.0f, 0.0f, 0.0f);
    glVertex3f(-185.0f, 200.0f, 0.0f);
    glVertex3f(900.0f, 200.0f, 0.0f);
    glVertex3f(900.0f, 0.0f, 0.0f);

    //Sky part
    glColor3f (0.5f, 0.8f, 1.0f);
    glVertex3f(-185.0f, 200.0f, 0.0f);
    glVertex3f(-185.0f, 600.0f, 0.0f);
    glVertex3f(900.0f, 600.0f, 0.0f);
    glVertex3f(900.0f, 200.0f, 0.0f);
    glEnd();

    //clouds

    glColor3f(1.0, 1.0, 0.0);
    circle(50.0,50.0,550.0, 450.0);
    /*glBegin(GL_LINES);
    glColor3f(0.0 ,0.0,0.0);
    glVertex3f( 0.562f, 0.08f ,0.0f );
    glVertex3f( 0.10f, 0.12f ,0.0f );*/

    //1st sky cloud motion
        if(m<=2000.0)
        m=m+.035;
    else
        m=-185;

    //3rd sky  cloud motion
    if(n<=2000.0)
        n=n+.04;
    else
        n=-185;

    //2nd sky cloud motion
    if(o<=2000.0)
        o=o+.055;
    else
        o=-185;
    //sky cloud 1
    glColor3f(1.0, 1.0, 1.0);
    circle(30.0,30.0,m-40, 380);
    circle(30,30,m-55, 390);
    circle(30,30,m-70,395);
    circle(30,30,m-20, 390);
    circle(30,30,m-50, 410);

    //sky cloud 2
    circle(30,30,o-440, 450);
    circle(30,30,o-455, 460);
    circle(30,30,o-470, 465);
    circle(30,30,o-420, 460);
    circle(30,30,o-450, 480);

    //sky cloud 3
    circle(30,30,n-740, 410);
    circle(30,30,n-755,420);
    circle(30,30,n-770, 425);
    circle(30,30,n-720, 420);
    circle(30,30,n-750, 454);

    //sky cloud 4
    circle(30,30,n-940, 410);
    circle(30,30,n-950,420);
    circle(30,30,n-970, 425);
    circle(30,30,n-920, 420);
    circle(30,30,n-950, 454);

    //sky cloud 5
    circle(30,30,o-740, 450);
    circle(30,30,o-755, 460);
    circle(30,30,o-770, 465);
    circle(30,30,o-720, 460);
    circle(30,30,o-750, 480);

    //sky cloud 6
    circle(30,30,n-440, 450);
    circle(30,30,n-455, 460);
    circle(30,30,n-470, 465);
    circle(30,30,n-420, 460);
    circle(30,30,n-450, 480);


    //first building
    glBegin(GL_QUADS);
    glColor3f (0.196078, 0.803922, 0.196078);
    glVertex3f(050.0f, 050.0f, 0.0f);
    glVertex3f(150.0f, 050.0f, 0.0f);
    glVertex3f(150.0f, 250.0f, 0.0f);
    glVertex3f(050.0f, 250.0f, 0.0f);

    //first building side
    glColor3f (0.196078, 0.803922, 0.196078);
    glVertex3f(050.0f, 050.0f, 0.0f);
    glVertex3f(050.0f, 250.0f, 0.0f);
    glVertex3f(040.0f, 230.0f, 0.0f);
    glVertex3f(040.0f, 060.0f, 0.0f);

    //first building windows
    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(070.0f, 080.0f, 0.0f);
    glVertex3f(130.0f, 080.0f, 0.0f);
    glVertex3f(130.0f, 120.0f, 0.0f);
    glVertex3f(070.0f, 120.0f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(070.0f, 140.0f, 0.0f);
    glVertex3f(130.0f, 140.0f, 0.0f);
    glVertex3f(130.0f, 180.0f, 0.0f);
    glVertex3f(070.0f, 180.0f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(070.0f, 200.0f, 0.0f);
    glVertex3f(130.0f, 200.0f, 0.0f);
    glVertex3f(130.0f, 240.0f, 0.0f);
    glVertex3f(070.0f, 240.0f, 0.0f);

    //2nd building
    glColor3f (0.5, 0.0, 0.0);
    glVertex3f(150.0f, 050.0f, 0.0f);
    glVertex3f(150.0f, 300.0f, 0.0f);
    glVertex3f(250.0f, 300.0f, 0.0f);
    glVertex3f(250.0f, 050.0f, 0.0f);

    // 2nd building windows by floors
    //2nd building 1st floor
    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(160.0f, 070.0f, 0.0f);
    glVertex3f(190.0f, 070.0f, 0.0f);
    glVertex3f(190.0f, 090.0f, 0.0f);
    glVertex3f(160.0f, 090.0f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(210.0f, 070.0f, 0.0f);
    glVertex3f(240.0f, 070.0f, 0.0f);
    glVertex3f(240.0f, 090.0f, 0.0f);
    glVertex3f(210.0f, 090.0f, 0.0f);

    //2nd building 2nd floor.
    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(160.0f, 120.0f, 0.0f);
    glVertex3f(190.0f, 120.0f, 0.0f);
    glVertex3f(190.0f, 140.0f, 0.0f);
    glVertex3f(160.0f, 140.0f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(210.0f, 120.0f, 0.0f);
    glVertex3f(240.0f, 120.0f, 0.0f);
    glVertex3f(240.0f, 140.0f, 0.0f);
    glVertex3f(210.0f, 140.0f, 0.0f);

    //2nd building 3rd floor.
    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(160.0f, 170.0f, 0.0f);
    glVertex3f(190.0f, 170.0f, 0.0f);
    glVertex3f(190.0f, 190.0f, 0.0f);
    glVertex3f(160.0f, 190.0f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(210.0f, 170.0f, 0.0f);
    glVertex3f(240.0f, 170.0f, 0.0f);
    glVertex3f(240.0f, 190.0f, 0.0f);
    glVertex3f(210.0f, 190.0f, 0.0f);

    //2nd building 4th floor
    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(160.0f, 220.0f, 0.0f);
    glVertex3f(190.0f, 220.0f, 0.0f);
    glVertex3f(190.0f, 240.0f, 0.0f);
    glVertex3f(160.0f, 240.0f, 0.0f);

    glVertex3f(210.0f, 220.0f, 0.0f);
    glVertex3f(240.0f, 220.0f, 0.0f);
    glVertex3f(240.0f, 240.0f, 0.0f);
    glVertex3f(210.0f, 240.0f, 0.0f);
    
    //2nd building 5th floor
    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(160.0f, 270.0f, 0.0f);
    glVertex3f(190.0f, 270.0f, 0.0f);
    glVertex3f(190.0f, 290.0f, 0.0f);
    glVertex3f(160.0f, 290.0f, 0.0f);

    glVertex3f(210.0f, 270.0f, 0.0f);
    glVertex3f(240.0f, 270.0f, 0.0f);
    glVertex3f(240.0f, 290.0f, 0.0f);
    glVertex3f(210.0f, 290.0f, 0.0f);

    //3rd building
    glColor3f (0.4, 0.4, 0.4);
    glVertex3f(250.0f, 050.0f, 0.0f);
    glVertex3f(320.0f, 050.0f, 0.0f);
    glVertex3f(320.0f, 335.0f, 0.0f);
    glVertex3f(250.0f, 335.0f, 0.0f);

    //3rd building windows
    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(260.0f, 060.0f, 0.0f);
    glVertex3f(290.0f, 060.0f, 0.0f);
    glVertex3f(290.0f, 100.0f, 0.0f);
    glVertex3f(260.0f, 100.0f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(260.0f, 130.0f, 0.0f);
    glVertex3f(290.0f, 130.0f, 0.0f);
    glVertex3f(290.0f, 170.0f, 0.0f);
    glVertex3f(260.0f, 170.0f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(260.0f, 200.0f, 0.0f);
    glVertex3f(290.0f, 200.0f, 0.0f);
    glVertex3f(290.0f, 240.0f, 0.0f);
    glVertex3f(260.0f, 240.0f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(260.0f, 270.0f, 0.0f);
    glVertex3f(290.0f, 270.0f, 0.0f);
    glVertex3f(290.0f, 310.0f, 0.0f);
    glVertex3f(260.0f, 310.0f, 0.0f);

    // last border black on building footer
    glColor3f (0.0, 0.0, 0.0);
    glVertex3f(040.0f, 050.0f, 0.0f);
    glVertex3f(040.0f, 060.0f, 0.0f);
    glVertex3f(050.0f, 050.0f, 0.0f);
    glVertex3f(050.0f, 040.0f, 0.0f);

    glColor3f (0.0, 0.0, 0.0);
    glVertex3f(050.0f, 040.0f, 0.0f);
    glVertex3f(050.0f, 050.0f, 0.0f);
    glVertex3f(450.0f, 050.0f, 0.0f);
    glVertex3f(450.0f, 040.0f, 0.0f);
    
    //4th building
    glColor3f (0.5, 0.5, 0.0);
    glVertex3f(350.0f, 050.0f, 0.0f);
    glVertex3f(350.0f, 260.0f, 0.0f);
    glVertex3f(450.0f, 260.0f, 0.0f);
    glVertex3f(450.0f, 050.0f, 0.0f);

    glVertex3f(320.0f, 230.0f, 0.0f);
    glVertex3f(350.0f, 260.0f, 0.0f);
    glVertex3f(350.0f, 50.0f, 0.0f);
    glVertex3f(320.0f, 50.0f, 0.0f);


    // 4th building windows by floors
    //4th building 1st floor
    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(360.0f, 070.0f, 0.0f);
    glVertex3f(390.0f, 070.0f, 0.0f);
    glVertex3f(390.0f, 090.0f, 0.0f);
    glVertex3f(360.0f, 090.0f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(410.0f, 070.0f, 0.0f);
    glVertex3f(440.0f, 070.0f, 0.0f);
    glVertex3f(440.0f, 090.0f, 0.0f);
    glVertex3f(410.0f, 090.0f, 0.0f);

    //4th building 2nd floor.
    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(360.0f, 120.0f, 0.0f);
    glVertex3f(390.0f, 120.0f, 0.0f);
    glVertex3f(390.0f, 140.0f, 0.0f);
    glVertex3f(360.0f, 140.0f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(410.0f, 120.0f, 0.0f);
    glVertex3f(440.0f, 120.0f, 0.0f);
    glVertex3f(440.0f, 140.0f, 0.0f);
    glVertex3f(410.0f, 140.0f, 0.0f);

    //4th building 3rd floor.
    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(360.0f, 170.0f, 0.0f);
    glVertex3f(390.0f, 170.0f, 0.0f);
    glVertex3f(390.0f, 190.0f, 0.0f);
    glVertex3f(360.0f, 190.0f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(410.0f, 170.0f, 0.0f);
    glVertex3f(440.0f, 170.0f, 0.0f);
    glVertex3f(440.0f, 190.0f, 0.0f);
    glVertex3f(410.0f, 190.0f, 0.0f);

    //4th building 4th floor
    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(360.0f, 220.0f, 0.0f);
    glVertex3f(390.0f, 220.0f, 0.0f);
    glVertex3f(390.0f, 240.0f, 0.0f);
    glVertex3f(360.0f, 240.0f, 0.0f);

    glVertex3f(410.0f, 220.0f, 0.0f);
    glVertex3f(440.0f, 220.0f, 0.0f);
    glVertex3f(440.0f, 240.0f, 0.0f);
    glVertex3f(410.0f, 240.0f, 0.0f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f (0.5, 0.0, 0.0);
    glVertex3f(150.0f, 300.0f, 0.0f);
    glVertex3f(060.0f, 250.0f, 0.0f);
    glVertex3f(150.0f, 250.0f, 0.0f);

    glColor3f (0.4, 0.4, 0.4);
    glVertex3f(250.0f, 300.0f, 0.0f);
    glVertex3f(250.0f, 335.0f, 0.0f);
    glVertex3f(200.0f, 300.f, 0.0f);
    glEnd();

    glBegin(GL_LINES);
    
    // 1st building 1st floor
    glColor3f(0.0 ,0.0,0.0);
    glVertex3f( 50.0f, 130.0f ,0.0f );
    glVertex3f( 150.0f, 130.0f ,0.0f );
    // 1st building 2nd floor
    glColor3f(0.0 ,0.0,0.0);
    glVertex3f( 50.0f, 190.0f ,0.0f );
    glVertex3f( 150.0f, 190.0f ,0.0f );
    //1st building top
    glColor3f(0.0 ,0.0,0.0);
    glVertex3f( 50.0f, 250.0f ,0.0f );
    glVertex3f( 150.0f, 250.0f ,0.0f );

    //1st building win 1
    glColor3f(0.0 ,0.0,0.0);
    glVertex3f( 100.0f, 080.0f ,0.0f );
    glVertex3f( 100.0f, 120.0f ,0.0f );
    
    glVertex3f( 100.0f, 140.0f ,0.0f );
    glVertex3f( 100.0f, 180.0f ,0.0f );
    
    glVertex3f( 100.0f, 200.0f ,0.0f );
    glVertex3f( 100.0f, 240.0f ,0.0f );

    //sideline 1 building
    glColor3f(0.0 ,0.0,0.0);


    glVertex3f( 40.0f, 50.0f ,0.0f );
    glVertex3f( 40.0f, 234.0f ,0.0f );

    glVertex3f( 40.0f, 234.0f ,0.0f );
    glVertex3f( 50.0f, 250.0f ,0.0f );


    glVertex3f( 50.0f, 50.0f ,0.0f );
    glVertex3f( 50.0f, 250.0f ,0.0f );
    
    glVertex3f( 250.0f, 50.0f ,0.0f );
    glVertex3f( 250.0f, 335.0f ,0.0f );

    //sideline 2 building
    glColor3f(0.0 ,0.0,0.0);
    glVertex3f( 150.0f, 50.0f ,0.0f );
    glVertex3f( 150.0f, 300.0f ,0.0f );
    // 2nd building 1st floor
    glColor3f(0.0 ,0.0,0.0);
    glVertex3f( 150.0f, 100.0f ,0.0f );
    glVertex3f( 250.0f, 100.0f ,0.0f );
    // 2nd building 2nd floor
    glColor3f(0.0 ,0.0,0.0);
    glVertex3f( 150.0f, 150.0f ,0.0f );
    glVertex3f( 250.0f, 150.0f ,0.0f );
    // 2nd floor 3rd floor
    glColor3f(0.0 ,0.0,0.0);
    glVertex3f( 150.0f, 200.0f ,0.0f );
    glVertex3f( 250.0f, 200.0f ,0.0f );
    // 2nd floor 4th floor
    glColor3f(0.0 ,0.0,0.0);
    glVertex3f( 150.0f, 250.0f ,0.0f );
    glVertex3f( 250.0f, 250.0f ,0.0f );
    // 2nd floor 4th floor top
    glColor3f(0.0 ,0.0,0.0);
    glVertex3f( 150.0f, 300.0f ,0.0f );
    glVertex3f( 250.0f, 300.0f ,0.0f );

    //sideline 3rd building 
    glColor3f(0.0 ,0.0,0.0);
    
    glVertex3f( 320.0f, 333.0f ,0.0f );
    glVertex3f( 320.0f, 050.0f ,0.0f );

    glVertex3f( 250.0f, 333.0f ,0.0f );
    glVertex3f( 320.0f, 333.0f ,0.0f );

    glVertex3f( 250.0f, 115.0f ,0.0f );
    glVertex3f( 320.0f, 115.0f ,0.0f );

    glVertex3f( 250.0f, 185.0f ,0.0f );
    glVertex3f( 320.0f, 185.0f ,0.0f );

    glVertex3f( 250.0f, 255.0f ,0.0f );
    glVertex3f( 320.0f, 255.0f ,0.0f );

    //sideline 4th building 
    glVertex3f( 350.0f, 050.0f, 0.0f );
    glVertex3f( 350.0f, 260.0f, 0.0f );

    glVertex3f( 450.0f, 260.0f, 0.0f );
    glVertex3f( 450.0f, 050.0f, 0.0f );

    glVertex3f( 350.0f, 260.0f, 0.0f );
    glVertex3f( 450.0f, 260.0f, 0.0f );

    glVertex3f( 320.0f, 230.0f, 0.0f );
    glVertex3f( 350.0f, 260.0f, 0.0f );

    glVertex3f( 350.0f, 50.0f, 0.0f );
    glVertex3f( 320.0f, 50.0f, 0.0f );

    glVertex3f( 320.0f, 230.0f, 0.0f );
    glVertex3f( 320.0f, 50.0f, 0.0f );

    glEnd();


    glBegin(GL_QUADS);
    //black font Road here
    glColor3f (0.4, 0.4, 0.4);
    glVertex3f(-185.0f, -050.0f, 0.0f);
    glVertex3f(-185.0f, 030.0f, 0.0f);
    glVertex3f(900.0f, 030.0f, 0.0f);
    glVertex3f(900.0f, -050.0f, 0.0f);

    // road devider0
    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(-150.0f, -010.0f, 0.0f);
    glVertex3f(-150.0f, 0.0f, 0.0f);
    glVertex3f(-010.0f, 0.0f, 0.0f);
    glVertex3f(-010.0f, -010.0f, 0.0f);

    // road devider1
    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(-060.0f, -010.0f, 0.0f);
    glVertex3f(-060.0f, 0.0f, 0.0f);
    glVertex3f(-020.0f, 0.0f, 0.0f);
    glVertex3f(-020.0f, -010.0f, 0.0f);
    
    // road devider2
    glVertex3f(030.f, 0.0f, 0.0f);
    glVertex3f(030.0f, -010.0f, 0.0f);
    glVertex3f(080.0f, -010.0f, 0.0f);
    glVertex3f(080.0f, 0.0f, 0.0f);

    // road devider3
    glVertex3f(130.0f, 0.0f, 0.0f);
    glVertex3f(130.0f, -010.0f, 0.0f);
    glVertex3f(180.0f, -010.0f, 0.0f);
    glVertex3f(180.0f, 0.0f, 0.0f);

    // road devider3
    glVertex3f(230.0f, 0.0f, 0.0f);
    glVertex3f(230.0f, -010.0f, 0.0f);
    glVertex3f(280.0f, -010.0f, 0.0f);
    glVertex3f(280.0f, 0.0f, 0.0f);

    // road devider4
    glVertex3f(330.0f, 0.0f, 0.0f);
    glVertex3f(330.0f, -010.0f, 0.0f);
    glVertex3f(380.0f, -010.0f, 0.0f);
    glVertex3f(380.0f, 0.0f, 0.0f);
    
    // road devider5
    glVertex3f(430.0f, 0.0f, 0.0f);
    glVertex3f(430.0f, -010.0f, 0.0f);
    glVertex3f(480.0f, -010.0f, 0.0f);
    glVertex3f(480.0f, 0.0f, 0.0f);

    // road devider3
    glVertex3f(530.0f, 0.0f, 0.0f);
    glVertex3f(530.0f, -010.0f, 0.0f);
    glVertex3f(580.0f, -010.0f, 0.0f);
    glVertex3f(580.0f, 0.0f, 0.0f);

    // road devider3
    glVertex3f(630.0f, 0.0f, 0.0f);
    glVertex3f(630.0f, -010.0f, 0.0f);
    glVertex3f(680.0f, -010.0f, 0.0f);
    glVertex3f(680.0f, 0.0f, 0.0f);

    // road devider3
    glVertex3f(730.0f, 0.0f, 0.0f);
    glVertex3f(730.0f, -010.0f, 0.0f);
    glVertex3f(780.0f, -010.0f, 0.0f);
    glVertex3f(780.0f, 0.0f, 0.0f);

    // road devider3
    glVertex3f(830.0f, 0.0f, 0.0f);
    glVertex3f(830.0f, -010.0f, 0.0f);
    glVertex3f(880.0f, -010.0f, 0.0f);
    glVertex3f(880.0f, 0.00f, 0.0f);
    glEnd();

    glBegin(GL_QUADS);

    // bus stand
    glColor3f (0.3, 0.3, 0.3);
    glVertex3f(-140.0f, 160.0f, 0.0f);
    glVertex3f(030.0f, 160.0f, 0.0f);
    glVertex3f(0.0f, 200.0f, 0.0f);
    glVertex3f(-120.0f, 200.0f, 0.0f);

    //bus stand upper corner
    glColor3f (0, 0, 0);
    glVertex3f(-140.0f, 150.0f, 0.0f);
    glVertex3f(030.0f, 150.0f, 0.0f);
    glVertex3f(030.0f, 160.0f, 0.0f);
    glVertex3f(-140.0f, 160.0f, 0.0f);

    //bus stand lower corner
    glColor3f (0.3, 0.3, 0.3);
    glVertex3f(-120.0f, 120.0f, 0.0f);
    glVertex3f(010.0f, 120.0f, 0.0f);
    glVertex3f(010.0f, 050.0f, 0.0f);
    glVertex3f(-130.0f, 050.0f, 0.0f);

    glColor3f (0.0, 0.0, 0.0);
    glVertex3f(-130.0f, 055.0f, 0.0f);
    glVertex3f(010.0f, 055.0f, 0.0f);
    glVertex3f(010.0f, 050.0f, 0.0f);
    glVertex3f(-130.0f, 050.0f, 0.0f);

    // bus stand large pillar
    glColor3f (0, 0, 0);
    glVertex3f(0.0f, 050.0f, 0.0f);
    glVertex3f(0.0f, 150.0f, 0.0f);
    glVertex3f(-010.0f, 150.0f, 0.0f);
    glVertex3f(-010.0f, 050.0f, 0.0f);

    glVertex3f(-100.0f, 050.0f, 0.0f);
    glVertex3f(-100.0f, 0150.0f, 0.0f);
    glVertex3f(-110.0f, 0150.0,0.0f);
    glVertex3f(-110.0f, 050.0f, 0.0f);

    // bus stand small pillar
    glColor3f (0, 0, 0);
    glVertex3f(-020.0f, 100.0f, 0.0f);
    glVertex3f(-020.0f, 150.0f, 0.0f);
    glVertex3f(-030.0f, 150.0f, 0.0f);
    glVertex3f(-030.0f, 100.0f, 0.0f);
    
    glVertex3f(-080.0f, 100.0f, 0.0f);
    glVertex3f(-080.0f, 150.0f, 0.0f);
    glVertex3f(-090.0f, 150.0f, 0.0f);
    glVertex3f(-090.0f, 100.0f, 0.0f);
    glEnd();

    glBegin(GL_QUADS);

    //clubhouse frame beside house
    glColor3f (1.0, 0.0, 0.3);
    glVertex3f(550.0f, 050.0f, 0.0f);
    glVertex3f(550.0f, 200.0f, 0.0f);
    glVertex3f(800.0f, 200.0f, 0.0f);
    glVertex3f(800.0f, 050.0f, 0.0f);

    //clubshouse frame upper
    glColor3f (0.255,0.102,0.255);
    glVertex3f(550.0f, 200.0f, 0.0f);
    glVertex3f(600.0f, 220.0f, 0.0f);
    glVertex3f(840.0f, 220.0f, 0.0f);
    glVertex3f(800.0f, 200.0f, 0.0f);

    //clubhouse frame sider
    glColor3f (0.51,0.255,0.255);
    glVertex3f(800.0f, 050.0f, 0.0f);
    glVertex3f(800.0f, 200.0f, 0.0f);
    glVertex3f(840.0f, 220.0f, 0.0f);
    glVertex3f(840.0f, 070.0f, 0.0f);

     //windows clubhouse in row 11
    glColor3f (1.0,1.0,1.0);
    glVertex3f(560.0f, 100.0f, 0.0f);
    glVertex3f(580.0f, 100.0f, 0.0f);
    glVertex3f(580.0f, 150.0f, 0.0f);
    glVertex3f(560.0f, 150.0f, 0.0f);

    //windows clubhouse in row 1
    glColor3f (1.0,1.0,1.0);
    glVertex3f(600.0f, 100.0f, 0.0f);
    glVertex3f(620.0f, 100.0f, 0.0f);
    glVertex3f(620.0f, 120.0f, 0.0f);
    glVertex3f(600.0f, 120.0f, 0.0f);

    glVertex3f(600.0f, 130.0f, 0.0f);
    glVertex3f(620.0f, 130.0f, 0.0f);
    glVertex3f(620.0f, 150.0f, 0.0f);
    glVertex3f(600.0f, 150.0f, 0.0f);

    //windows clubhouse in row 2
    glColor3f (1.0,1.0,1.0);
    glVertex3f(630.0f, 100.0f, 0.0f);
    glVertex3f(650.0f, 100.0f, 0.0f);
    glVertex3f(650.0f, 120.0f, 0.0f);
    glVertex3f(630.0f, 120.0f, 0.0f);

    glVertex3f(630.0f, 130.f, 0.0f);
    glVertex3f(650.0f, 130.0f, 0.0f);
    glVertex3f(650.0f, 150.0f, 0.0f);
    glVertex3f(630.0f, 150.0f, 0.0f);

    //windows clubhouse in row 3
    glColor3f (1,1,1);
    glVertex3f(660.0f, 100.0f, 0.0f);
    glVertex3f(680.0f, 100.0f, 0.0f);
    glVertex3f(680.0f, 120.0f, 0.0f);
    glVertex3f(660.0f, 120.f, 0.0f);

    glVertex3f(660.0f, 130.0f, 0.0f);
    glVertex3f(680.0f, 130.0f, 0.0f);
    glVertex3f(680.0f, 150.0f, 0.0f);
    glVertex3f(660.0f, 150.0f, 0.0f);

    //windows clubhouse in row 4
    glColor3f (1,1,1);
    glVertex3f(690.0f, 100.0f, 0.0f);
    glVertex3f(710.0f, 100.0f, 0.0f);
    glVertex3f(710.0f, 120.0f, 0.0f);
    glVertex3f(690.0f, 120.0f, 0.0f);

    glVertex3f(690.0f, 130.0f, 0.0f);
    glVertex3f(710.0f, 130.0f, 0.0f);
    glVertex3f(710.0f, 150.0f, 0.0f);
    glVertex3f(690.0f, 150.0f, 0.0f);

    //windows clubhouse in row 5
    glColor3f (1,1,1);
    glVertex3f(720.0f, 100.0f, 0.0f);
    glVertex3f(740.0f, 100.0f, 0.0f);
    glVertex3f(740.0f, 120.0f, 0.0f);
    glVertex3f(720.0f, 120.0f, 0.0f);

    glVertex3f(720.0f, 130.0f, 0.0f);
    glVertex3f(740.0f, 130.0f, 0.0f);
    glVertex3f(740.0f, 150.0f, 0.0f);
    glVertex3f(720.0f, 150.0f, 0.0f);

    //windows clubhouse in row 51
    glColor3f (1,1,1);
    glVertex3f(760.0f, 100.0f, 0.0f);
    glVertex3f(780.0f, 100.0f, 0.0f);
    glVertex3f(780.0f, 150.0f, 0.0f);
    glVertex3f(760.0f, 150.0f, 0.0f);
    
    //windows clubhouse up
    glColor3f (1,1,1);
    
    glVertex3f(560.0f, 165.0f, 0.0f);
    glVertex3f(780.0f, 165.0f, 0.0f);
    glVertex3f(780.0f, 180.0f, 0.0f);
    glVertex3f(560.0f, 180.0f, 0.0f);

    //clubhouse door1
    glColor3f (1,1,1);
    glVertex3f(580.0f, 050.0f, 0.0f);
    glVertex3f(580.0f, 080.0f, 0.0f);
    glVertex3f(600.0f, 080.0f, 0.0f);
    glVertex3f(600.0f, 050.0f, 0.0f);

    //clubhouse door2
    glColor3f (1,1,1);
    glVertex3f(650.0f, 050.0f, 0.0f);
    glVertex3f(650.0f, 080.0f, 0.0f);
    glVertex3f(690.0f, 080.0f, 0.0f);
    glVertex3f(690.0f, 050.0f, 0.0f);

    //clubhouse door3
    glColor3f (1,1,1);
    glVertex3f(740.0f, 050.0f, 0.0f);
    glVertex3f(740.0f, 080.0f, 0.0f);
    glVertex3f(760.0f, 080.0f, 0.0f);
    glVertex3f(760.0f, 050.0f, 0.0f);
    
    
    //clubhouse last boarder
    glColor3f (0.0, 0.0, 0.0);
    glVertex3f(549.0f, 50.0f, 0.0f);
    glVertex3f(549.0f, 40.0f, 0.0f);
    glVertex3f(800.0f, 40.0f, 0.0f);
    glVertex3f(800.0f, 50.0f, 0.0f);

    glVertex3f(800.0f, 40.0f, 0.0f);
    glVertex3f(800.0f, 50.0f, 0.0f);
    glVertex3f(840.0f, 80.0f, 0.0f);
    glVertex3f(840.0f, 070.0f, 0.0f);
    glEnd();

    glBegin(GL_LINES);
    
    // clubhouse lines
    glColor3f (0.0, 0.0, 0.0);
    glVertex3f(550.0f, 200.0f, 0.0f);
    glVertex3f(800.0f, 200.0f, 0.0f);

    glVertex3f(800.0f, 200.0f, 0.0f);
    glVertex3f(840.0f, 220.0f, 0.0f);

    glVertex3f(550.0f, 200.0f, 0.0f);
    glVertex3f(600.0f, 220.0f, 0.0f);

    glVertex3f(600.0f, 220.0f, 0.0f);
    glVertex3f(840.0f, 220.0f, 0.0f);

    glVertex3f(800.0f, 050.0f, 0.0f);
    glVertex3f(800.0f, 200.0f, 0.0f);

    glVertex3f(840.0f, 070.0f, 0.0f);
    glVertex3f(840.0f, 220.0f, 0.0f);

    glVertex3f(800.0f, 050.0f, 0.0f);
    glVertex3f(840.0f, 070.0f, 0.0f);

    glVertex3f(550.0f, 050.0f, 0.0f);
    glVertex3f(800.0f, 050.0f, 0.0f);

    glVertex3f(550.0f, 050.0f, 0.0f);
    glVertex3f(550.0f, 200.0f, 0.0f);
    glEnd();

    /*car*/
    if(p<=2000.0)
        p=p+.2;
    else
        p=-185;
    glutPostRedisplay();

    /*car1*/
    glBegin(GL_QUADS); 
    //upper body
    glColor3f(1.0,0.0,0);
    glVertex3f(p+010,060,0);
    glVertex3f(p+010,020,0);
    glVertex3f(p+100,020,0);
    glVertex3f(p+100,060,0);
    glEnd();
    glBegin(GL_QUADS); 
    // lower body
    glColor3f(1.0,0.0,0);
    glVertex3f(p-050,-015,0);
    glVertex3f(p-050,025,0);
    glVertex3f(p+160,025,0);
    glVertex3f(p+160,-015,0);
    glEnd();

    //first car body in back side
    glBegin(GL_TRIANGLES);
    glVertex3f(p+010,020,0);
    glVertex3f(p+010,060,0);
    glVertex3f(p-010,020,0);

    glVertex3f(p+100,020,0);
    glVertex3f(p+100,060,0);
    glVertex3f(p+125,020,0);
    glEnd();

    glBegin(GL_QUADS);
    //window 1
    glColor3f(0.0,0.0,0);
    glVertex3f(p+010,030,0);
    glVertex3f(p+025,050,0);
    glVertex3f(p+050,050,0);
    glVertex3f(p+050,030,0);
    //windows 2
    glVertex3f(p+060,030,0);
    glVertex3f(p+060,050,0);
    glVertex3f(p+80,050,0);
    glVertex3f(p+95,030,0);
    glEnd();

    glColor3f(0.0,0.0,0);
    circle(20,20,p+0.0, -010); //tier 1
    circle(20,20,p+100, -010); //tier 2
    glColor3f(1.0,1.0,1);
    circle(5,5,p+0.0, -010);
    circle(5,5,p+100, -010);


    /*car2*/
    glBegin(GL_QUADS); 
    //upper body
    glColor3f(1.0f, 1.0f, 0.9f);
    glVertex3f(p-200,060,0);
    glVertex3f(p-200,020,0);
    glVertex3f(p-290,020,0);
    glVertex3f(p-290,060,0);
    glEnd();
    glBegin(GL_QUADS); 
    // lower body
    glVertex3f(p-340,-15,0);
    glVertex3f(p-340,025,0);
    glVertex3f(p-140,025,0);
    glVertex3f(p-140,-15,0);
    glEnd();

    //second car body in back side
    glBegin(GL_TRIANGLES);
    glVertex3f(p-200,020,0);
    glVertex3f(p-200,060,0);
    glVertex3f(p-180,020,0);

    glVertex3f(p-290,020,0);
    glVertex3f(p-290,060,0);
    glVertex3f(p-315,020,0);
    glEnd();

    glBegin(GL_QUADS);
    //window 1
    glColor3f(0.0,0.0,0);
    glVertex3f(p-200,030,0);
    glVertex3f(p-215,050,0);
    glVertex3f(p-240,050,0);
    glVertex3f(p-240,030,0);
    //windows 2
    glVertex3f(p-250,030,0);
    glVertex3f(p-250,050,0);
    glVertex3f(p-270,050,0);
    glVertex3f(p-285,030,0);
    glEnd();

    glColor3f(0.0,0.0,0);
    circle(20,20,p-190, -10); //tier 1
    circle(20,20,p-290, -10); //tier 2
    glColor3f(1.0,1.0,1.0);
    circle(5,5,p-190, -10); 
    circle(5,5,p-290, -10); 

    /*car3*/
    glBegin(GL_QUADS); 
    //upper body
    glColor3f(1.0f, 0.80f, 0.0f);
    glVertex3f(p-410,060,0);
    glVertex3f(p-410,020,0);
    glVertex3f(p-500,020,0);
    glVertex3f(p-500,060,0);
    glEnd();
    glBegin(GL_QUADS); 
    // lower body
    glVertex3f(p-550,-15,0);
    glVertex3f(p-550,025,0);
    glVertex3f(p-360,025,0);
    glVertex3f(p-360,-15,0);
    glEnd();

    //second car body in back side
    glBegin(GL_TRIANGLES);
    glVertex3f(p-410,020,0);
    glVertex3f(p-410,060,0);
    glVertex3f(p-390,020,0);

    glVertex3f(p-500,020,0);
    glVertex3f(p-500,060,0);
    glVertex3f(p-525,020,0);
    glEnd();

    glBegin(GL_QUADS);
    //window 1
    glColor3f(0.0,0.0,0);
    glVertex3f(p-410,030,0);
    glVertex3f(p-425,050,0);
    glVertex3f(p-450,050,0);
    glVertex3f(p-450,030,0);
    //windows 2
    glVertex3f(p-460,030,0);
    glVertex3f(p-460,050,0);
    glVertex3f(p-480,050,0);
    glVertex3f(p-495,030,0);
    glEnd();

    glColor3f(0.0,0.0,0);
    circle(20,20,p-400, -10); //tier 1
    circle(20,20,p-500, -10); //tier 2
    glColor3f(1.0,1.0,1.0);
    circle(5,5,p-400, -10); 
    circle(5,5,p-500, -10);

    /*bus*/
    glBegin(GL_QUADS); 
    //lower body
    glColor3f(0.0 ,0.6, 1.0);
    glVertex3f(p-650,-20,0);
    glVertex3f(p-650,50,0);
    glVertex3f(p-850,50,0);
    glVertex3f(p-850,-20,0);
    //upper body
    glVertex3f(p-850,80,0);
    glVertex3f(p-850,50,0);
    glVertex3f(p-650,50,0);
    glVertex3f(p-650,80,0);
    //windows 1
    glColor3f(1.0,1.0,1);
    glVertex3f(p-660,20,0);
    glVertex3f(p-660,70,0);
    glVertex3f(p-690,70,0);
    glVertex3f(p-690,20,0);
    //windows 2
    glColor3f(1.0,1.0,1);
    glVertex3f(p-700,20,0);
    glVertex3f(p-700,70,0);
    glVertex3f(p-730,70,0);
    glVertex3f(p-730,20,0);
    //windows 3
    glColor3f(1.0,1.0,1);
    glVertex3f(p-740,20,0);
    glVertex3f(p-740,70,0);
    glVertex3f(p-770,70,0);
    glVertex3f(p-770,20,0);
    //windows 4
    glColor3f(1.0,1.0,1);
    glVertex3f(p-780,20,0);
    glVertex3f(p-780,70,0);
    glVertex3f(p-810,70,0);
    glVertex3f(p-810,20,0);
    //windows 5
    glColor3f(1.0,1.0,1);
    glVertex3f(p-820,20,0);
    glVertex3f(p-820,70,0);
    glVertex3f(p-835,70,0);
    glVertex3f(p-835,20,0);

    glEnd();

    glColor3f(0.0,0.0,0);
    circle(25,25,p-700, -10); //tier 1
    circle(25,25,p-800, -10); //tier 2
    glColor3f(1.0,1.0,1.0);
    circle(7,7,p-700, -10);
    circle(7,7,p-800, -10); 

    glFlush();
}

void display(void)
{
    city();
}

void init ()
{
    glClearColor (1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(-200 ,900, -100, 600, 0.0, 10.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1000, 520);
    glutInitWindowPosition (70, 60);
    glutCreateWindow ("Final Project");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
