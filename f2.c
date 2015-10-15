//#include "f1.c"
#include <stdio.h>
#include <stdlib.h>
int count = 0 ;
int main()
{
	printf("in file: %s\n",__FILE__);
	printf("before : count = %d\n",count);
	count ++;
	printf("after : count = %d\n",count);
	func1();
}
