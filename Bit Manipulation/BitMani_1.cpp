//Reverse a string using bit manipulation
#include <stdio.h>
#include <stdlib.h>

unsigned int reversebits(unsigned int x){
    
unsigned int i,temp_bits,reverse_bits=0,no_of_bits;
no_of_bits=sizeof(x)*8;
for(i=0;i<no_of_bits;i++)
{
    temp_bits=(x&(1<<i));
    if(temp_bits)
    reverse_bits|=(1<<(no_of_bits-1-i));
}    
    return reverse_bits;
}


int main()
{
unsigned int x=2;
printf("%u",reversebits(x));    
return 0;
}
