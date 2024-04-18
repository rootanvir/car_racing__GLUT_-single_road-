#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h


void road()
{
    //----------Road
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.625f,1.0f);
    glVertex2f(0.625f,-1.0f);
    glVertex2f(-0.625f,-1.0f);
    glVertex2f(-0.625f,1.0f);
    glEnd();

//--------Road Lines
    glLineWidth(3); //1st row start
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0,1.0);
    glVertex2f(0.375,0.94);
    glVertex2f(0.375,0.84);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(0.375,0.62);
    glVertex2f(0.375,0.5);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(0.375,0.3);
    glVertex2f(0.375,0.14);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0,1.0);
    glVertex2f(0.375,-0.1);
    glVertex2f(0.375,-0.28);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0,1.0);
    glVertex2f(0.375,-0.5);
    glVertex2f(0.375,-0.74);
    glEnd();

    glLineWidth(3); //---2nd row start--
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0,1.0);
    glVertex2f(0.125,0.94);
    glVertex2f(0.125,0.84);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(0.125,0.62);
    glVertex2f(0.125,0.5);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(0.125,0.3);
    glVertex2f(0.125,0.14);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0,1.0);
    glVertex2f(0.125,-0.1);
    glVertex2f(0.125,-0.28);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0,1.0);
    glVertex2f(0.125,-0.5);
    glVertex2f(0.125,-0.74);
    glEnd();

    glLineWidth(3);//------3rd row started
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0,1.0);
    glVertex2f(-0.125,0.94);
    glVertex2f(-0.125,0.84);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(-0.125,0.62);
    glVertex2f(-0.125,0.5);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(-0.125,0.3);
    glVertex2f(-0.125,0.14);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0,1.0);
    glVertex2f(-0.125,-0.1);
    glVertex2f(-0.125,-0.28);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0,1.0);
    glVertex2f(-0.125,-0.5);
    glVertex2f(-0.125,-0.74);
    glEnd();

    glLineWidth(3);//----4th row started
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0,1.0);
    glVertex2f(-0.375,0.94);
    glVertex2f(-0.375,0.84);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(-0.375,0.62);
    glVertex2f(-0.375,0.5);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(-0.375,0.3);
    glVertex2f(-0.375,0.14);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0,1.0);
    glVertex2f(-0.375,-0.1);
    glVertex2f(-0.375,-0.28);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0,1.0);
    glVertex2f(-0.375,-0.5);
    glVertex2f(-0.375,-0.74);
    glEnd();

//----Road side line---right side
    glBegin(GL_QUADS);
    glColor3f(0.7f,0.0f,0.0f);
    glVertex2f(0.625f,1.0f);
    glVertex2f(0.65f,1.0f);
    glVertex2f(0.65f,-1.0f);
    glVertex2f(0.625f,-1.0f);
    glEnd();

//----Road side line---left side
    glBegin(GL_QUADS);
    glColor3f(0.7f,0.0f,0.0f);
    glVertex2f(-0.625f,1.0f);
    glVertex2f(-0.65f,1.0f);
    glVertex2f(-0.65f,-1.0f);
    glVertex2f(-0.625f,-1.0f);
    glEnd();


    double x1=-0.65f,x2=-0.625f,y1=-1.1f,y2=-1.00f;
    double increase=0.2;
    for(int i=0; i<10; i++)
    {
        glColor3f(1.0f, 1.0f, 1.0f);
        glBegin(GL_POLYGON);
        glVertex2f(x1, y1+increase);
        glVertex2f(x2, y1+increase);
        glVertex2f(x2, y2+increase);
        glVertex2f(x1, y2+increase);
        increase=increase+0.2;

        glEnd();
    }
    {

        double x1=-0.65f,x2=-0.625f,y1=-1.1f,y2=-1.00f;
        double increase=0.2;
        for(int i=0; i<10; i++)
        {
            glColor3f(1.0f, 1.0f, 1.0f);
            glBegin(GL_POLYGON);
            glVertex2f(x1, y1+increase);
            glVertex2f(x2, y1+increase);
            glVertex2f(x2, y2+increase);
            glVertex2f(x1, y2+increase);
            increase=increase+0.2f;

            glEnd();
        }
    }


    {


        double x1=0.65f,x2=0.625f,y1=-1.1f,y2=-1.00f;
        double increase=0.2;
        for(int i=0; i<10; i++)
        {
            glColor3f(1.0f, 1.0f, 1.0f);
            glBegin(GL_POLYGON);
            glVertex2f(x1, y1+increase);
            glVertex2f(x2, y1+increase);
            glVertex2f(x2, y2+increase);
            glVertex2f(x1, y2+increase);
            increase=increase+0.2f;

            glEnd();
        }
    }

    glFlush(); // Render now
}
