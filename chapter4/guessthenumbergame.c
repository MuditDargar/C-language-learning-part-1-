#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num ,guess ,nguesses=1;
     srand(time(0));
    num= rand()%100 +1; //generates a random number between  1 to 100
    printf("the number is %d",num);
    // keep running the loop until the number is guessed
    do{
        //  printf("guess the number between 1 to 100\n");
         scanf("%d",&guess);
         if(guess>num){
            printf("lower number please\n");
         }
         else if(guess<num){
               printf("higher number is please\n");
         }
         else{
            printf("you guessed in %d attempts \n ",nguesses);
         }
        nguesses++ ;
    }while(guess != num);
    return 0;
}