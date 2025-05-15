#include <GL/glut.h>

void display(void){
	glClear (GL_COLOR_BUFFER_BIT);
	glFlush();
	}
int main(int argc,char **argv){
	glutInit(&argc,argv);
	glutCreateWindow("Enakenopara8yoopenGL-GLut");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
	}
