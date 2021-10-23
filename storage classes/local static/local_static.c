#include<stdio.h>
/*memory on ram-Data
default value -garbage value
scope=within function only or local scope 
lifetime:-thought functoion
linkage-no-linkage8*/





// static keyword uses for storing a local  variable in a data section of memory

// as local variable stored in a stack by default.Hence after first exection its valeu from stack frame will get destryoed 


// int like=0;
void post_like(){
    static int like=0;
     printf("address of post like are: %p\n",&like);
    like++;
    printf("post like are : %d\n",like);
}
void story_like(){
   
    static int like=0;
     printf("address of post like are: %p\n",&like);
    like++;
    printf("story like are: %d\n",like);
}
void main(){
    post_like();
    post_like();
    post_like();
    post_like();
   story_like();
   story_like();
   story_like();
   story_like();
}