#include <windows.h> // for MS Windows
#include <GL/glut.h>
#include <bits/stdc++.h>
#include<cstdio>

bool firstTime=true;
GLfloat obstaclePosX = 0.5f;
GLfloat obstaclePosY = 2.0f;
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
        cout<<obstaclePosX<<endl;
    }

    obstaclePosY-=obstacleSpeed ;
    glutTimerFunc(100, updateObstacle,0);
    glutPostRedisplay();
}


void generateObstacle()
{
    police_car(obstaclePosX,obstaclePosY);
    police_car(obstaclePosX,obstaclePosY);
}
