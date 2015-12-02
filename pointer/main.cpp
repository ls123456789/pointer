//
//  main.cpp
//  test
//
//  Created by 梁爽 on 15/11/11.
//  Copyright (c) 2015年 梁爽. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[4];
    int *p;
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;
    p = a;
    printf("&a[0] = %x &a[1] = %x &a[2] = %x &a[3] = %x a = %x\n",&a[0],&a[1],&a[2],&a[3],a);
    printf("p = %x  *p = %d  *a = %d &p = %x\n",p,*p,*a,&p);
    printf("p[0] = %d  p[1] = %d\n",p[0],p[1]);
    printf("a[1] = %d\n",*(a+1));
    printf("p[1] = %d\n",*(p+1));
    return 0;
}