#include <stdio.h>

int main(){
    int matriz[9][9] = {
        
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 3, 3, 3, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0}

    };
    

    printf("a parte do navio na posição [7][7] é %d \n", matriz[7][7]); 
    printf("a parte do navio na posição [7][6] é %d \n", matriz[7][6]);
    printf("a parte do navio na posição [7][5] é %d \n", matriz[7][5]);
   
   
    
    return (0);
}
    
