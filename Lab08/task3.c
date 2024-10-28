#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int xCord, yCord;
	srand(time(0));
	xCord = rand() % 10;
	yCord = rand() % 10;

	for(int i=0 ; i<10; i++){
		for(int j=0 ; j<10 ;j++){
			if(i==xCord && j ==yCord){
				printf("Hurrah!, I have found the hidden treasure\n");
				printf("The treasure was found at (%d,%d)\n", i , j);
				return 0;
			}

		}
	}
	return 0;

}
