#include<stdio.h>
int main(){
	int N,s,z=0;
	scanf("%d",&N);
	int q;
	for(int i=1;i<=N;i++){
		
		q=i;
		while(q>0){
		s=s+(q%10);
		q=q/10;
		}
	if(s%15==0)
z++;
	
	s=0;	

	}
	
printf("%d",z);	
	
	
}
