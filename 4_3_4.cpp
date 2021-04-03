#include<stdio.h>
int main(){
	int n,i,j,d,s=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		s=0;
		for(j=1;j<i;j++){
			if(i%j==0)
			s+=j;
		}
		if(s==i)
		printf("%d\n",i);
		
		
	}
	return 0;
	
	
	
	
	
	
}
