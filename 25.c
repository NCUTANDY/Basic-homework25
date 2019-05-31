#include<stdio.h>

#include<stdlib.h>

int main(void)

{

	printf("-------------------------------------------------\n");  



	printf("             輸出整個陣列的值              \n");



	printf("-------------------------------------------------\n");   



	int num,num1;

	int *ch[4];

	int array[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

	for(num=0;num<4;num++){

		ch[num]=array[num];

	}

	for(num=0;num<4;num++){

		for(num1=0;num1<3;num1++){

		printf("%3d", *(ch[num]+num1));

		}

		printf("\n");

	}

	system("pause");

	return 0;

} 
