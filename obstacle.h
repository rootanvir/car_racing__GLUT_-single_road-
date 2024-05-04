#include <windows.h> // for MS Windows
#include <GL/glut.h>
#include <bits/stdc++.h>
#include<cstdio>

bool firstTime=true;
double choose;
GLfloat obstacleSpeed = 0.05f;


void updateObstacle(int value)
{


    if(firstTime)
    {
         obstaclePosX=printRandom(0.0f,0.25f,1.0f);

         firstTime=false;
    }

    if(obstaclePosY<-1.4f)
    {
        obstaclePosY=2.0f;
        obstaclePosX=printRandom(0.0f,0.25f,1.0f);

        choose=printRandom(1.0,1.0,3.0);
        //cout<<obstaclePosX<<endl;
    }

    obstaclePosY-=obstacleSpeed ;
    glutTimerFunc(100, updateObstacle,0);
    glutPostRedisplay();
}


void generateObstacle()
{

    if(choose==1.0f)
    {
        police_car(0.03f+obstaclePosX,obstaclePosY);
    }
    else if (choose ==2.0f)
    {
        truck(-0.5+obstaclePosX,obstaclePosY);
    }
    else if(choose == 3.0f)
    {
        normal_car(-0.5f+obstaclePosX,obstaclePosY);
    }


    //police_car(obstaclePosX,obstaclePosY);
}
