/*valor do lanche:
cod 1 = 4.0
cod 2 = 4.5
cod 3 = 5.0
cod 4 = 2.0
cod 5 = 1.5
*/

#include <stdio.h>
 
int main() {
    int cod, qnt_itens;
    float valor_total;
    
    scanf("%d %d", &cod, &qnt_itens);
    
    if (cod == 1){
        valor_total = qnt_itens * 4.0;
        
    }
    else if (cod == 2) {
        valor_total = qnt_itens * 4.5;
    }
    else if (cod == 3) {
        valor_total = qnt_itens * 5.00;
        
    }
    else if (cod == 4) {
        valor_total = qnt_itens * 2.0;
        
    }
    else if(cod == 5) {
        valor_total = qnt_itens * 1.5;
    }
    
    printf("Total: R$ %.2f\n", valor_total);
    
    return 0;
}
