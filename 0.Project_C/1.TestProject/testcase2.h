/*************************************************************************
	> File Name: testcase2.h
	> Author: Lifaqiang
	> Mail: 576245069@qq.com 
	> Created Time: 日 10/ 7 11:19:11 2018
 ************************************************************************/

#ifndef _TESTCASE2_H
#define _TESTCASE2_H
#include "add.h"
#include "test.h"

TEST(test, add_func) {
    EXPECT(add(1, 2), 3);
    EXPECT(add(3, 4), 7);
    EXPECT(add(2, 2), 4);
}


#endif
