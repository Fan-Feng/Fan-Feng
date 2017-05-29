#include<stdio.h>

int add_range(int low,int high){
	int i=0;
	int sum;
	for(i=low;i<=high;i++){
		sum=sum+i;
	}
	return sum;
}


int main(){
	int a=add_range(1,2);
	int b=add_range(1,3);
	printf("a=%d\nb=%d\n",a,b);
	return 0;
}






