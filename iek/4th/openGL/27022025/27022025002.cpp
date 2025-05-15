#include <GL/glut.h>

void display(){
	glClearColor(1,1,0,0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,0,0);
	glPointSize(3);
	glBegin(GL_POINTS);
	glVertex2i(10,10);
	glVertex2i(20,10);
	glVertex2i(25,15);
	glVertex2i(20,20);
	glVertex2i(10,20);
	glEnd();
	glFlush();
	}
int main(int argc,char**argv){
	glutInit(&argc,argv);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutCreateWindow("Drawning Points");
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(5,30,5,25);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
	}
