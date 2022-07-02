#include <stdio.h>

int main() {

	// Integer Types
	char CHAR = 'a';
	short SHORT = 5;
	int D_INT = 200;
	long LONG = 1992003;
	long long LONGG = 182983984948;	

	unsigned char U_CHAR = 'A';
	unsigned short U_SHORT = 6;
	unsigned int U_INT = 432;
	unsigned long U_LONG = 2344231;
	unsigned long long U_LONGG = 920392902933;

	// Char constant
	char UP_A = 'A';
	char NEWLINE = '\n';
	char TAB = '\t'; 
	char NULL_CHAR = '\0';
	char OCTAL_VALUE = '\012';

	//Integer constants
	int constant = 10;
	int HEX_CONSTANT = 0x1;
	int OCTAL_CONST = 012; 	
	
	// Promotion
	char CHAR_VALUE = '5';
	int INT_VALUE = 5; 
	long TOTAL_VAL = (CHAR_VALUE + INT_VALUE);
	int TOTAL_VALUE = ('b' + 10);
	
	// Floating point numbers
	float FLOAT_VAL = 5.383834f;
	double DOUBLE_VALUE = 3.14838488484832;
	long double LONG_DOUBLE = 8.38283294892489238293823l;

	// Comments 
	/**/      //Classical way to comment
	//       // Handy way to do it

	// Variables and The Assignment Operator 
	float xpos, ypos, zpos;
	xpos = 10; ypos = 20;
	zpos = 1;
	long double CURRENT_POS = 0l;
	CURRENT_POS = (CURRENT_POS = xpos * ypos + zpos); /*This is how the assignment operator does things */
	
	// Truncation 
	char ch; int i;
	i = 500; 
	ch = i; 

	// Mathematical Operators
	/* BINARY OPERATORS  */
	int INT;
	INT = 4 + 1; // Addition operator 
	INT = INT - 1; // Subtraction Operator 
	INT = INT / 2; // Division Operator
	INT = INT * 4; // Multiplication Operator
	INT = INT % 2; // Remainder Operator

	/* UNARY OPERATOR */
	int I;
	I++; // Increment Operator
	I--; // Decrement Operator


}

