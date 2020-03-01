 //
//  main.c
//  EasyHard1030A
//
//  Created by Khoi Tran on 12/2/19.
//  Copyright © 2019 Khoi Tran. All rights reserved.
//

#include <stdio.h>
int i , n , j , a[100];
int c=0 ;
int main()
{
    scanf("%d", &n );
    for( i=0 ; i<n ; i++ )
        {
            scanf("%d", &a[i]);
        }
    for(j=0;j<n;j++)
        {
            if( a[j] == 1 )
            {
                c++;
            }
            
        }

    if( c >= 1 )
    {
        printf("HARD");
    }
    else if( c==0 )
    {
        printf("EASY");
    }
    return 0;
}

