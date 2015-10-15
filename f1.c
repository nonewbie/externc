#include <stdio.h>
extern int count;
void func1(){
	printf("in file: %s\n",__FILE__);
	printf("before : count = %d\n",count);
	count++;
	printf("after : count = %d\n",count);
	return ;
}
