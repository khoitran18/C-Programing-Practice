//
//  main.c
//  785A
//
//  Created by Khoi Tran on 2/15/20.
//  Copyright © 2020 Khoi Tran. All rights reserved.
//


#include <stdio.h>
#include <string.h>
int main()
{
    int j, n, sum=0;
    char a[100], c[]="Cube", d[]="Dodecahedron", t[]="Tetrahedron", o[]="Octahedron", i[]="Icosahedron";
    scanf("%d", &n);
    for(j=0;j<n;j++)
    {
        while(1)
        {
            scanf("%s", &a);
            if(strcmp(a,c)==0) {sum+=6; break;}
            else if(strcmp(a,d)==0) {sum+=12; break;}
            else if(strcmp(a,t)==0) {sum+=4; break;}
            else if(strcmp(a,o)==0) {sum+=8; break;}
            else if(strcmp(a,i)==0) {sum+=20; break;}
            else printf("The shape you've typed is incorrect, re-insert your shape!\n");
        }
    }
    printf("%d\n",sum);
}
