#include <stdio.h>

int main(){
    int m;
    printf("Enter marks obtained:");
    scanf("%d", &m);
    if(m > 90)
    
        printf("A Grade recieved.");
    
    else if(m > 75)
    
        printf("B Grade recieved.");
    
    else if(m > 60)
    
        printf("C Grade recieved.");
    
    else if(m > 40)
    
        printf("D Grade recieved.");
    
    else
    
        printf("Better luck next time.");
    
    return 0;
}