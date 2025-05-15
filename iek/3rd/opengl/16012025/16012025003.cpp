#include <GL/glut.h>

void display(){
	glColor3f(0,0,1);
	glClearColor(1,1,1,0);
	glClear (GL_COLOR_BUFFER_BIT);
	glutWireSphere(40,40,40);
	glFlush();
	}
int main(int argc, char **argv){
	glutInit(&argc,argv);
	glutInitWindowPosition(50,50);
	glutInitWindowSize(800,600);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutCreateWindow("A sphere wireframe");
	glMatrixMode(GL_PROJECTION);
	glOrtho(-80,80,-60,60,0,100);
	glMatrixMode(GL_MODELVIEW);
	gluLookAt(0,-40,40,0,0,0,0,1,0);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
	}
