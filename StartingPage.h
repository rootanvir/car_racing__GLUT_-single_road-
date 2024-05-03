#include <bits/stdc++.h>
#include <GL/glut.h>
#include<bits/stdc++.h>

void startDisplay();
void menu1Sound();
void menu2Sound();
void carEngineStart();
void enterSound();
void updateObstacle(int value);



bool isGroupOpen=false;

GLfloat carPosStart = -1.0f;
GLfloat speedInStart = 0.1f;
GLfloat randomNum;
int serial=0;


GLfloat selectPos = 0.0f;
GLfloat selectPosChangeRate = 0.2f;
GLfloat Red = 0.0f;
void start()
{
    road();
    lake1(0.0,0.0);
    building(-0.96,0.8f);
    building(-0.90,0.4f);
    building(-0.95,0.0f);
    building(-0.96,3.83f);
    building(-0.90,3.43f);
    building(-0.95,3.03f);
    lake1(0.0,3.03);
    pineTree(-0.97f, 2.727);
    pineTree(-0.8f, 2.25);
    pineTree(-0.95f, 2.05);
    pineTree(-0.8f, -0.77f);
    pineTree(-0.95f, -0.97f);
    pineTree(-0.97f, -0.3f);
    building(0.96,0.8f);
    building(0.90,0.4f);
    building(0.95,0.0f);
    lake2(0.0, -1.255f);
    pineTree(0.97f, 2.727);
    pineTree(0.8f, 2.25);
    pineTree(0.95f, 2.05);
    pineTree(0.8f, -0.77f);
    pineTree(0.95f, -0.97f);
    pineTree(0.97f, -0.3f);

}
void updateMovingCarInStart(int value)
{
    carPosStart += speedInStart;

    if (carPosStart > 2)
    {
        carPosStart = -1.0;

        if (serial < 4)
        {
            serial++;
        }
        else
        {
            serial = 0;
        }
    }

    glutPostRedisplay();
    glutTimerFunc(50, updateMovingCarInStart, 0);
}
void startingAnimation()
{
    glPushMatrix();
    glTranslatef(0.0f, carPosStart, 0.0f);
    if(serial==0)
    {
        car1();
    }
    else if(serial==1)
    {
        car2();
    }
    else if(serial==2)
    {
        policeCarDummy();
    }
    else if(serial==3)
    {
        police_car(0.5,0.0);
    }
    else if(serial==4)
    {
        police_car(1.0,0.0);
    }
    glPopMatrix();
}
void title(double x,double y)
{
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.12f+x, 0.39f+y);
    glVertex2f(0.11f+x, 0.39f+y);
    glVertex2f(0.11f+x, 0.26f+y);
    glColor3f(0.6, 0.6, 0.6);
    glVertex2f(-0.12f+x, 0.26f+y);
    glEnd();
}
void background(double x,double y)
{
    glBegin(GL_POLYGON);
    glColor3f(1, 0.247, 0.247);
    glVertex2f(-0.2f+x, 0.5f+y);
    glColor3f(0.42, 0, 0);
    glVertex2f(0.2f+x, 0.5f+y);

    glVertex2f(0.2f+x, -0.5f+y);

    glVertex2f(-0.2f+x, -0.5f+y);

    glEnd();
}
void selector(double x,double y)
{
    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(-0.2f+x, 0.4f+y+selectPos);
    glColor3f(.0f,.0f,.0f);
    glVertex2f(0.2f+x, 0.4f+y+selectPos);

    glVertex2f(0.2f+x, 0.25f+y+selectPos);

    glVertex2f(-0.2f+x, 0.25f+y+selectPos);
    glEnd();
}

void specialKeysStart(int key, int x, int y)
{


    switch (key)
    {
    /*
    case GLUT_KEY_LEFT:
    if(car2PosX>-0.25  )
    {
        if( car1PosX == 0.25 && car2PosX== 0.0f)
        {
            break;
        }
        car2PosX -= car2Speed;
    }
    break;
    case GLUT_KEY_RIGHT:

    if(car2PosX< 0.25)
    {
        car2PosX += car2Speed;
    }
    break;
    */

/*
    case GLUT_KEY_UP:
        menu1Sound();
    selectPos += 0.2f; // Increase selectPos first
        if(selectPos>0.0f)
            selectPos=-0.6f;
        break;*/
    case GLUT_KEY_DOWN:
        menu2Sound();
        selectPos -= selectPosChangeRate;
        if(selectPos<-0.6f)
            selectPos=0.0f;

        break;
    default:
        break; // Handle other keys if needed
    }
    //cout<<selectPos<<endl;
    glutPostRedisplay();
}
void keyboard(unsigned char key, int x, int y)
{

    if (key == 13)
    {
        enterSound();
        if(selectPos==0.0f)
        {
            glutDisplayFunc(display);
            glutTimerFunc(100, update, 0);
            glutTimerFunc(100, update2, 0);
            glutTimerFunc(100, carUpdate, 0);
            glutTimerFunc(300, updatePolice, 0);
            glutTimerFunc(300, updateObstacle, 0);
            glutTimerFunc(300, updateFuel, 0);
            glutTimerFunc(300,updateDistance,0);
            glutTimerFunc(100, updateCarControl1, 0);
            glutTimerFunc(100, updateCarControl2, 0);

            glutTimerFunc(100,scoreBoardUpdate, 0);

            glutSpecialFunc(specialKeys);
            glutKeyboardFunc(handleKeypress);

        }
        if(selectPos==-0.2f)
        {
            cout<<"How to Play"<<endl;
            //cout<<printRandom()<<endl;
        }
        else if(selectPos == -0.4f)
        {
            if(!isGroupOpen)
            {

                glutDisplayFunc(displayGroupInfo);
                isGroupOpen=true;
            }
        }
        else if(selectPos == -0.6f)
        {
            cout<<"Exit"<<endl;
            exit(0);
        }
    }
    else if(key == 27)
    {

        if(isGroupOpen)
        {
            glutDisplayFunc(startDisplay);
            //glutTimerFunc(300,updateMovingCarInStart,0);
            isGroupOpen=false;
            menu1Sound();

        }
    }
}
void startingPage()
{

    start();
    startingAnimation();
    background(0.0,0.0);
    selector(0.0,0.0);
    title(0.0,0.0);
    char s1[]="Start";
    glColor3f(Red,0.0f,0.0f);
    renderBitmapString(-.03,.31,0,GLUT_BITMAP_TIMES_ROMAN_24,s1);

    title(0.0,-0.2);
    char s2[]="How to Play";
    glColor3f(Red,0.0f,0.0f);
    renderBitmapString(-.05,.0997,0,GLUT_BITMAP_TIMES_ROMAN_24,s2);

    title(0.0,-0.4);
    char s3[]="Group Info";
    glColor3f(Red,0.0f,0.0f);
    renderBitmapString(-.05,-.1,0,GLUT_BITMAP_TIMES_ROMAN_24,s3);

    title(0.0,-0.6);
    char s4[]="Exit";
    glColor3f(Red,0.0f,0.0f);
    renderBitmapString(-.02,-.28,0,GLUT_BITMAP_TIMES_ROMAN_24,s4);

}

