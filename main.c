#include "function1/fun1.h"
#include "function2/fun2.h"
#undef ENABLE_HW1
 int main(){
 	unsigned long** ptr  = (unsigned long**)0;
	unsigned char x;
	unsigned int a;
	printf("��J���k��̰���:\n");
	scanf("%d",&a);
	if((a>0) & (a<=255)){
 		x=a;
		#ifdef ENABLE_HW1
		printf("�@\n");
 		fun1(x);
 		#endif
 		#ifndef ENABLE_HW1
 		printf("�G\n");
 		unsigned int i,j;
        printf("���ͳ̰��� %d * %d ����x�s�e��m�G %p\n",x,x,ptr);
        MemoryAlloc(x,&ptr);
        printf("����x�s���m�G %p\n",ptr);
        StoreResult(x,&ptr);
        printf("��J�Q�ݨ쪺��ӭ���:");
		scanf("%d %d",&i,&j);
		if(i<0 | i>x |j<0 | j>x){
 			printf("�Ʀr���s�b\n");
		}
		else{
 			printf("%d*%d = %d\n",i, j,LookupTable(&ptr, i, j, x));
 			MemoryFree(&ptr, x);
 			printf("��ƧR�����m�G %p \n",ptr);
		}
 		/*long** ptr=(long**)malloc(sizeof(long*)*x);
 		fun2(x,ptr);
 		int i,j;
 		printf("��J�Q�ݨ쪺��ӭ���:");
 		scanf("%d %d",&i,&j);
 		if(i<0 | i>x |j<0 | j>x){
 			printf("�Ʀr���s�b\n");
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
		printf("��J���Ȥ��ŦX\n");
	}

	system("pause");
	return 0;
 }
 
