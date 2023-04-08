#include<stdio.h>
int f(int x);

int main(){
	//declaration of variables
	int value,x;
	
	printf("Enter Number X: ");
	scanf("%d",&x);
	
	
	value = f(x);
	printf(" result = %d ",value);

	return 0;
}

int f(int x){

	if(x==1){
		return 1;
	}else{
		return (x+f(x-1));
	}
	
	}




