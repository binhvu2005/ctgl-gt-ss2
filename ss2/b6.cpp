 #include <stdio.h>
 int main (){
 	int n,m,a;
 	scanf("%d",&n);
 	int arr[n];
 
 	int result[m+n];
 	for(int i =0 ; i<n;i++){
 		scanf("%d",&a);
 		arr[i]=a;
 		result[i]=a;
	 };
	scanf("%d",&m);
	int arr2[m];
	 for(int i =0 ; i<m;i++){
 		scanf("%d",&a);
 		arr2[i]=a;
 		result[i+n]=a;
	 };
    	printf("result= ");
	for(int i =0 ; i<n+m;i++){
 		printf("%d ",result[i]);
	};
	
 }
