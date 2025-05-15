#include <GL/glut.h>
void display(){
	glClearColor(1,1,1,0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(2.5,0);
	glVertex2f(7.5,0);
	glVertex2f(10,5);
	glVertex2f(7.5,10);
	glVertex2f(2.5,10);
	glVertex2f(0,5);
	
	glEnd();
	glColor3f(0,1,0);
	glBegin(GL_QUADS);
	glVertex2f(17.5,0);
	glVertex2f(17.54,7.5);
	glVertex2f(22.5,10);
	glVertex2f(22.5,2.5);
	glVertex2f(30,0);
	glVertex2f(30,7.5);
	glVertex2f(25,10);
	glEnd();
	
	glColor3f(0,0,1);
	glBegin(GL_QUAD_STRIP);
	glVertex2f(0,15);
	glVertex2f(0,25);
	glVertex2f(7.5,17.5);
	glVertex2f(7.5,22.5);
	glVertex2f(15,15);
	glVertex2f(15,25);
	glVertex2f(22.5,17.5);
	glVertex2f(22.5,22.5);
	
	glVertex2f(30,15);
	glVertex2f(30,25);
	glEnd();
	glFlush();
	}
int main(int argc, char**argv){
	glutInit(&argc,argv);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutCreateWindow("Drawning Polygons");
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-5,35,-5,30);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
	
	
	}
