#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2, resultado, raiz;
    char operacao;

    while (1) {
        printf("Digite a operacao (+, -, *, /, ^ para raiz, & para potencia, q para sair):\n");
        scanf(" %c", &operacao);  // espaço antes do %c consome 'enter' anterior

        if (operacao == 'q') {
            printf("Saindo da calculadora...\n");
            break;
        }

        if (operacao == '^') {
            printf("Digite o numero para calcular a raiz quadrada:\n");
            scanf("%lf", &num1);
            if (num1 < 0) {
                printf("Erro: raiz de numero negativo nao existe nos reais.\n");
            } else {
                raiz = sqrt(num1);
                printf("A raiz quadrada de %.2lf eh %.2lf\n", num1, raiz);
            }
        } else if (operacao == '+' || operacao == '-' || operacao == '*' || 
                   operacao == '/' || operacao == '&') {
            printf("Digite dois numeros:\n");
            scanf("%lf %lf", &num1, &num2);

            switch (operacao) {
                case '+':
                    resultado = num1 + num2;
                    printf("O resultado da adicao eh: %.2lf\n", resultado);
                    break;

                case '-':
                    resultado = num1 - num2;
                    printf("O resultado da subtracao eh: %.2lf\n", resultado);
                    break;

                case '*':
                    resultado = num1 * num2;
                    printf("O resultado da multiplicacao eh: %.2lf\n", resultado);
                    break;

                case '/':
                    if (num2 != 0) {
                        resultado = num1 / num2;
                        printf("O resultado da divisao eh: %.2lf\n", resultado);
                    } else {
                        printf("Erro: divisao por zero.\n");
                    }
                    break;

                case '&':
                    resultado = pow(num1, num2);
                    printf("O resultado de %.2lf elevado a %.2lf eh %.2lf\n", num1, num2, resultado);
                    break;
            }
        } else {
            printf("Operacao invalida. Tente novamente.\n");
        }
    }

    return 0;
}
