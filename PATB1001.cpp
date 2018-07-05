// Source : <算法笔记>
// Author : Si Chen
// Date   : 2018-07-05


/******************************************************
今天终于开始了第一次刷算法题、使用github，值得纪念
夜已深，先占个坑，明天来填。

*********************************************************/
#include "stdafx.h"
#include <cstdio>
#pragma warning(disable:4996)


int main() {
	int n, step = 0;
	scanf("%d", &n);
	while (n != 1) {
		if (n % 2 == 0) {
			n /= 2;
			++step;
			continue;
		}
		if (n % 2 == 1) {
			n = (3 * n + 1) / 2;
			++step;
			continue;
		}
		
	}
	printf("%d", step);
	return 0;
}
