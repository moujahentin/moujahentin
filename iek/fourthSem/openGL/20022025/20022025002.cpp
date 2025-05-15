#include <GL/glut.h>

void display()
{
	glClearColor(1,1,1,0);
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(1,0,0);
	glLineWidth(2);
	glLineStipple(1,0x00FF);
	
	glBegin(GL_LINES);
	glVertex2i(0,0);
	glVertex2i(10,0);
	glVertex2i(0,10);
	glVertex2i(10,10);
	glEnd();
	glColor3f(0,1,0);
	glLineWidth(3);
	glLineStipple(2,0x00FF);
	glBegin(GL_LINE_STRIP);
	glVertex2i(15,10);
	glVertex2i(20,10);
	glVertex2i(25,5);
	glVertex2i(20,0);
	glVertex2i(15,0);
	glEnd();
	glColor3f(0,0,1);
	glLineWidth(2);
	glLineStipple(1,0x0A0A);
	glBegin(GL_LINE_LOOP);
	glVertex2i(0,15);
	glVertex2i(0,20);
	glVertex2i(5,25);
	glVertex2i(10,20);
	glVertex2i(10,15);
	glEnd();
	glFlush();
}

int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitWindowPosition(50,50);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
	glutCreateWindow("Drawing stippled lines");
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-5,30,-5,30);
	glEnable(GL_LINE_STIPPLE);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
	}
