#include <stdio.h>
int main(){
	int a1,a2,a3,b1,b2,b3;
	scanf("%d%d%d%d%d%d",&a1,&b1,&a2,&b2,&a3,&b3);
	int e1 = 0;
	int p1 = 0;
	e1 += a1;
	p1 += e1 * b1;
	e1 += a2;
	p1 += e1 * b2;
	e1 += a3;
	p1 += e1 * b3;
	
	int e2 = 0;
	int p2 = 0;
	e2 += a2;
	p2 += e2 * b2;
	e2 += a3;
	p2 += e2 * b3;
	e2 += a1;
	p2 += e2 * b1;
	
	int e3 = 0;
	int p3 = 0;
	e3 += a3;
	p3 += e3 * b3;
	e3 += a2;
	p3 += e3 * b2;
	e3 += a1;
	p3 += e3 * b1;
	
	if(p1 >= p2 && p1 >= p3) printf("1\n");
	else if(p2 >= p1 && p2 >= p3) printf("2\n");
	else if(p3 >= p1 && p3 >= p2) printf("3\n");
	return 0;
}