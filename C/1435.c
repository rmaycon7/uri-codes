#include <stdio.h>

int main(){
	int n,i,j,b=0,m=0;
	while(n!=0){
			scanf("%d",&n);
			if(n==0){
				break;
			}
			int matriz[n][n];
			m=n;
			for(i = 0 ; i < n ; i++){
				b++;
				for( j = 0 ; j < n ; j++ ){
					matriz[i][j]=b;
				}
			}
			//------------------------------------------
			int e=0;
			m=0;m=n;b=0;
			for(i=e;i<=m;i++){
				m--;	b++;
				for (j=e;j<=m;j++){
					matriz[i][j]=b;
					matriz[j][i]=b;
				}
				e++;
			}
			//----------------------------------------
			e=0;
			m=0;m=n-1;b=0;
			for(i=m;i>=e;i--){
					b++;
				for (j=m;j>=e;j--){
					matriz[i][j]=b;
					matriz[j][i]=b;
				}
				e++;	m--;
			}
			for(i = 0 ; i < n ; i++){
				b++;
				for( j = 0 ; j < n ; j++ ){
					if(j>=0 && j<(n-1)){
						printf("%3d ",matriz[i][j]);
					}
					else{
						printf("%3d\n",matriz[i][j]);
					}
				}
				
			}
			printf("\n");
			
		}
	
	return 0;
}

