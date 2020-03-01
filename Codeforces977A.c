//
//  main.c
//  Wrong Subtraction
//
//  Created by Khoi Tran on 12/2/19.
//  Copyright © 2019 Khoi Tran. All rights reserved.
//

#include <stdio.h>
long long int n , k ;
int main()
{
    scanf( "%lld", &n );
    scanf( "%lld", &k );
    for ( int i=1 ; i<=k ; i++ )
    {
        if ( n%10==0 )
        {
            n=n/10;
        }
        else
        {
            n=n-1;
        }
    }
    printf("%lld\n",n);
}

