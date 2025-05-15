#include <GL/glut.h>
void display(){
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glColor3f(1,0,0);
	glVertex2i(-120,-120);
	glVertex2i(140,140);
	glEnd();
	glFlush();	
	}
int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitWindowPosition(50,50);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutCreateWindow("A sample openGL application");
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-240,240,-180,180);
	glutDisplayFunc(display);
	glutMainLoop();	
	return 0;
	}
