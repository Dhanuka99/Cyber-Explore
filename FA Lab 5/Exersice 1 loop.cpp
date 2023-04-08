#include<stdio.h>

int main(){
	//declaration of variables
	int u,v,t,number;
	u=0;
	v=1;
	
	printf("Enter Number : ");
	scanf("%d",&number);
	
	//checking whether the user input 0
	if(number==0){
		printf("Fib (%d) equels to %d ",number,number);
	}else if(number==1){
		printf("Fib (%d) equels to %d ",number,number);
	}
	else{
		for(int i=1;i<number;i++){
			t = u+v;
			u = v;
			v = t;
		}
		
		printf("Fib (%d) equels to %d ",number,t);
	}
	return 0;
}



