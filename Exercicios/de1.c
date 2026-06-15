// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int count_dominant(int a[], int n){
//     char dom[1000];
//     for (int i=0; i<n; i++){
//         int soma=0;
//         for (int j=i+1; j<n; j++){
//             soma+=a[j];
//         }
//         if (a[i]>soma){
//             printf("")
//         }
//     }
//     return dom;
// }

// int main(void){
//     int n;
//     int a[10000];
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }
//     int x;
//     x=count_dominant(a, n);
//     printf("%d", x);
// }

#include <stdio.h>

// A função agora recebe um 3º argumento: o array vazio para os resultados
int obter_dominantes(int a[], int n, int dominantes[]) {
    int contador = 0; // Vai servir para contar E como índice do novo array
    
    for (int i = 0; i < n; i++) {
        int soma = 0;
        for (int j = i + 1; j < n; j++) {
            soma += a[j];
        }
        
        if (a[i] > soma) {
            // Em vez de apenas contar, GUARDAMOS o valor na nova lista
            dominantes[contador] = a[i]; 
            contador++; // Avançamos para a próxima "gaveta" vazia do novo array
        }
    }
    
    // Devolvemos a quantidade de números que guardámos
    // Isto é crucial para quem for ler a lista depois saber onde parar!
    return contador; 
}

int main(void) {
    int valores_originais[] = {10, 3, 1, 1}; // Exemplo do enunciado
    int n = 4;
    
    // 1. Criamos o nosso "saco vazio" com espaço suficiente
    int lista_resultados[100]; 
    
    // 2. Chamamos a função. Ela enche a lista e diz-nos quantos guardou.
    int quantidade_encontrada = obter_dominantes(valores_originais, n, lista_resultados);
    
    // 3. Imprimimos a nova lista, parando na quantidade exata!
    printf("Foram encontrados %d dominantes: ", quantidade_encontrada);
    for (int i = 0; i < quantidade_encontrada; i++) {
        printf("%d ", lista_resultados[i]);
    }
    printf("\n");
    
    return 0;
}
