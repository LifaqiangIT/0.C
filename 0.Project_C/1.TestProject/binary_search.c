/*************************************************************************
	> File Name: binary_search.c
	> Author: Lifaqiang
	> Mail: 576245069@qq.com 
	> Created Time: 日 10/ 7 18:18:28 2018
 ************************************************************************/
#include <stdio.h>
#include "test.h"

int num[8] = {1, 4, 5, 8, 9, 14, 20, 23};

int binary_search(int head, int tail, int x) {
    head -= 1;
    tail -= 1;
    int mid = (head + tail) / 2;
    while (head < tail && num[mid] != x) {
        if (num[mid] > x) {
            tail = mid;
        } else if (num[mid] < x) {
            head = mid + 1;
        }
        mid = (head + tail) / 2;
    }
    if (num[mid] == x) {
        return mid + 1;
    }
    return 0;
}

