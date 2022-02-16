#include "function1/fun1.h"
#include "function2/fun2.h"
#undef ENABLE_HW1
 int main(){
 	unsigned long** ptr  = (unsigned long**)0;
	unsigned char x;
	unsigned int a;
	printf("輸入乘法表最高值:\n");
	scanf("%d",&a);
	if((a>0) & (a<=255)){
 		x=a;
		#ifdef ENABLE_HW1
		printf("一\n");
 		fun1(x);
 		#endif
 		#ifndef ENABLE_HW1
 		printf("二\n");
 		unsigned int i,j;
        printf("產生最高值 %d * %d 資料儲存前位置： %p\n",x,x,ptr);
        MemoryAlloc(x,&ptr);
        printf("資料儲存後位置： %p\n",ptr);
        StoreResult(x,&ptr);
        printf("輸入想看到的兩個乘數:");
		scanf("%d %d",&i,&j);
		if(i<0 | i>x |j<0 | j>x){
 			printf("數字不存在\n");
		}
		else{
 			printf("%d*%d = %d\n",i, j,LookupTable(&ptr, i, j, x));
 			MemoryFree(&ptr, x);
 			printf("資料刪除後位置： %p \n",ptr);
		}
 		/*long** ptr=(long**)malloc(sizeof(long*)*x);
 		fun2(x,ptr);
 		int i,j;
 		printf("輸入想看到的兩個乘數:");
 		scanf("%d %d",&i,&j);
 		if(i<0 | i>x |j<0 | j>x){
 			printf("數字不存在\n");
		}
		else{
 			printf("%d X %d = %d\n",i,j,ptr[i-1][j-1]);
		}
		for(int i=0;i<=x;i++){
 			free(ptr[i]);
		}
 		free(ptr);
 		*/
 		#endif
	}
	else{
		printf("輸入的值不符合\n");
	}

	system("pause");
	return 0;
 }
 
