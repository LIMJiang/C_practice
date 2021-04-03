#include<stdio.h>
int isPrimeNum(int x);
int main(){
	int m,n,i;
	int sum=0;
	scanf("%d%d",&m,&n);
	for(i=m+1;i<n;i++){
		if (isPrimeNum(i)){
			sum+=i;
		}
	}
	
	printf("%d",sum);
} 

int isPrimeNum(int x){
	int q1,q2;
	for(q1=2;q1<=x/2;q1++){
		if(x%q1==0){
			return 0;
		}
	}
	return 1;
}
