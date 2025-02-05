// #include<stdio.h>
// int main(){
//     int i ,j;
//     scanf("%d",&i);
//     for(j=1;j<=10;j++){
//         printf("%d X %d = %d\n",i,j,i*j);

//     }

//     return 0;
// }
#include<stdio.h>
int main(){
    int amount,count;
    scanf("%d",&amount);
    while (amount>0){
        if(amount >= 2000){
            int count = amount / 2000;
            printf("2000 : %d\n",count);
            amount -=count* 2000;
        }else if(amount >= 500){
            int count = amount / 500;
            printf("500 : %d\n",count);
            amount -=count* 500;
        }else if(amount >= 100){
            int count = amount / 100;
            printf("100 : %d\n",count);
            amount -=count* 100;
        }else if(amount >= 50){
            int count = amount / 50;
            printf("50 : %d\n",count);
            amount -=count* 50;
        }else if(amount >= 10){
            int count = amount / 10;
            printf("10 : %d\n",count);
            amount -=count* 10;
        }else if(amount >= 1){
            int count = amount / 1;
            printf("1 : %d\n",count);
            amount -=count* 1;
        }

        

    }
    
       
    return 0;
}