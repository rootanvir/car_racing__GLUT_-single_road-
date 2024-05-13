#include <windows.h> // for MS Windows
#include <GL/glut.h>
#include <bits/stdc++.h>
#include<cstdio>

void roadBlock(double x, double y, double scale);
bool firstTime=true;
double choose;
double choose2p1;
double choose2p2;
int wave1=0;
int wave2=0;
int wave3=0;

GLfloat obstacleSpeed = 0.05f;
GLfloat obstaclePosX2;
GLfloat obstaclePosX3;

GLfloat obstaclePosY2=2.5f;
GLfloat obstaclePosY3=2.5f;

GLfloat obstacleBlockY=2.5f;
GLfloat obstacleBlockX=0.0f;
bool isMidFree=true;

GLfloat level1=3.0f;
GLfloat level2=6.0f;
GLfloat level3;///Not necessary




void updateObstacle(int value)
{


    if(firstTime)
    {
        obstaclePosX=printRandom(0.0f,0.25f,1.0f);
        firstTime=false;
    }

    if(obstaclePosY<-0.35f)
    {
        obstaclePosY=2.0f;
        obstaclePosY2=2.0f;
        obstaclePosY3=2.0f;

        obstaclePosX=printRandom(0.0f,0.25f,1.0f);
        choose=printRandom(1.0,1.0,3.0);
        choose2p1=printRandom(1.0,1.0,3.0);
        obstaclePosX2=printRandom(0.0f,0.25f,.5f);
        choose2p2=printRandom(4.0,1.0,5.0);
        obstaclePosX3=printRandom(0.75f,0.25f,1.0f);

    }
    if(distanceOfCar>level2&& obstacleBlockY<-1.0f)
    {
        obstacleBlockY=2.5f;
    }

    if(distanceOfCar>level2)
    {
        obstacleBlockY-=0.09f;
    }

    obstaclePosY-=obstacleSpeed ;

    if(obstaclePosY2==obstaclePosY3)
    {
        obstaclePosY3-=obstacleSpeed;
        obstaclePosY2-=obstacleSpeed;

    }
    else
    {
        if(obstaclePosY2>obstaclePosY3)
        {
            obstaclePosY3-=obstacleSpeed;
        }
        else if(obstaclePosY2<obstaclePosY3)
        {
            obstaclePosY2-=obstacleSpeed;
        }

    }

    glutTimerFunc(100, updateObstacle,0);
    glutPostRedisplay();
}


void generateObstacle()
{


    if(distanceOfCar<=level1)
    {
        wave1+=1;
        if(choose==1.0f)
        {
            police_car(obstaclePosX,obstaclePosY);

        }
        else if (choose ==2.0f)
        {
            truck(obstaclePosX,(obstaclePosY-0.35f));

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
            police_car(obstaclePosX2,obstaclePosY2);

        }
        else if (choose2p1 ==2.0f)
        {
            truck(obstaclePosX2,obstaclePosY2-0.35f);

        }
        else if(choose2p1 ==3.0f)
        {
            normal_car(obstaclePosX2,obstaclePosY2);

        }



        if(choose2p2 == 4.0f)
        {
            normal_car(obstaclePosX3,obstaclePosY3);


        }
        else if(choose2p2== 5.0f)
        {
            police_car(obstaclePosX3,obstaclePosY3);


        }




    }
    else
    {
        if(choose2p1==1.0f)
        {
            police_car(obstaclePosX2,obstaclePosY2);
        }
        else if (choose2p1 ==2.0f)
        {
            truck(obstaclePosX2,obstaclePosY2-0.35f);
        }
        else if(choose2p1 ==3.0f)
        {
            normal_car(obstaclePosX2,obstaclePosY2);
        }



        if(choose2p2 == 4.0f)
        {
            normal_car(obstaclePosX3,obstaclePosY3);

        }
        else if(choose2p2== 5.0f)
        {
            police_car(obstaclePosX3,obstaclePosY3);

        }

        if(choose2p1!=3.0f)
        {
            roadBlock(obstacleBlockX,obstacleBlockY-.8,0.7);
        }



    }


}
