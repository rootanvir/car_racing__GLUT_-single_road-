
void instruction()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    // Define char arrays for each string
    char title[] = "Instruction for playing Retro Car Racing 2.0";
    char line[] = "__________________________________________________________________________________";
    char player1[] = "Player 1";
    char car1[] = "Car : Blue;";
    char control1[] = "Control:";
    char left1[] = "Left ->a ";
    char right1[] = "Right ->d ";
    char separator[] = "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ";
    char player2[] = "Player 2";
    char car2[] = "Car : Red; ";
    char control2[] = "Control: ";
    char left2[] = "Left ->left arrow ";
    char right2[] = "Right ->right arrow";
    char info[] = "Both have limited fuel, have 3 life and can gain abilities while racing by earn them.";
    char infoLine[] = "____________________________________________________________________________________";
    char fullscreen[] ="Press Shift+f for full screen";

    glColor3f(1.0,1.0,1.0);

    // Render each string using renderBitmapString function
    renderBitmapString(-0.3f, 0.7f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, title);
    renderBitmapString(-0.7f, 0.6f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, line);
    renderBitmapString(-0.6f, 0.5f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, player1);
    renderBitmapString(-0.5f, 0.4f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, car1);
    renderBitmapString(-0.5f, 0.3f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, control1);
    renderBitmapString(-0.5f, 0.2f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, left1);
    renderBitmapString(-0.5f, 0.1f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, right1);
    renderBitmapString(-0.6f, 0.0f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, separator);
    renderBitmapString(-0.6f, -0.1f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, player2);
    renderBitmapString(-0.5f, -0.2f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, car2);
    renderBitmapString(-0.5f, -0.3f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, control2);
    renderBitmapString(-0.5f, -0.4f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, left2);
    renderBitmapString(-0.5f, -0.5f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, right2);
    renderBitmapString(-0.6f, -0.65f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, info);
    renderBitmapString(-0.7f, -0.7f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, infoLine);
    renderBitmapString(-0.7f, -0.8f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, fullscreen);


     car(0.8,1.0,0.0,0.0,1.0,'1');
     car(0.8,0.3,1.0,0.0,0.0,'2');


    glFlush(); // Render now
}
void displayInstruction()
{
    glClearColor(0.0,0.0f,0.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    instruction();
    glFlush();
}
