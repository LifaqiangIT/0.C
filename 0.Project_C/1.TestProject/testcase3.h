/*************************************************************************
	> File Name: testcase3.h
	> Author: Lifaqiang
	> Mail: 576245069@qq.com 
	> Created Time: 日 10/ 7 19:42:21 2018
 ************************************************************************/

#ifndef _TESTCASE3_H
#define _TESTCASE3_H
#include "binary_search.h"
#include "test.h"

TEST(test, binary_search_func) {
    for (int i = 0; i < 100; i++) {
        EXPECT(binary_search(i, 8, 14), 6);
        //EXPECT(binary_search(1, 4, 14), 9);
    }
}
#endif
