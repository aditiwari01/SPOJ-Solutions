#include<stdio.h>
#include<math.h>
void main(){
	int t;
	double n;
	scanf("%d",&t);
	while(t--){
		scanf("%lf",&n);
		printf("%d\n",(int)ceil(n/2));
	}
}
