#include<stdio.h>
int main() {
    int fil_rate, leak_rate, hours;
    int total = 0;
    
    printf("Enter the fill rate: ");
    scanf("%d", &fil_rate);
    printf("Enter leak rate: ");
    scanf("%d", &leak_rate);
    printf("Enter the number of hours: ");
    scanf("%d", &hours);
    for(int i=1;i<=hours;i++) {
        
            total=fil_rate*hours-leak_rate*hours;
        
        
    }
    if(total>=0){
        printf("total water %d\n",total);
    }
    else{
        printf("vaue in negative \n");
    }

    
        


    
    return 0;
}