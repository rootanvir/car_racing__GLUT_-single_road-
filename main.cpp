#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include "road.h"
#include "tree.h"
#include "lake.h"
#include "building.h"
#include "lampost.h"
using namespace std;
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void renderBitmapString(float x, float y, float z, void *font, char *string)
{
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

void display()
{
    glClearColor(0.156f,0.61f,0.337f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    road();
    lake();
    building(-0.86f, 0.27f);
    building(-0.94f, -0.13f);
    pineTree(-0.8f, -0.8f);
    pineTree(-0.95f, -0.97f);
    pineTree(-0.97f, -0.29f);
    pineTree(0.91f, 0.86f);
    pineTree(0.83f, 0.57f);
    pineTree(0.95f, 0.25f);
    building(0.88f, -0.25f);
    building(0.99f, -0.61f);
    building(0.87f, -1.00f);
    lamp(-0.70f, -0.99f);
    lamp(-0.70f, -0.69f);
    lamp(-0.70f, -0.39f);
    lamp(-0.70f, -0.10f);
    lamp(-0.70f, 0.18f);
    lamp(-0.70f, 0.47f);
    lamp(-0.70f, 0.75f);
    lampRev(0.70f, -0.99f);
    lampRev(0.70f, -0.69f);
    lampRev(0.70f, -0.40f);
    lampRev(0.70f, -0.10f);
    lampRev(0.70f, 0.19f);
    lampRev(0.70f, 0.49f);
    lampRev(0.70f, 0.77f);

    glFlush();
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480); // Set the window's initial width & height
    glutInitWindowPosition(80, 50);  // Set the window's initial position according to the monitor
    glutCreateWindow("Car Racing"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
