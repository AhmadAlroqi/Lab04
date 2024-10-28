#include<stdio.h>

int main(){
	int N;
	printf("Enter number of minutes");
	scanf("%d",&N);	

	for(int i = 0 ; i<N ; i++){// for min
	    for(int j =0; j< 60; j++){// sec
	    printf("%02d : %02d \n", i , j);
		    if(i == N && j == 59) {break;}
	    }
	}

	return 0;


}
