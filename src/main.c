#include <stdio.h>
 
int main()
{
    int numero_um,numero_dois; // Armazena os números utilizados nas operações matemáticas.
    float resultado; // Armaze o resultado.
    char operador;    // Armazena o operador matemático/aritmético escolhido.
     
    printf("Insira o primeiro número: "); // Solicita o primeiro número para operação matemática.
    scanf("%d",&numero_um); // Recebe o valor digitado no teclado.
    printf("Insira o segundo número: "); // Solicita o segundo número para operação matemática.
    scanf("%d",&numero_dois); // Armazena o valor digitado no teclado.
     
    printf("Escolha uma Operacao Matematica (+,-,*,/,%): "); // Solicita o tipo de operação.
    scanf(" %c",&operador); // Armazena o valor digitado no teclado.
     
    resultado=0;
    switch(operador)    
    {
        case '+': // Caso o operador seja + ele é calculado.
            resultado=numero_um+numero_dois;
            break;
             
        case '-': // Caso o operador seja - ele é calculado.
            resultado=numero_um-numero_dois;
            break;
         
        case '*': // Caso o operador seja * ele é calculado.
            resultado=numero_um*numero_dois;
            break;
             
        case '/': // Caso o operador seja / ele é calculado.
            resultado=(float)numero_um/(float)numero_dois;
            break;
             
        case '%': // Caso o operador seja % ele é calculado.
            resultado=numero_um%numero_dois;
            break; 
        default:
            printf("Operação Inválida.\n");
    }
 
    printf("Resultado: %d %c %d = %f\n",numero_um,operador,numero_dois,resultado); // Exibe o resultado das operações Matemáticas.
    return 0;
}
