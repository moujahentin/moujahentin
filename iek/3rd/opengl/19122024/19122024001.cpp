#include<GL/glut.h>
void display(void){
	glClearColor(1.0,12.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.0,0.0);
	glVertex2f(20.0,100.0);
	glVertex2f(200.0,150.0);
	glVertex2f(250.0,120.0);
	glVertex2f(120.0,40.0);
	glEnd();
	glFlush();
}
int main(int argc, char **argv){
	glutInit(&argc,argv);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Polygons openGL-GLUT");
	glutDisplayFunc(display);
	glOrtho(0.0,500,0.0,500,-1.0,1.0);
	glutMainLoop();
	return 0;	
}
