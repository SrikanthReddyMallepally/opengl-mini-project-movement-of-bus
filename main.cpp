#include<stdio.h>
#include<math.h>
#include<GL/glut.h>
void bus()
{
    glClear(GL_COLOR_BUFFER_BIT);
     glClearColor(0,0,0,0);
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex2f(-0.8,0.2);
    glVertex2f(-0.8,0);
    glVertex2f(-0.7,0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex2f(-0.6,0);
    glVertex2f(-0.3,0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex2f(-0.2,0);
    glVertex2f(-0.1,0);
    glVertex2f(-0.1,0.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1,1,0);
    glVertex2f(-0.1,0.2);
     glVertex2f(-0.1,0.32);
     glVertex2f(-0.801,0.32);
     glVertex2f(-0.801,0.2);
     glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.5,0.5,0.5);
     glVertex2f(-0.11,0.21);
     glVertex2f(-0.11,0.29);
     glVertex2f(-0.79,0.29);
     glVertex2f(-0.79,0.21);
     glEnd();

    for(float i=0;i<=0.748;i=i+0.068)
    {
        glPushMatrix();
        glBegin(GL_LINES);
        glColor3f(1,1,1);
        glVertex2f(-0.11-i,0.21);
        glVertex2f(-0.11-i,0.29);
        glEnd();
        glPopMatrix();
    }
     glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
        glVertex2f(0.03*cos(i*3.14/180)-0.25,0.05*sin(i*3.14/180));
    }
    glEnd();
      glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
    glVertex2f(0.03*cos(i*3.14/180)-0.65,0.05*sin(i*3.14/180));

    }
    glEnd();
    glBegin(GL_POINTS);
     for(int i=0;i<=180;i++)
    {
       glColor3f(1,1,0);
    glVertex2f(0.05*cos(i*3.14/180)-0.65,0.07*sin(i*3.14/180)+0);
    glVertex2f(0.05*cos(i*3.14/180)-0.25,0.07*sin(i*3.14/180)+0);
    }
    glEnd();
     glBegin(GL_QUADS);
     glColor3f(0,1,0);
     glVertex2f(-4,-0.05);//-0.999
     glVertex2f(4,-0.05);
     glVertex2f(4,-0.15);
     glVertex2f(-4,-0.15);
     glEnd();

      glBegin(GL_QUADS);
     glColor3f(0.5,0.35,0.05);
     glVertex2f(-4,-0.15);
     glVertex2f(4,-0.15);
     glVertex2f(4,-0.50);
     glVertex2f(-4,-0.50);
     glEnd();

     glFlush();
     glutPostRedisplay();
}

void control(int key,int x,int y)
{
   if(key==GLUT_KEY_RIGHT )
   {
      glTranslatef(0.01,0,0);
   }
    if(key==GLUT_KEY_LEFT)
    {
        glTranslatef(-0.01,0,0);
    }
}
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(1024,600);
    glutCreateWindow("bus");
    glClear(GL_COLOR_BUFFER_BIT);
    glutDisplayFunc(bus);
    glutSpecialFunc(control);
    glutMainLoop();
}
