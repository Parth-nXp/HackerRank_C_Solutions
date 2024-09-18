#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d){
    int comp1;
    int comp2;
    int comp3;
    
    
    if(a >= b){
        comp1 = a;
    }
    else{
        comp1 = b;
    }
    
    
    if(c >= d){
        comp2 = c;
    }
    else{
        comp2 = d;
    }
    
    if(comp1 >= comp2){
        comp3 = comp1;
    }
    else{
        comp3 = comp2;
    }
    
    return comp3;
}
