#include<stdio.h>
void register_function(){
    for ( /*register Error will occure*/ int i = 0; i < 5; i++)
    {
        printf("%d and address is %p \n",i,&i);
        
    }
    
}
void main(){
    register_function();
}