/******************************************************************************
TAMYRIS SILVA RODRIGUES DOS SANTOS GRR20242732

Crie uma struct para representar um ponto no plano cartesiano:

Coordenada x (float)
Coordenada y (float)

Observação: Crie uma função (float calcularDistancia(Ponto p1, Ponto p2)) 
para calcular a distância (dAB) entre dois pontos. 
Crie outra função (int formaTriangulo(Ponto p1, Ponto p2, Ponto p3)) 
para verificar se três pontos formam um triângulo. 
Solicitar ao usuário que informe três pontos cartesianos.

       Para calcular a distância entre dois pontos:    

       Para verificar se três pontos formam um triângulo, 
       verificar se as três expressões relacionadas à distância 
       entre os pontos são verdadeiras:  

		d1 + d2 > d3 e d2 + d3 > d1 e d3 + d1 > d2

*******************************************************************************/
#include <stdio.h>
#include <math.h> // para funções matemáticas

struct ponto_no_plano {
    float x;
    float y;
};

// FUNÇÃO para calcular a distância entre dois pontos.
float calcularDistancia(struct ponto_no_plano p1, struct ponto_no_plano p2){
    float resultado; //variável resultado
                //Para calcular a distância entre dois pontos:

                //d = RAIZ (x2−x1)*2 + (y2−y1)*2
 
                //A função pow vem da biblioteca math.h e é utilizada para elevar um número a uma potência.
                //A função sqrt também faz parte da biblioteca math.h e calcula a raiz quadrada de um número.
    resultado = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    return resultado; // Retorna o resultado
}

// FUNÇÃO para verificar se três pontos formam um triângulo.
int formaTriangulo(float d1, float d2, float d3) {
    
    // Para verificar se três pontos formam um triângulo, verificar se as três expressões relacionadas à distância entre os pontos são verdadeiras:
    
    if ((d1 + d2) > d3 && (d2 + d3) > d1 && (d1 + d3) > d2) {
        printf("Os três pontos formam um triângulo.\n");
        return 1; // Retorna 1 se formar triângulo
    } else {
        printf("Os três pontos não formam um triângulo.\n");
        return 0; // Retorna 0 se não formar triângulo
    }
}

int main() {
    
    struct ponto_no_plano A, B, C; // Declaração dos pontos A, B e C

    char continuar = ' ';
    while (1) {
        // ponto A
        printf("Informe as coordenadas do ponto A (Xa Ya): ");
        scanf("%f %f", &A.x, &A.y);

        // ponto B
        printf("Informe as coordenadas do ponto B (Xb Yb): ");
        scanf("%f %f", &B.x, &B.y);

        // ponto C
        printf("Informe as coordenadas do ponto C (Xc Yc): ");
        scanf("%f %f", &C.x, &C.y);

        // Calcular as distâncias
        float d1_A_B = calcularDistancia(A,B);
        float d2_A_C = calcularDistancia(A,C);
        float d3_B_C = calcularDistancia(B,C);

        //distâncias
        printf("A distância entre A e B: %.2f\n", d1_A_B);
        printf("A distância entre A e C: %.2f\n", d2_A_C);
        printf("A distância entre B e C: %.2f\n", d3_B_C);

        //forma triângulo sim ou não
        formaTriangulo(d1_A_B, d2_A_C, d3_B_C);
        
        printf("Deseja continuar? (s ou n): ");
        scanf(" %c", &continuar); // Corrigido aqui
        if(continuar == 'n'){
            break;
        }
    }

    return 0;
}


