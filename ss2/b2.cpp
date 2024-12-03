 #include <stdio.h>
 int main (){
 	int n,a,x;
 	scanf("%d",&n);
 	int arr[n];
 	for(int i =0 ; i<n;i++){
 		scanf("%d",&a);
 		arr[i]=a;
	 };
	int flag = 0;
	printf("so can tim la:");
	scanf("%d",&x);
	for(int i =0 ; i<n;i++){
 		if(x==arr[i]){
 			flag++;
		 }
	};
	printf("so can tim xuat hien: %d lan",flag);
 }
