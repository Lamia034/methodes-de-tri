#include<stdio.h>
void tri_insert(int t[],int n){
	int tmp,i,j=0,elem;
	for(i=0;i<n;i++){
		elem=t[i];
		for(j=i;j>0 && t[j-1]>elem;j--){
			t[j]=t[j-1];
		}
			t[j]=elem;
	}
}

int main(){
	int n,t[n],i;
	printf("entrer size du tab:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("entrer t[%d]:",i);
		scanf("%d",&t[i]);
	}
	tri_insert(t,n);
	for(i=0;i<n;i++){
			for(i=0;i<n;i++){
		printf("\n t[%d]: %d",i,t[i]);
	}
	}
}
