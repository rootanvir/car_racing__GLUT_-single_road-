#include<cstdio>
#include <bits/stdc++.h>
#include <GL/gl.h>
#include <GL/glut.h>
using namespace std;
void updateCollision(int value)

{
    //cout<<car1PosX<<"\t";
    //cout<<car2PosX<<endl;
    //cout<<"("<< obstaclePosX<<","<< obstaclePosY <<") "<<"\t "<<"("<< obstaclePosX2<<","<< obstaclePosY2 <<") "<<"\t "<<"("<< obstaclePosX3<<","<< obstaclePosY <<") "<<endl;
    //cout<<car1PosX<<"\t"<<obstaclePosX-0.25f<<"\t"<<car1PosY<<"\t"<<obstaclePosY<<endl;



    if(distanceOfCar<level1)
    {
        //cout<<"level 1"<<endl;
        //cout<<car1PosX<<"\t"<<obstaclePosX-0.25f<<"\t"<<obstaclePosY<<endl;
        if((car1PosX==obstaclePosX-0.25f)&&(obstaclePosY<0.4f ))
        {

            heartCount1-=1;
            obstaclePosY=2.0f;


        }
        //cout<<car2PosX<<"\t"<<obstaclePosX-0.75f<<"\t"<<car2PosY<<"\t"<<obstaclePosY<<endl;
        if((car2PosX==obstaclePosX-0.75f)&&(obstaclePosY<0.4f ))
        {
            heartCount2-=1;
            obstaclePosY=2.0f;
        }

    }
    else if(distanceOfCar>level1&&distanceOfCar<=level2)
    {
        //cout<<"level 2"<<endl;
        if((car1PosX==obstaclePosX2-0.25f)&&(obstaclePosY2<0.4f ))
        {
            heartCount1-=1;
            obstaclePosY2=2.0f;
        }

        if((car2PosX==obstaclePosX3-0.75f)&&(obstaclePosY3<0.4f ))
        {
            heartCount2-=1;
            obstaclePosY3=2.0f;
        }

    }

    cout<<obstaclePosX2<<"\t"<<obstaclePosX3<<endl;
    //cout<<car1PosX<<"\t"<<obstaclePosX2-0.25f<<"\t"<<obstaclePosY2<<endl;
    //cout<<car2PosX<<"\t"<<obstaclePosX3-0.75f<<"\t"<<obstaclePosY3<<endl;



    glutTimerFunc(100, updateCollision, 0);
    glutPostRedisplay();
}
