// Source : <算法笔记>
// Author : Si Chen
// Date   : 2018-07-06

#include<cstdio>

int main(){
	int n, x, flag=0;//此处不需定义flag，直接只用循环内的j即可
	scanf("%d", &n);
	int num[n];//题目要求1<=n<=200,故应提前定义常量const int max=210;此处有点动态定义数组的味道
	for(int i = 0; i < n; i++) scanf("%d",&num[i]);//注意num数组在输入的时候要使用&
	scanf("%d", &x);
	for(int j = 0; j < n; j++){
		if( x == num[j] ) {
			printf("%d\n", j );
			flag = 1;
			break;
		}
	}
	if(flag != 1) printf("%d\n", -1);//if(j==n) printf("-1\n");
	return 0;
}