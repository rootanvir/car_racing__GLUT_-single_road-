#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

void lamp(double centerx,double centery)
{
    glLineWidth(5.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(centerx, centery);
    glVertex2f(centerx, centery+0.24f);
    glVertex2f(centerx+0.05, centery+0.3f);
    glVertex2f(centerx+0.07, centery+0.3f);
    glEnd();

    glColor3f(1.0f, 0.984f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(centerx+0.05, centery+0.3f);
    glVertex2f(centerx+0.07, centery+0.3f);
    glVertex2f(centerx+0.07, centery+0.28f);
    glVertex2f(centerx+0.05, centery+0.28f);
    glEnd();

}

void lampRev(double centerx,double centery)
{
    glLineWidth(5.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(centerx, centery);
    glVertex2f(centerx, centery+0.24f);
    glVertex2f(centerx-0.05, centery+0.3f);
    glVertex2f(centerx-0.07, centery+0.3f);
    glEnd();

    glColor3f(1.0f, 0.984f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(centerx-0.05, centery+0.3f);
    glVertex2f(centerx-0.07, centery+0.3f);
    glVertex2f(centerx-0.07, centery+0.28f);
    glVertex2f(centerx-0.05, centery+0.28f);
    glEnd();

}
void lamps()
{
    for(double i=2.0f;i>-3.0f;i-=0.33f)
    {
        lamp(-0.70f,i);
    }
    for(double i=2.0f;i>-3.0f;i-=0.33f)
    {
        lampRev(0.70f,i);
    }
}
