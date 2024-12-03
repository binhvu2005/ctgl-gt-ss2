 #include <stdio.h>
 int main (){
 	int n,a,sum;
 	scanf("%d",&n);
 	int x,y;
 	int arr[n];
 	for(int i =0 ; i<n;i++){
 		scanf("%d",&a);
 		arr[i]=a;
	 };
	int flag = 0;
	printf("tong can tim la:");
	scanf("%d",&sum);
	for(int i =0 ; i<n;i++){
 		for(int j=1;j<n;j++){
 			if(arr[i]+arr[j]==sum){
 				x= arr[i];
 				y= arr[j];
 				flag=1;
 				break;
			 }
		 }
	};
	if(flag=1){
		printf("%d+%d=%d",x,y,sum);
	}else{
		printf("khong thay so de tong = %d",sum);
	}
 }
