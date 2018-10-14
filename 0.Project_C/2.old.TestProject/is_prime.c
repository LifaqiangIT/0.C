/*************************************************************************
	> File Name: is_prime.c
	> Author: Lifaqiang
	> Mail: 576245069@qq.com 
	> Created Time: 日 10/ 7 11:30:49 2018
 ************************************************************************/

#include <stdio.h>
#include "test.h"

int is_prime(int x) {
    if (x <= 1) return 0;
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) return 0;
    }
    return 1;
}
