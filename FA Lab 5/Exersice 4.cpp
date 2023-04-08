#include<stdio.h>
int f(int x,int y);

int main(){
	//declaration of variables
	int value,x,y;
	
	printf("Enter Number X: ");
	scanf("%d",&x);
	
	printf("Enter Number Y: ");
	scanf("%d",&y);
	value = f(x,y);

	printf(" result = %d ",value);

	return 0;
}

int f(int x,int y){
	if(y==0 || y==x)
		return 1;
	else
		return (f(x-1,y) + f(x-1,y-1));
	}




