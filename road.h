#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h



void roadDashed()
{
    //--------Road Lines
    for(double i=2.0f; i>-2.0f; i-=0.2f)
    {
        glLineWidth(3); //1st row start
        glBegin(GL_LINES);
        glColor3f(1.0f,1.0,1.0);
        glVertex2f(0.375,i);
        glVertex2f(0.375,i+0.1f);
        glEnd();
    }

    for(double i=2.0f; i>-2.0f; i-=0.2f)
    {

        glLineWidth(3); //---2nd row start--
        glBegin(GL_LINES);
        glColor3f(1.0f,1.0,1.0);
        glVertex2f(0.125,i);
        glVertex2f(0.125,i+0.1f);
        glEnd();
        glEnd();
    }

    for(double i=2.0f; i>-2.0f; i-=0.2f)
    {
        glLineWidth(3);//------3rd row started
        glBegin(GL_LINES);
        glColor3f(1.0f,1.0,1.0);
        glVertex2f(-0.125,i);
        glVertex2f(-0.125,i+0.1f);
        glEnd();
    }

    for(double i=2.0f; i>-2.0f; i-=0.2f)
    {
        glLineWidth(3);//----4th row started
        glBegin(GL_LINES);
        glColor3f(1.0f,1.0,1.0);
        glVertex2f(-0.375,i);
        glVertex2f(-0.375,i+0.1f);
        glEnd();
    }


}

void roadSurface()
{
    //----------Road
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.625f,1.0f);
    glVertex2f(0.625f,-1.0f);
    glVertex2f(-0.625f,-1.0f);
    glVertex2f(-0.625f,1.0f);
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




    glFlush(); // Render now
}
void roadSide()

{
    {

        double x1=-0.65f,x2=-0.625f,y1=-2.1f,y2=-2.00f;
        double increase=0.2;
        for(int i=0; i<30; i++)
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


        double x1=0.65f,x2=0.625f,y1=-2.1f,y2=-2.00f;
        double increase=0.2;
        for(int i=0; i<30; i++)
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
}

void road()
{
    roadSurface();
    roadDashed();
    roadSide();
}
