#include <GL/glut.h>

GLsizei width=640;
GLsizei height=480;
GLuint x1=10,y1=10;
GLuint x2=20,y2=20;

void display(){
	glClearColor(1,1,1,0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,0,0);
	glRecti(x1,y1,x2,y2);
	glFlush();
	}
int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitWindowPosition(50,50);
	glutInitWindowSize(width,height);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutCreateWindow("Display Events");
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,30,0,30);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
	}
