#include<GL/glut.h>
void display(void){
	glClearColor(0.0,204.0,204.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_QUADS);
	glVertex2f(10.0,10.0);
	glVertex2f(10.0,50.0);
	glVertex2f(110.0,50.0);
	glVertex2f(110.0,10.0);
	glEnd();
	glColor3f(1.0,5.0,0.0);
	glBegin(GL_QUAD_STRIP);
	glVertex2f(100.0,100.0);
	glVertex2f(100.0,120.0);
	glVertex2f(200.0,100.0);
	glVertex2f(180.0,200.0);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(250.0,100.0);
	glVertex2f(250.0,200.0);
	glEnd();
	glFlush();
}
int main(int argc, char **argv){
	glutInit(&argc,argv);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Quadrilaterals openGL-GLUT");
	glutDisplayFunc(display);
	glOrtho(0.0,500,0.0,500,-1.0,1.0);
	glutMainLoop();
	return 0;	
}
