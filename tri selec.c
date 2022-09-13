#include<stdio.h>
void tri_selec(int t[],int n){
	int j,i,tmp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(t[j]<t[i]){
				tmp=t[i];
				t[i]=t[j];
				t[j]=tmp;
			}
		}
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
	tri_selec(t,n);
	for(i=0;i<n;i++){
			for(i=0;i<n;i++){
		printf("\n t[%d]: %d",i,t[i]);
	}
	}
}
