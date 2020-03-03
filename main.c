//
//  main.c
//  1154A
//
//  Created by Khoi Tran on 2/19/20.
//  Copyright © 2020 Khoi Tran. All rights reserved.
//

#include <stdio.h>
int array[4], temp;
int a, b, c;
int i,j;
int main(int argc, const char * argv[])
{
    for(i=0; i<4; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < (4 - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }//sort array
    
    a = array[3]-array[0];
    b = array[3]-array[1];
    c = array[3]-array[2];
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    return 0;
}
