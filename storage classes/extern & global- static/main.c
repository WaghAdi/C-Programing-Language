#include <stdio.h>

// used for accessing a global variable of one file to other file of same program 
/*memory on ram-data 
scope -global 
lifetime -global 
default value-0
linkage-external llikage
*/


int a=10,b=20;
void main(){
add();
sub();
}