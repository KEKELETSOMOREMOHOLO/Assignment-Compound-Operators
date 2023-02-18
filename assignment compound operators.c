#include <stdio.h>
void main() {
    int x = 10;
    int y = 10;
    
    x += y; // similar to x = x + y
    printf("x = %d\n" , x); // what is x now?
  
    x -= y; // similar to x = x - y
    printf("x = %d\n" , x); // what is x now?
  
    x *= y; // similar to x = x * y
    printf("x = %d\n" , x); // what is x now?
  
    x /= y; // similar to x = x / y
    printf("x = %d\n" , x); // what is x now?
  
    x %= y; // similar to x = x % y
    printf("x = %d\n" , x); // what is x now?
    
}
