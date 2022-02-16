#include "fun1.h"

void fun1(unsigned char x){
	unsigned char i,j;
	for(i=1;i<=x;i++){
		for(j=1;j<=x;j++){
			printf("%d X %d = %d ",i,j,i*j);
			if(255==j)break;
		}
		printf("\n");
		if(255==i)break;
	}
}
