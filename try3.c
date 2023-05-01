#include<stdio.h>

int main(){
	int x,y;
	printf("Enter the value of x and y\n");
	scanf("%d %d", &x, &y);
	(x>y)?printf("%d is greater", x):printf("%d is greater",y);
	return 0;
}
