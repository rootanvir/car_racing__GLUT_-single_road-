#include <bits/stdc++.h>
#include <GL/glut.h>



void display();
void groupInfo()
{
    char c1[]="American International University - Bangladesh (AIUB)",
    c2[]="Course Name : Computer Graphics",
    c3[]="Section :[H]",
    c4[]="Project Title : Retro Car Racing 2.0",
    c5[]="Group members",
    c6[]="-------------------------------------------------------------------------",
    c7[]="Name                                                                                      ID",
    c8[]="AYAN PAUL                                                                22-47172-1",
    c9[]="SAYAN KUMAR ROY                                                22-46538-1 ",
    c10[]="TANVIR AHMED TUHIN                                         22-46475-1 ",
    c11[]="KANIJ FATEMA BORSA                                          22-46144-1",
    c12[]="MOJIBUL HOQUE JIHAD                                        21-45954-3  ",
    c13[]="--------------------------------------------------------------------------",
    c14[]=" Supervised by ",
    c15[]="Mahfujur Rahman",
    c16[]="Lecturer,",
    c17[]="Department of Computer Science",
    c18[]="Faculty of Science and Technology ",
    c19[]="American International University - Bangladesh (AIUB)";



    glColor3f(1.0,1.0,1.0);
    renderBitmapString(-0.4f, 0.9f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c1);
    renderBitmapString(-0.3f, 0.8f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c2);
    renderBitmapString(-0.19f, 0.7f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c3);
    renderBitmapString(-0.3f, 0.6f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c4);
    renderBitmapString(-0.7f, 0.5f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c5);
    renderBitmapString(-0.7f, 0.4f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c6);
    renderBitmapString(-0.7f, 0.3f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c7);
    renderBitmapString(-0.7f, 0.2f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c8);
    renderBitmapString(-0.7f, 0.1f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c9);
    renderBitmapString(-0.7f, 0.0f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c10);
    renderBitmapString(-0.7f, -0.1f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c11);
    renderBitmapString(-0.7f, -0.2f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24,c12);
    renderBitmapString(-0.7f, -0.3f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c13);
    renderBitmapString(0.1f, -0.4f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c14);
    renderBitmapString(0.1f, -0.5f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c15);
    renderBitmapString(0.1f, -0.6f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c16);
    renderBitmapString(0.1f, -0.7f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c17);
    renderBitmapString(0.1f, -0.8f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c18);
    renderBitmapString(0.1f, -0.9f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c19);


}


void displayGroupInfo()
{
    glClearColor(0.0,0.0f,0.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    groupInfo();
    glFlush();
}
/*
void handleKeypressGroupInfo(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'G':
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

        break;
    default:
        break;
    }

    glutPostRedisplay();
}
*/
