#include<stdio.h>
int isPrimeNum(int x);

	int main(){
		int a,b,c=0;
		scanf("%d %d",&a,&b);
		for(int i=a+1;i<b;i++){
		if(isPrimeNum(i)){	
			c+=i;		
		}
	}
	 printf("%d",c);
		

} 

	int isPrimeNum(int x){
		
		for(int j=2;j<=x/2;j++){
			
			if(x%j==0){
				
				return 0;
			}		
		}		
		return 1;		
	}
	


