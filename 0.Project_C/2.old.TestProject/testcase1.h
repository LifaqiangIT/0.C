/*************************************************************************
	> File Name: testcase1.h
	> Author: Lifaqiang
	> Mail: 576245069@qq.com 
	> Created Time: 日 10/ 7 11:18:12 2018
 ************************************************************************/

#ifndef _TESTCASE1_H
#define _TESTCASE1_H
#include "is_prime.h"
#include "test.h"

TEST(test, is_prime_func) {
    EXPECT(is_prime(2), 0);
    EXPECT(is_prime(-2), 0);
    EXPECT(is_prime(15), 0);
    EXPECT(is_prime(9973), 1);
}


#endif
