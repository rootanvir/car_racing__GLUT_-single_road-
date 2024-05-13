#include <windows.h> // for MS Windows
#include <GL/glut.h>
#include <bits/stdc++.h>
#include<cstdio>

void roadBlock(double x, double y, double scale);
bool firstTime=true;
double choose;
double choose2p1;
double choose2p2;


GLfloat obstacleSpeed = 0.05f;
GLfloat obstaclePosX2;
GLfloat obstaclePosX3;

GLfloat obstaclePosY2=2.5f;
bool isMidFree=true;

GLfloat level1=1.0f;
GLfloat level2=5.0f;
GLfloat level3;///Not necessary




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

        choose2p1=printRandom(1.0,1.0,3.0);
        obstaclePosX2=printRandom(0.0f,0.25f,.25f);
        choose2p2=printRandom(3.0,1.0,5.0);
        obstaclePosX3=printRandom(0.75f,0.25f,1.0f);


    }
    if(obstaclePosY2<-1.2f)
    {
        obstaclePosY2=2.5f;

    }
    obstaclePosY-=obstacleSpeed ;
    obstaclePosY2-=0.085f ;
    glutTimerFunc(100, updateObstacle,0);
    glutPostRedisplay();
}


void generateObstacle()
{

    if(distanceOfCar<=level1)
    {
        if(choose==1.0f)
        {
            police_car(obstaclePosX,obstaclePosY);
        }
        else if (choose ==2.0f)
        {
            truck(obstaclePosX,obstaclePosY);
        }
        else if(choose == 3.0f)
        {
            normal_car(obstaclePosX,obstaclePosY);
        }
    }
    else if(distanceOfCar>level1&&distanceOfCar<level2)
    {

        if(choose2p1==1.0f)
        {
            police_car(obstaclePosX2,obstaclePosY);
        }
        else if (choose2p1 ==2.0f)
        {
            truck(obstaclePosX2,obstaclePosY);
        }
        else
        {

            normal_car(0.5f,obstaclePosY);
            isMidFree=true;
        }



        if(choose2p2 == 3.0f)
        {
            normal_car(obstaclePosX3,obstaclePosY);

        }
        else if(choose2p2== 4.0f)
        {
             police_car(obstaclePosX3,obstaclePosY);

        }
        else
        {
            if(!isMidFree)
            {
                normal_car(0.5f,obstaclePosY);
                isMidFree=true;
            }
            else
            {
                normal_car(0.75f,obstaclePosY);
            }


        }



    }
    else
    {
        if(choose2p1==1.0f)
        {
            police_car(obstaclePosX2,obstaclePosY);
        }
        else if (choose2p1 ==2.0f)
        {
            truck(obstaclePosX2,obstaclePosY);
        }
        else
        {
            truck(obstaclePosX2,obstaclePosY);
        }





        if(choose2p2 == 3.0f)
        {
            normal_car(0.0f+obstaclePosX3,obstaclePosY);
        }
        else if(choose2p2== 4.0f)
        {
             police_car(obstaclePosX3,obstaclePosY);
        }
        else
        {
            police_car(obstaclePosX3,obstaclePosY);
        }

        roadBlock(0.0,obstaclePosY2,0.7);


    }


}
