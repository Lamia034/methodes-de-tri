#include<stdio.h>
void tri_bull(int t[],int n){
	int tmp,i=0,j;
	while(i<n){
		for(j=i+1;j<n;j++){
			if(t[j]<t[i]){
				tmp=t[j];
				t[j]=t[i];
				t[i]=tmp;
			}
		
		}
		i++;
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
	tri_bull(t,n);
	for(i=0;i<n;i++){
			for(i=0;i<n;i++){
		printf("\n t[%d]: %d",i,t[i]);
	}
	}
}
