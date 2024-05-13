#include <windows.h> // for MS Windows
#include <GL/glut.h>
#include <bits/stdc++.h>
#include<cstdio>
void menu1Sound()
{
        PlaySound("resources/menu_sound/menu1.wav", NULL,SND_ASYNC|SND_FILENAME);
}
void menu2Sound()
{
        PlaySound("resources/menu_sound/menu2.wav", NULL,SND_ASYNC|SND_FILENAME);
}
void carEngineStart()
{
        PlaySound("resources/car/car_engine_start.wav", NULL,SND_ASYNC|SND_FILENAME);
}
void enterSound()
{
        PlaySound("resources/menu_sound/enter.wav", NULL,SND_ASYNC|SND_FILENAME);
}

void normalCarSound()
{
        PlaySound("resources/car/normalCar.wav", NULL,SND_ASYNC|SND_FILENAME);
}
void racingCarSound()
{
        PlaySound("resources/car/racingCar.wav", NULL,SND_ASYNC|SND_FILENAME | SND_LOOP);
}
void policeCarSound()
{
        PlaySound("resources/car/policeCar.wav", NULL,SND_ASYNC|SND_FILENAME);
}
void truckSound()
{
        PlaySound("resources/car/truck.wav", NULL,SND_ASYNC|SND_FILENAME);
}

void slidingSound()
{
        PlaySound("resources/car/sliding.wav", NULL,SND_ASYNC|SND_FILENAME);
}
void carCrashSound()
{
        PlaySound("resources/car/carCrash.wav", NULL,SND_ASYNC|SND_FILENAME );
}




void initMenuSound()
{
    menu1Sound();
    menu2Sound();
}
