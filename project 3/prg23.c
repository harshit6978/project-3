#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,j;
	
	for(i=45; i<=49;i++){
		for(j=45; j<=i; j++){
			
			if(j%2==0){
				printf("0");
			}
			else{
				printf("1");
			}
		}
		printf("\n");	
	}
	return 0;
}
