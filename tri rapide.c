 #include<stdio.h>
 void tri_rapide(int t[],int n){
 	int i=0,tmp,courant,pivot;
 	pivot = t[n-1];
 	courant=0;
 	while(pivot>=0 ){
 	while(courant<n){
 		if(t[courant]>pivot){
 			tmp=t[courant];
 			t[courant]=pivot;
 			pivot=tmp;
		 }
		 courant++;
	 }
	 	pivot=t[n-1-i];
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
	tri_rapide(t,n);
	for(i=0;i<n;i++){
			for(i=0;i<n;i++){
		printf("\n t[%d]: %d",i,t[i]);
	}
	}
}
