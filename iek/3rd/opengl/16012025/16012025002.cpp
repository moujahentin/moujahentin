#include <GL/glut.h>

void display(){
	glColor3f(0,0,1);
	glClearColor(1,1,1,0);
	glClear (GL_COLOR_BUFFER_BIT);
	glutWireCube(40);
	glFlush();
	}
int main(int argc, char **argv){
	glutInit(&argc,argv);
	glutInitWindowPosition(50,50);
	glutInitWindowSize(800,600);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutCreateWindow("A cube wireframe");
	glMatrixMode(GL_PROJECTION);
	glOrtho(-80,80,-60,60,0,100);
	glMatrixMode(GL_MODELVIEW);
	gluLookAt(-30,-30,40,0,0,0,0,1,0);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
	}
