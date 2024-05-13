#include<cstdio>
#include <bits/stdc++.h>
#include <GL/gl.h>
#include <GL/glut.h>

using namespace std;
// keyboard.h
bool isCenterFree=true;
bool isFullScreen=false;
bool PLAY=true;
///////////////////
void displayGroupInfo();
void display();
void startDisplay();
void keyboard(unsigned char key, int x, int y);
void specialKeysStart(int key, int x, int y);
void updateMovingCarInStart(int value);
void slidingSound();

//////////////////
GLfloat car1PosX = 0.0f;
GLfloat car1PosY = 0.0f;
GLfloat car1Speed= 0.25f;



GLfloat car2PosX = 0.0f;
GLfloat car2PosY = 0.0f;
GLfloat car2Speed = 0.25f;

///////////////////////


bool keyState[256] = { false };

void updateCarControl1(int value)
{
    if (car1PosX > 0.25)
        car1PosX = 0.25;
    else if (car1PosX < -0.25)
        car1PosX = -0.25f;

    if (car1PosY > 1.0)
        car1PosY = -1.0f;
    else if (car1PosY < -1.0)
        car1PosY = 1.0f;

    glutPostRedisplay();
    glutTimerFunc(100, updateCarControl1, 0);
}



void updateCarControl2(int value)
{
    if (car2PosX > 0.25)
        car2PosX = 0.25f;
    else if (car2PosX < -0.25)
        car2PosX = -0.25f;

    if (car2PosY > 1.0)
        car2PosY = -1.0f;
    else if (car2PosY < -1.0)
        car2PosY = 1.0f;

    glutPostRedisplay();
    glutTimerFunc(100, updateCarControl2, 0);
}

void specialKeys(int key, int x, int y) {
    switch (key) {
    case GLUT_KEY_LEFT:

        if(car2PosX>-0.25  )
        {
            if( car1PosX == 0.25 && car2PosX== 0.0f)
            {
                break;
            }
            if(PLAY)
            {
                slidingSound();
            }

            car2PosX -= car2Speed;
        }
        break;
    case GLUT_KEY_RIGHT:

        if(car2PosX< 0.25)
        {
            car2PosX += car2Speed;
            if(PLAY)
            {
                slidingSound();
            }

        }
        break;

        /*
    case GLUT_KEY_UP:
        car2PosY += car2Speed;
        break;
    case GLUT_KEY_DOWN:
        car2PosY -= car2Speed;
        break;   */
    default:
        break; // Handle other keys if needed
    }
    glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'a':
        if(car1PosX > -0.25)
        {
            car1PosX -= car1Speed;
            if(PLAY)
            {
                slidingSound();
            }

        }

        break;
    case 'd':
        if(car1PosX<0.25 )
        {
            if( car2PosX==-0.25 && car1PosX == 0.0f)
            {
                break;
            }
            car1PosX += car1Speed;
            if(PLAY)
            {
                slidingSound();
            }

        }

        break;
        case 'F':
        if(!isFullScreen)
        {
            glutFullScreen();
            isFullScreen=true;
        }
        else
        {
            glutPositionWindow(100,100);
            glutReshapeWindow(1200, 900);
            isFullScreen=false;
        }
        break;

        case 'X':
            exit(0);
        break;
    /*case 'G':
        cout<<"G"<<endl;
        if(!isGroupOpen)
        {
          glutDisplayFunc(displayGroupInfo);
          isGroupOpen=true;
          //glutIdleFunc(NULL);
        }
        else
        {
            glutDisplayFunc(display);
            isGroupOpen=false;
            //glutIdleFunc(display);
        }

        break;*/
   /*case 'w':
        car1PosY += car1Speed;
        break;
    case 's':
        car1PosY -= car1Speed;
        break;  */
    default:
        break;
    }

    glutPostRedisplay();
}

void car1()
{
    glPushMatrix();
    glTranslatef(car1PosX, car1PosY, 0.0f);
    carShaking1();
    glPopMatrix();
}





void car2()
{
    glPushMatrix();
    glTranslatef(car2PosX, car2PosY, 0.0f);
    carShaking2();
    glPopMatrix();
}



