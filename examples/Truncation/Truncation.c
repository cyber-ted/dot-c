/*
 * =====================================================================================
 *
 *       Filename:  Truncation.c
 *
 *    Description:  Implementing Truncation in C
 *
 *        Version:  1.0
 *        Created:  07/02/2022 07:48:15 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ted Jerin
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h> 

int main() {
	
	/* i gets truncated to fit into the 8bit char */
	int i;
	char ch;

	i = 234;
	ch = i;

	/* floating point to int truncation  */

	double db;
	int p; 

	db = 3.333333333;
	p = db; 

	/* p gets set to 3; db gets truncated and looses the fractional part of the constant */

}

