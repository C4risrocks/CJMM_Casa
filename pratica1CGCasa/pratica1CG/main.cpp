//Semestre 2018 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************		Moreno Marín Christian				******//
//*************											******//
//************************************************************//
#include "Main.h"
void InitGL ( GLvoid )     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	
	
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limpiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview
	//
	glPointSize(15);
	glBegin(GL_POINTS);
	
	glColor3f(1, 0, 0);
	glVertex3f(4, 16, -1.2);
	glVertex3f(5, 16, -1.2);
	glVertex3f(6, 16, -1.2);
	glVertex3f(7, 16, -1.2);
	glVertex3f(8, 16, -1.2);

	glVertex3f(3, 15, -1.2);
	glVertex3f(4, 15, -1.2);
	glVertex3f(5, 15, -1.2);
	glVertex3f(6, 15, -1.2);
	glVertex3f(7, 15, -1.2);
	glVertex3f(8, 15, -1.2);
	glVertex3f(9, 15, -1.2);
	glVertex3f(10, 15, -1.2);
	glVertex3f(11, 15, -1.2);

	glVertex3f(3, 9, -1.2);
	glVertex3f(4, 9, -1.2);
	glVertex3f(6, 9, -1.2);
	glVertex3f(7, 9, -1.2);
	
	glVertex3f(2, 8, -1.2);
	glVertex3f(3, 8, -1.2);
	glVertex3f(4, 8, -1.2);
	glVertex3f(6, 8, -1.2);
	glVertex3f(7, 8, -1.2);
	glVertex3f(9, 8, -1.2);
	glVertex3f(10, 8, -1.2);
	glVertex3f(11, 8, -1.2);

	glVertex3f(1, 7, -1.2);
	glVertex3f(2, 7, -1.2);
	glVertex3f(3, 7, -1.2);
	glVertex3f(4, 7, -1.2);
	glVertex3f(9, 7, -1.2);
	glVertex3f(10, 7, -1.2);
	glVertex3f(11, 7, -1.2);
	glVertex3f(12, 7, -1.2);
	
	glVertex3f(3, 6, -1.2);
	glVertex3f(10, 6, -1.2);


	glColor3f(0.75, 0.52, 0.42);
	glVertex3f(6, 14, -1.2);
	glVertex3f(7, 14, -1.2);
	glVertex3f(9, 14, -1.2);

	glVertex3f(3, 13, -1.2);
	glVertex3f(5, 13, -1.2);
	glVertex3f(6, 13, -1.2);
	glVertex3f(7, 13, -1.2);
	glVertex3f(9, 13, -1.2);
	glVertex3f(10, 13, -1.2);
	glVertex3f(11, 13, -1.2);

	glVertex3f(3, 12, -1.2);
	glVertex3f(6, 12, -1.2);
	glVertex3f(7, 12, -1.2);
	glVertex3f(8, 12, -1.2);
	glVertex3f(10, 12, -1.2);
	glVertex3f(11, 12, -1.2);
	glVertex3f(12, 12, -1.2);

	glVertex3f(4, 11, -1.2);
	glVertex3f(5, 11, -1.2);
	glVertex3f(6, 11, -1.2);
	glVertex3f(7, 11, -1.2);

	glVertex3f(4, 10, -1.2);
	glVertex3f(5, 10, -1.2);
	glVertex3f(6, 10, -1.2);
	glVertex3f(7, 10, -1.2);
	glVertex3f(8, 10, -1.2);
	glVertex3f(9, 10, -1.2);
	glVertex3f(10, 10, -1.2);

	glVertex3f(1, 6, -1.2);
	glVertex3f(2, 6, -1.2);
	glVertex3f(5, 6, -1.2);
	glVertex3f(8, 6, -1.2);
	glVertex3f(11, 6, -1.2);
	glVertex3f(12, 6, -1.2);

	glVertex3f(1, 5, -1.2);
	glVertex3f(2, 5, -1.2);
	glVertex3f(3, 5, -1.2);
	glVertex3f(10, 5, -1.2);
	glVertex3f(11, 5, -1.2);
	glVertex3f(12, 5, -1.2);

	glVertex3f(1, 4, -1.2);
	glVertex3f(2, 4, -1.2);
	glVertex3f(11, 4, -1.2);
	glVertex3f(12, 4, -1.2);






	

	
	glColor3f(0.4235, 0.2313, 0.1647);

	glVertex3f(3, 14, -1.2);
	glVertex3f(4, 14, -1.2);
	glVertex3f(5, 14, -1.2);

	glVertex3f(2, 13, -1.2);
	glVertex3f(4, 13, -1.2);

	glVertex3f(2, 12, -1.2);
	glVertex3f(4, 12, -1.2);
	glVertex3f(5, 12, -1.2);
	glVertex3f(9, 12, -1.2);

	glVertex3f(2, 11, -1.2);
	glVertex3f(3, 11, -1.2);
	glVertex3f(8, 11, -1.2);
	glVertex3f(9, 11, -1.2);
	glVertex3f(10, 11, -1.2);
	glVertex3f(11, 11, -1.2);

	glVertex3f(1, 1, -1.2);
	glVertex3f(2, 1, -1.2);
	glVertex3f(3, 1, -1.2);
	glVertex3f(4, 1, -1.2);
	glVertex3f(9, 1, -1.2);
	glVertex3f(10, 1, -1.2);
	glVertex3f(11, 1, -1.2);
	glVertex3f(12, 1, -1.2);

	glVertex3f(2, 2, -1.2);
	glVertex3f(3, 2, -1.2);
	glVertex3f(4, 2, -1.2);
	glVertex3f(9, 2, -1.2);
	glVertex3f(10, 2, -1.2);
	glVertex3f(11, 2, -1.2);

	glColor3f(0, 0, 1);
	glVertex3f(3, 3, -1.2);
	glVertex3f(4, 3, -1.2);
	glVertex3f(5, 3, -1.2);
	glVertex3f(8, 3, -1.2);
	glVertex3f(9, 3, -1.2);
	glVertex3f(10, 3, -1.2);

	glVertex3f(3, 4, -1.2);
	glVertex3f(4, 4, -1.2);
	glVertex3f(5, 4, -1.2);
	glVertex3f(8, 4, -1.2);
	glVertex3f(9, 4, -1.2);
	glVertex3f(10, 4, -1.2);

	glVertex3f(4, 5, -1.2);
	glVertex3f(5, 5, -1.2);
	glVertex3f(6, 5, -1.2);
	glVertex3f(7, 5, -1.2);
	glVertex3f(8, 5, -1.2);
	glVertex3f(9, 5, -1.2);

	glVertex3f(4, 6, -1.2);
	glVertex3f(6, 6, -1.2);
	glVertex3f(7, 6, -1.2);
	glVertex3f(9, 6, -1.2);

	glVertex3f(5, 7, -1.2);
	glVertex3f(6, 7, -1.2);
	glVertex3f(7, 7, -1.2);
	glVertex3f(8, 7, -1.2);

	glVertex3f(5, 8, -1.2);
	glVertex3f(8, 8, -1.2);

	glVertex3f(5, 9, -1.2);

	glEnd();


	glFlush();

}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
	if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(-10,20,-10,20,0.1,2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();									
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}    

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 2"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut función de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

