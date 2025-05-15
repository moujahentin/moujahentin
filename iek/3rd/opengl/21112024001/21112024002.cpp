#include <GL/glut.h>
void display (void){
	glClearColor(0.0,0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(12);
	glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);
	glVertex2f(0.0,20.0);
	glVertex2f(50.0,100.0);
	glVertex2f(255.0,255.0);
	glVertex2f(255.0,500.0);
	glEnd();
	glLineWidth(12);
	glBegin(GL_LINE_STRIP);
	glVertex2f(30.0,30.0);
	glVertex2f(100.0,30.0);
	glVertex2f(100.0,200.0);
	glVertex2f(300.0,200.0);
	glEnd();
	glFlush();
}
	int main(int argc,char **argv){
		glutInit(&argc,argv);
		glutInitWindowSize(300,500);
		glutInitWindowPosition(100,100);
		glutCreateWindow("egasia-examinou-2024B");
		glutDisplayFunc(display);
		glOrtho(0.0,500,0.0,500,-1.0,1.0);
		glutMainLoop();
		return 0;
		}
