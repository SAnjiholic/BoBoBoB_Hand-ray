#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
	int c = 0;
	int d = 0;
	if(argc != 2){ exit(0);}
	//	c = 1;
	for(c = 1; c <= 9; c++){
		//if (c >= 9){
		//	d = 1;
		for(d = 1; d <= 9; d++){
			//if (d >= 9){
			c *= d;
			printf("%d\n",c);
		}
		}
	}

