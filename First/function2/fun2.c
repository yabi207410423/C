#include "fun2.h"

/*void fun2(unsigned char x,long** ptr){
	for(int i=0;i<x;i++){
		ptr[i]=(long*)malloc(sizeof(long)*x);
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			ptr[i][j]=(i+1)*(j+1);
		}
	}
}*/
void MemoryAlloc(unsigned int x, unsigned long*** ptr)
{
	unsigned int i = 0; 
	
	(*ptr) =(unsigned long**)malloc(sizeof(unsigned long**)*x);
	for (i = 0; i < x; i++)
		 (*ptr)[i] =(unsigned long*)malloc (sizeof(unsigned long*)*x);
}

void StoreResult(unsigned int x, unsigned long*** ptr)
{
	unsigned char i = 1;
	unsigned char j = 1;
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= x; j++)
		{
			(*ptr)[i-1][j-1] = i * j;
			if (j == 255) break;
		}
		if (i == 255) break;
	}
}

unsigned int LookupTable(unsigned long*** ptr, unsigned int i, unsigned int j, unsigned int MaxValue)
{
	if (i <= MaxValue && j <= MaxValue && i && j)
		return (*ptr)[i-1][j-1] ;
	else return 0;
}

void MemoryFree(unsigned long*** ptr, unsigned int x)
{
	unsigned int i = 0; 
	for (i = 0; i < x; i++)
		free((*ptr)[i]);
	free((*ptr));
	(*ptr) = NULL;
}

