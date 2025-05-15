#include<GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
void drawRandomPoint(){
	int X,Y;
	int R,G,B;
	X=rand()%500+1;
	Y=rand()%500+1;
	R=rand()%255;
	G=rand()%255;
	B=rand()%255;
	printf("X=%i",X);
	printf("Y=%i\n",Y);
	glPointSize(20);
	glColor3ub(R,G,B);
	glBegin(GL_POINTS);
	glVertex2f(X,Y);
	glEnd();
	glFlush();
	}
void keyboard(unsigned char key,int x, int y){
	if(key==27) exit(0);
	else{
		printf("You pressed %c\n", key);
		drawRandomPoint();
		}	
	}
void display (void){
	glClearColor(1.0,0.0,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
	}
int main(int argc, char **argv){
	glutInit(&argc,argv);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Keyboard Interaction openGL-GLut");
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glOrtho(0.0,500,0.0,500,-1.0,1.0);
	glutMainLoop();
	return 0;
	}
