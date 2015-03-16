#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	double a , b ; 

	while((scanf("%lf%lf" ,&a , &b))== 2) {
	     printf("%.0lf\n", pow(b , (1/a)));
	 } 
	return 0;
}
