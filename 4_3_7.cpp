#include<stdio.h>
int main(){
	int n=1;
	float q,s=0.0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		
		q+=i;
		s+=1/q;
	}
	printf("%f",s);
	
	
	
}
