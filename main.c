//
//  main.c
//  score ranking
//
//  Created by 20161104584 on 17/6/12.
//  Copyright © 2017年 20161104584. All rights reserved.
//

#include <stdio.h>

struct student
{
    char name[20];
    int add;
    int number;
};
int main()
{
    int n,i,j;
    struct student s[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%s%d",s[i].name,&s[i].add);
    s[i].number=1;
    }
for(j=0;j<n;j++)
{
    for(i=0;i<n;i++)
    {
        if(s[j].add>s[i].add)
        {
            s[i].number++;
        }
    }
}
for(i=0;i<n;i++)
{
    printf("%s%d%d\n",s[i].name,s[i].add,s[i].number);
}
return 0;
}
