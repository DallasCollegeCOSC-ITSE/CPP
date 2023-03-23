//comment
/* other kind of comment*/

//Allows us to bring in other resources
#include <iostream> //input/output streams

//makes it so that we don't have to type as much
using namespace std;

int main() //starting place for the program
{	
	//       literal (string)
	cout << "Hello" << endl; //endl stands for endline

	//Variables
	//x = ?
	//data types (numbers vs images vs words)
	//integer
	int x;    //declaring a variable
	x = 7;    //defining a variable (initializing the variable)
	x = 22;   //redefining a variable
	x = x + 10; // = is assignment/storage operator Right to left
	x = x - 3;
	x = x * 2;
	x = x / 5;  //division is a forward slash
	
	bool b; //boolean   2 values 1 or 0 
	//integral datatypes - only whole numbers
	char c; //1 byte 256   -128 to 127  -2^7 to 2^7-1
	short s;//2 Bytes 65,000 unique symbols
	int i;  //4 Byte 32 bits 2^32 unique symbols
			//largest number -(2)^31 to 2^31-1  
	long l; //>=int
			//8 Bytes 2^63-1 maximum number 
	i = 5972;//truncates the decimal

	//floating-point datatypes
	float f = 1234.567; //4 byte accuracy 7 sig figures
	double d = 1231.134151; //8 bytes 15 sig figures
	unsigned int k; //unisigned means no negative

	//strings will be covered more in chapter 7
	string str = "Hello my name is Jay";


	system("Pause");//only windows
	return 0; //end the program
}