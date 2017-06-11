#include <stdio.h>
int main(int argc, char *argv[])
{
	for (int i=0; i<argc; i++)
		printf("%s\n", argv[i]);
	return 0;
}

/*
Type class1_cmd_parameter para1 para2 s.txt "Hello world" in terminal, 
the program will print out all these parameter like this:

class1_cmd_parameter
para1
para2
s.txt
Hello world
*/