#include<GL/glut.h>
void display(void){
	glClearColor(0.0,0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(50.0,50.0);
	glVertex2f(100.0,00.0);
	glVertex2f(255.0,255.0);
	glVertex2f(255.0,355.0);
	glVertex2f(355.0,255.0);
	glEnd();
	glLineWidth(6);
	glColor3f(0.0,25.0,0.0);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(10.0,100.0);
	glVertex2f(50.0,150.0);
	glVertex2f(100.0,140.0);
	glEnd();
	glFlush();
}
int main(int argc, char **argv){
	glutInit(&argc,argv);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Triangles openGL-GLUT");
	glutDisplayFunc(display);
	glOrtho(0.0,500,0.0,500,-1.0,1.0);
	glutMainLoop();
	return 0;	
}
