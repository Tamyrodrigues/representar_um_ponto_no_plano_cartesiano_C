# Descrição do Programa
Este programa em C permite calcular a distância entre pontos no plano cartesiano e verificar se três pontos formam um triângulo. Utilizando uma estrutura para representar um ponto, o programa oferece uma interface simples para o usuário inserir coordenadas e realizar os cálculos.

# Funcionalidades
Estrutura de Dados: Define uma struct ponto_no_plano com os seguintes campos:

- x: coordenada x (float).
- y: coordenada y (float).
- Cálculo de Distância: A função calcularDistancia recebe dois pontos e calcula a distância entre eles utilizando a fórmula:


​
 
- Verificação de Triângulo: A função formaTriangulo avalia se três distâncias calculadas satisfazem a condição de formação de um triângulo, ou seja, se a soma de quaisquer duas distâncias é maior que a terceira.

- Interação com o Usuário: O usuário é solicitado a inserir as coordenadas de três pontos. O programa calcula e exibe as distâncias entre esses pontos e informa se eles formam um triângulo.

# Código
O código é bem organizado e modular, com funções separadas para calcular distâncias e verificar a formação de triângulos. Um loop principal permite ao usuário realizar múltiplas consultas até que ele decida encerrar.

# Instruções de Uso
Compile o código utilizando um compilador C.
Execute o programa.
Informe as coordenadas dos três pontos quando solicitado.
O programa exibirá as distâncias entre os pontos e informará se eles formam um triângulo.
Você pode optar por continuar inserindo novos pontos ou encerrar o programa.
