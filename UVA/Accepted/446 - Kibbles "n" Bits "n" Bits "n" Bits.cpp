#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main()
{
	int i ,j , cases  , dec1 , dec2  , result,  p ;
	char hex1[5] , hex2[5] ,sign[2] , binary1[14] , binary2[14];

	scanf("%d" , &cases);
	getchar();

	for(i = 0 ; i < cases ; i++)
	{
		scanf("%s %s %s" , hex1 , sign , hex2);
		
		dec2 = 0 ; 
		dec1 = 0 ;

		memset(binary1 , '0' , sizeof(binary1));
		memset(binary2 , '0' , sizeof(binary2));

		binary1[13] = '\0' ;
		binary2[13] = '\0' ;

		p = 0 ;
		for(j = strlen(hex1)-1 ; j >= 0 ; j--)
		{
			dec1 += ((hex1[j] >= 'A' && hex1[j] <= 'F') ? ((hex1[j]- 'A' + 10) * pow(16 , p)) : ((hex1[j] - '0') * pow(16 , p))) ;
			p++;
		}

		p = 0 ;
		
		for(j = strlen(hex2)-1 ; j >= 0 ; j--)
		{
			dec2 += ((hex2[j] >= 'A' && hex2[j] <= 'F') ? ((hex2[j]- 'A' + 10) * pow(16 , p)) : ((hex2[j] - '0') * pow(16 , p))) ;
			p++;
		}

		result = dec1;

		p = 12;
		while(result)
		{
			binary1[p] = (result % 2) + '0' ;
			result /= 2 ;
			p--;
		}

		result = dec2 ;
		p = 12;
		while(result)
		{
			binary2[p] = (result % 2) + '0' ;
			result /= 2 ;
			p--;
		}

		result = (!strcmp(sign  ,"+")) ? (dec1 + dec2 ) : (dec1 - dec2) ;

		printf("%s %s %s = %d\n", binary1 , sign , binary2 , result);
	}

}