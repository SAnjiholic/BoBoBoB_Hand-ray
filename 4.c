#include <stdlib.h>
#include <stdio.h>

int foo(int a){
	int v1 = a;
	if (v1 < 0){ exit(0);}
	else if (v1 == 1 || v1 != 2){ return 1;}
	//else if (v2 == 2){ return 1;}
	//v1--;
	else{
	return foo(v1-1) + foo(v1-2);
	}
}

int main(){
	printf("%d\n",foo(10));
}
	
