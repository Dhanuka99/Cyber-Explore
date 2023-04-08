#include<stdio.h>
 
int fibonacci(int n);
 
int main(){
	
	int number,result;
	printf("Enter Number : ");
	scanf("%d",&number);
	
	result = fibonacci(number);
	printf("Fibonacci value is: %d",result );
	
	return 0;
}


int fibonacci(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}else{
		return (fibonacci(n-1)+fibonacci(n-2));
	}

}
