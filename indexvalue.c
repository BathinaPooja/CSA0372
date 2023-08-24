#include<stdio.h>
int main() 
{ 
    int arr[] = {20, 30, 10, 2, 10, 20, 30, 11}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
	int i,j;
    int visited[n];
 
    for(i=0; i < n; i++){
        
        // only if unvisited
        if(visited[i] == 0){
            int count = 1;
          
            for(j = 0; j < i; j++) { 
				
				if(arr[i] == arr[j]) 
				{ 
					count++; 
					visited[j] = 1; 
				} 
			}
			
            if(count > 1)
                printf("%d ",i);
        }
    }
   return 0; 
}
