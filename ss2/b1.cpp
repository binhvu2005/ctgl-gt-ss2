 #include <stdio.h>
 int main (){
 	int n,a;
 	scanf("%d",&n);
 	int arr[n];
 	for(int i =0 ; i<n;i++){
 		scanf("%d",&a);
 		arr[i]=a;
	 };
	int max = arr[0];
	for(int i =1 ; i<n;i++){
 		max = max > arr[i] ? max : arr[i];
	};
	printf("so lon nhat la: %d",max);
 }
