// Source : PAT-B1032
// Author : Si Chen
// Date   : 2018-07-05

#include <cstdio>
const int max = 100000;
int main(){

	int school[max]={0};
	int n,schoolID,grade;
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%d%d",&schoolID,&grade);
		school[schoolID]+=grade;
	}

	int k,max=-1;
	
	for(int j=0;j<n;j++){
		if(school[j]>=max){
			max=school[j];
			k=j;
		}
	}
	printf("%d %d\n",k,max);
	return 0;
}
