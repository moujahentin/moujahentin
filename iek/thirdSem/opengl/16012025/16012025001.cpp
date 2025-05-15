#include<GL/glut.h>
#include<stdio.h>
void drawMousePoint(int pos_x,int pos_y){
	glPointSize(5);
	glColor3f(0.0,1.0,1.0);
	glBegin(GL_POINTS);
	glVertex2f(pos_x,pos_y);
	glEnd();
	glFlush();
	}
void mouseClick(int button, int state, int x, int y){
	if(button==GLUT_LEFT_BUTTON && state ==GLUT_DOWN){
		printf("Left mouse button pressed\n");
		}
	if(button==GLUT_RIGHT_BUTTON && state ==GLUT_DOWN){
		}
	}
void mouseMotion(int x, int y){
	printf("X=%i,Y=%i\n",x,500-y);
	drawMousePoint(x,500-y);
	}
void mymenu(int value){
	if(value==1)
		glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
	if(value==2)
		glColor3f(0.0,0.0,1.0);
	if(value==3)
		glColor3f(1.0,1.0,1.0);
	if(value==4)
		exit(0);
	}
void display (void){
	glClearColor(1.0,1.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,1.0);
	glFlush();
	}
int main(int argc, char **argv){
	glutInit(&argc,argv);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Mouse Interaction with menu openGL-GLut");
	glutDisplayFunc(display);
	glutMouseFunc(mouseClick);
	glutMotionFunc(mouseMotion);
	glOrtho(0.0,500,0.0,500,-1.0,1.0);
	glutCreateMenu(mymenu);
	glutAddMenuEntry("Clear Screen",1);
	glutAddMenuEntry("Draw",2);
	glutAddMenuEntry("Erase",3);
	glutAddMenuEntry("Exit",4);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutMainLoop();
	return 0;
	}
