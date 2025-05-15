#include <GL/glut.h>

void display(){
	glClearColor(1,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5,0,0);
	glBegin(GL_POLYGON);
	glVertex2i(0,0);
	glVertex2i(10,0);
	glVertex2i(15,10);
	glVertex2i(10,20);
	glVertex2i(0,20);
	glEnd();
	glColor3f(0,0.5,0);
	glBegin(GL_POLYGON);
	glVertex2i(30,0);
	glVertex2i(25,10);
	glVertex2i(30,20);
	glVertex2i(40,20);
	glVertex2i(40,0);
	glEnd();
	glFlush();
	}
int main(int argc,char**argv){
	glutInit(&argc,argv);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
	glutCreateWindow("Polygon front and back faces");
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-10,50,-10,50);
	glPolygonMode(GL_FRONT,GL_FILL);
	glPolygonMode(GL_BACK,GL_LINE);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
	}
