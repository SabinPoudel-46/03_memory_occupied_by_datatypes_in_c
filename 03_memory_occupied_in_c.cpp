#include<stdio.h>
int main () 
{
	/*
	memory occupied by various data types in c
	this can be known by using sizeof function
	size is in bytes
	*/
	
	int a;
	float b=2.3;
	char c='a';
	double d;
	printf("memory occupied by int is %d\n",sizeof(int)); //sizeof(a) can also be written
	printf("memory occupied by float is %d\n",sizeof(b));
	printf("memory occupied by character is %d\n",sizeof(c));
	printf("memory occupied by double is %d\n",sizeof(d));
	
	
	
	
	
	return 0;
}
