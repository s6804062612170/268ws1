#include<stdio.h>

int main(){
	int n1,n2,n3,n4;
	
	scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
	int max1 =(n1>n2)?n1:n2;
	int min1 =(n1>n2)?n2:n1;
	int max2 =(n3>n4)?n3:n4;
	int min2 =(n3>n4)?n4:n3;
	int maxa =(max1>max2)?((min1>max2)?min1:max2):((max1>min2)?max1:min2);
	printf("%d",maxa);
	
	return 0;
}
