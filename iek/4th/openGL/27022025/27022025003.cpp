#include <GL/glut.h>
#include <math.h>
#define PI 3.14159
#define circlePoints 256

int i;
void display(){
	GLfloat angleStep=2*PI/(float)circlePoints;
	GLuint pointsPerQuarter=circlePoints/4;
	GLfloat x[circlePoints];
	GLfloat y[circlePoints];
	GLfloat radius=10;
	glClearColor(0,0,0,0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0,1,0);
	glLineWidth(3);
	for(i=0;i<pointsPerQuarter/2;i++){
		x[i]=radius*cos(i*angleStep);
		y[i]=radius*sin(i*angleStep);
		x[pointsPerQuarter-1-i]=y[i];
		y[pointsPerQuarter-1-i]=x[i];
		
		x[pointsPerQuarter+i]=-y[i];
		y[pointsPerQuarter+i]=x[i];
		x[2*pointsPerQuarter-1-i]=-x[i];
		y[2*pointsPerQuarter-1-i]=y[i];
		
		x[2*pointsPerQuarter+i]=-x[i];
		y[2*pointsPerQuarter+i]=-y[i];
		x[3*pointsPerQuarter-1-i]=-y[i];
		y[3*pointsPerQuarter-1-i]=-x[i];

		x[3*pointsPerQuarter+i]=y[i];
		y[3*pointsPerQuarter+i]=-x[i];
		x[4*pointsPerQuarter-1-i]=x[i];
		y[4*pointsPerQuarter-1-i]=-y[i];	
		}
	glBegin(GL_LINE_LOOP);
	for(i=0;i<circlePoints;i++){
		glVertex2f(x[i],y[i]);
		}
	glEnd();
	glFlush();
	}
int main(int argc,char**argv){
	glutInit(&argc,argv);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
	glutCreateWindow("Circle Drawning");
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-32,32,-24,24);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
	}
