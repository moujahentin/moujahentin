#include <GL/glut.h>

float xwmin=-50,xwmax=50,ywmin=-50,ywmax=50;

int windowWidth=640,windowHeight=480;
GLfloat xw1=0,yw1=0;
GLfloat xw2=xw1+20,yw2=yw1+20;

void display(){
	glClearColor(1,1,1,0);
	glColor3f(0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glRectf(xw1,yw1,xw2,yw2);
	glFlush();
	}
	
void mouseActiveMotion(int x,int y){

		xw1=(float)(xwmin+(float)(x)*(float)(xwmax-xwmin)/(float)(windowWidth));
		yw1=(float)(ywmin+(float)(windowHeight-y)*(float)(ywmax-ywmin)/(float)(windowHeight));
		xw2=xw1+20;
		yw2=yw1+20;
		glutPostRedisplay();
	}

int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitWindowPosition(50,50);
	glutInitWindowSize(windowWidth,windowHeight);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutCreateWindow("Mouse active motion Events");
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(xwmin,xwmax,ywmin,ywmax);
	glutDisplayFunc(display);
	glutMotionFunc(mouseActiveMotion);
	glutMainLoop();
	return 0;
	}
