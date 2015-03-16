#include<stdio.h>
int main ()
{
	int tst, i;
	scanf("%d",&tst);
	int my_pos[tst],lift_pos[tst],counter[tst],calculate[tst];
	for (i=0;i<tst;i++)
	{
		scanf("%d %d", &my_pos[i], &lift_pos[i]);
		if (lift_pos[i]>my_pos[i]||(lift_pos[i]==my_pos[i])) counter[i] = lift_pos[i];
		else counter[i]=2*my_pos[i]-lift_pos[i];		
		
		calculate[i]=19+4* counter[i];
	
	}
	
	for(i=0;i<tst;i++)
		printf("Case %d : %d\n",i+1,calculate[i]);
	
	return 0;
}
