#include<stdio.h>
int f(int n);

int main(){
	//declaration of variables
	int value,number;
	
	printf("Enter Number : ");
	scanf("%d",&number);
	value = f(number);

	printf(" result = %d ",value);

	return 0;
}

int f(int n){
	if(n<=1)
		return n;
		
	else if(n%2==0)
		return (n+f(n/2));
		
	else
		return (f((n+1)/2) + f((n-1)/2));
	
	}




