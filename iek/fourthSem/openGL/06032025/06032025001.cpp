#include <GL/glut.h>
#include <math.h>
#define PI 3.14159
#define ellipsePoints 256

int i;
void display(){
	GLfloat angleStep=2*PI/(float)ellipsePoints;
	GLuint pointsPerQuarter=ellipsePoints/4;
	GLfloat x[ellipsePoints];
	GLfloat y[ellipsePoints];
	
	GLfloat rx=15;
	GLfloat ry=10;
	glClearColor(1,1,1,0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,0,0);
	glLineWidth(3);
	glBegin(GL_LINE_LOOP);
	for(i=0;i<pointsPerQuarter;i++){
		x[i]=rx*cos(i*angleStep);
		y[i]=ry*sin(i*angleStep);		
		}
	for(i=0;i<pointsPerQuarter;i++){
		x[pointsPerQuarter+i]=-x[(pointsPerQuarter-1)-i];
		y[pointsPerQuarter+i]=y[(pointsPerQuarter-1)-i];
		x[2*pointsPerQuarter+i]=-x[i];
		y[2*pointsPerQuarter+i]=-y[i];
		x[3*pointsPerQuarter+i]=x[(pointsPerQuarter-1)-i];
		y[3*pointsPerQuarter+i]=-y[(pointsPerQuarter-1)-i];
		}
	for(i=0;i<ellipsePoints;i++){
		glVertex2f(x[i],y[i]);
		}
	glEnd();
	glFlush();
}

int main(int argc,char**argv){
	glutInit(&argc,argv);
	glutInitWindowPosition(50,50);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
	glutCreateWindow("Ellipse drawning");
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-32,32,-24,24);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
	}
