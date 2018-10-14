/*************************************************************************
	> File Name: main.c
	> Author: Lifaqiang
	> Mail: 576245069@qq.com 
	> Created Time: 日 10/ 7 11:17:17 2018
 ************************************************************************/

#include <stdio.h>
#include "test.h"
#ifdef TEST
    #include "testcase1.h"
    #include "testcase2.h"
#endif

int main() {
    is_prime(5);
    add(3, 4);
    printf("hello world\n");
    return RUN_ALL_TEST();
}
