#include <stdio.h>
#include "acar.h"
int main(void)
{
	double determinant;
	double A[3][3];
	double temp1[2][3];
	double temp2[2][2];
	double temp3[2][2];
	double temp4[2][2];
	double temp5[2][2];
	int i,j;
	double *ptr, *ptr2, *ptr3, *ptr4;
	ptr4 = A;
	for ( i= 0; i < 3; i++)
	{
		for ( j=0; j<3; j++)
		{
			printf("Please enter your matrix's element in %d,%d. index:",i,j);
			scanf("%lf",&A[i][j]);
			
		}
	}
	for ( i=0; i < 2; i++)
	{
		for ( j =0; j < 3; j++)
		{
		
		temp1[i][j]=A[i+1][j];
	}
	}
		for ( i=0; i < 2; i++)
	{
		for ( j =0; j < 2; j++)
		{
		
		temp2[i][j]=temp1[i][j+1];
	}
	}								//a0,0 için kofaktör
	ptr=temp2;
	for ( i=0; i < 2; i++)
	{
		for ( j =0; j < 3; j++)
		{
		
		temp1[i][j]=A[i+1][j];
	}
	}
		for ( i=0; i < 2; i++)
	{

		temp3[i][0]=temp1[i][0];
		temp3[i][1]=temp1[i][2];
	}
	ptr2=temp3;			//a0,1 için kofaktör
	for ( i=0; i < 2; i++)
	{
		for ( j =0; j < 3; j++)
		{
		
		temp1[i][j]=A[i+1][j];
	}
	}
		for ( i=0; i < 2; i++)
	{

		temp4[i][0]=temp1[i][0];
		temp4[i][1]=temp1[i][1];
	}
	ptr3=temp4;                    //a0,2 için kofaktör
	determinant = det(ptr,ptr2,ptr3,ptr4);
	printf("Determinant of your matrix is :%lf",determinant);
	}
