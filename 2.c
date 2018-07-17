#include <stdio.h>

int foo(int a,int b,int c){
	int ret;
	ret = a+b+c;
	return ret;
}

int main(){
	int a = 0;	
	char buf1[1024]={0,};
	foo(1,2,10);
	printf("%d",foo(5,1,2));
	return 0;
}


