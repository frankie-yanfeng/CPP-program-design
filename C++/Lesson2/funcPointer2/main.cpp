#include <stdio.h>
#include <stdlib.h>
int MyCompare( const void * elem1, const void * elem2 )
{
	unsigned int * p1, * p2;
	p1 = (unsigned int *) elem1; // “* elem1” 非法
	p2 = (unsigned int *) elem2; // “* elem2” 非法
	return (* p2 % 10) - (* p1 % 10 );
}

#define NUM 5
int main()
{
	unsigned int an[NUM] = { 8,123,11,10,4 };
	qsort( an,NUM,sizeof(unsigned int), MyCompare);
	for( int i = 0;i < NUM; i ++ )
	printf("%d ",an[i]);
	return 0;
}