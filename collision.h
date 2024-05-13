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
    cout<<car1PosX<<"\t"<<obstaclePosX-0.25f<<endl;


    glutTimerFunc(50, updateCollision, 0);
    glutPostRedisplay();
}
