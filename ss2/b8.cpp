 #include <stdio.h>
 int main (){
 	int n,a;
 	scanf("%d",&n);
 	int arr[n-1];
 	int sum1=0;
 	for(int i =0 ; i<n-1;i++){
 		scanf("%d",&a);
 		arr[i]=a;
 		sum1+= arr[i];
	 };
	int sum = n*(n+1)/2;

	printf("so bi thieu la: %d",sum-sum1);
 }
