//
//  main.c
//  Bear791A
//
//  Created by Khoi Tran on 12/16/19.
//  Copyright © 2019 Khoi Tran. All rights reserved.
//

#include <stdio.h>
int a , b ;
int count=0 ;
int main(int argc, const char * argv[])
{
    printf("Type number of a ");
    scanf("%d",&a);
    printf("Type number of b ");
    scanf("%d",&b);
    while (a <= b)
        {
            a = 3*a;
            b = 2*b;
            count++;
        }
    printf("Times of multipication %d\n", count);
    return 0;
}
