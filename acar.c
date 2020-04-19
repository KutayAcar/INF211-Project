#include <stdio.h>
#include "acar.h"
double det( double *ptr, double *ptr2, double *ptr3, double *ptr4)
{	
	double determinant;
	determinant = *ptr4 * (*( ptr ) * *( ptr + 3 ) - *( ptr + 1 ) * *( ptr + 2 ));
	determinant -= *(ptr4+1)*(*( ptr2 ) * *( ptr2 + 3 ) - *( ptr2 + 1 ) * *( ptr2 + 2 ));
	determinant += *(ptr4+2)*(*( ptr3 ) * *( ptr3 + 3 ) - *( ptr3 + 1 ) * *( ptr3 + 2 ));
	return determinant;
}


