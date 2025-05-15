#include <GL/glut.h>
void display(){
    glClear(GL_COLOR_BUFFER_BIT) ; 
    glColor3f(0.6f, 0.3f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(50, 50);
    glVertex2f(150, 50);
    glVertex2f(170, 80);
    glVertex2f(30, 80);
    glEnd();
    glColor3f(1.0f, 0.8f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(90, 80);
    glVertex2f(110, 80);
    glVertex2f(110, 170);
    glVertex2f(90, 170);
    glEnd();
    glColor3f(0.3f, 0.5f, 1.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(110, 170);
    glVertex2f(110, 100);
    glVertex2f(170, 100);
    glEnd();
    glFlush();
}
void init(){
	glClearColor(1.0,1.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,200,0,200);
	}
int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Καράβι OpenGL");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
