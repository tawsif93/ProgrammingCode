    #include <map>
    #include <iostream>
    #include <stdio.h>
    #include <sstream>
    #include <string>
    #include <queue>
    #include <algorithm>

    using namespace std ;


    int main()
    {
        int  n ;
        bool flag = false ;
        while(scanf("%d" , &n) ==1 )
        {
            map < int , int > mp ;
            int input ;

            for(int i = 0 ; i < n ; i++)
            {
                scanf("%d" , &input);
                mp[input]++;
            }
            int money ;

            scanf("%d" , &money);

            int i ;

            for(i = money/2+1 ; i > 0  ; i--)
            {
                if(i == (money-i) && mp[i] < 2)  continue;

                if(mp.find(i)!= mp.end() && mp.find(money-i) != mp.end())
                {

                    break ;
                }
            }

            if((money - i ) < i )
            {
                printf("Peter should buy books whose prices are %d and %d.\n" ,  money-i  ,  i);
            }
            else printf("Peter should buy books whose prices are %d and %d.\n" ,  i  , money - i);
            printf("\n");
        }

    }
