#include<stdio.h>
int main(){
int i = 1000;

do{
	if(i%11==5)
	printf("%d\n", i);
	i++;

} while(i<2000);
	
	return 0;
}
