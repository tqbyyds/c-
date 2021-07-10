#include<stdio.h>
int main(){
	const int size=3;
	int a[size][size];
	int i;
	int j;
	int ret=-1;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int numberx=0;
	int numbero=0;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(a[i][j]){
				numberx++;
			}
			else{
				numbero++;
			}
		}
		 if(numberx==size){
			ret=1;
			printf("xʤ"); 
	}
	else if(numbero==size){
			ret =0;
			printf("oʤ");
		}
		numbero=0;
		numberx=0;
		
	}
   
	if(ret==-1){
		 numberx=0;
	     numbero=0;
	for(j=0;j<size;j++){
		for(i=0;i<size;i++){
			if(a[i][j]){
				numberx ++;
			}
			else{
				numbero++;
			}
		}
		if(numberx==size){
			ret =1;
			printf("xʤ"); 
	}
	else if(numbero==size){
			ret = 0;
			printf("oʤ");
		}
		numberx=0;
		numbero=0;
	}
    
	}
		if(ret==-1){
			 numberx=0;
	         numbero=0;
		     for(i=0;i<size;i++){
				if(a[i][i]){
					numberx ++;
				}
				else{
					numbero++;
				}
				 
			  }
			  if(numberx==size){
			      ret=1;
				   printf("xʤ"); 
	          }
	          	else if(numbero==size){
			       ret =0;
				    printf("oʤ");
		        }
			 	
		}
		if(ret==-1){
			 numberx=0;
	         numbero=0;
		     for(i=0;i<size;i++){
				if(a[i][size-i-1]){
					numberx ++;
				}
				else{
					numbero++;
				}
			
           }
           	if(numberx==size){
			       printf("xʤ");
				   ret=1; 
	          }
	          	else if(numbero==size){
			        printf("oʤ");
			        ret=0;
		        }
			  }
			  
           if(ret==-1){
		        	printf("û����ʤ"); 
				}
          
   
   return 0;
}
