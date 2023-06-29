#include <stdio.h>
#include <locale.h>

int main(){
  
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Vari�veis que v�o armazenar as informa��es necess�rias.

    long long int cartao, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16, n1b, n2b, n3b, n4b, n5b, n6b, n7b, n8b, n9b, n10b, n11b, n12b, n13b, n14b, n15b, n16b, mastercard, dinners_club, discover1, discover2, jcb, american_express;
    int d1, d3, d5, d7, d9, d11, d13, d15, soma, resultado;
    char fim;

    // Pede para o usu�rio digitar o n�mero do cart�o, em seguida l� esse n�mero e guarda na vari�vel "cartao".

    printf("\nDigite o n�mero do cart�o (sem espa�os): ");
    scanf("%lld", &cartao);

    // Separa cada digito individualmente e guarda em sua respectiva vari�vel: digito 1 na vari�vel "n1", digito 2 na vari�vel "n2".

    n1 = cartao / 1000000000000000; // Calcula qual o primeiro digito;
    n1b = cartao; // N�mero do cart�o completo.

    n2 = (n1b - (n1 * 1000000000000000)) / 100000000000000; // Calcula qual o segundo d�gito;
    n2b = cartao - (n1 * 1000000000000000); // N�mero do cart�o sem o primeiro d�gito.

    n3 = (n2b - (n2 * 100000000000000)) / 10000000000000; // Calcula qual o terceiro d�gito;
    n3b = n2b - (n2 * 100000000000000); // N�mero do cart�o sem o segundo d�gito.

    n4 = (n3b - (n3 * 10000000000000)) / 1000000000000; // Calcula qual o quarto d�gito;
    n4b = n3b - (n3 * 10000000000000); // N�mero do cart�o sem o terceiro d�gito.

    n5 = (n4b - (n4 * 1000000000000)) / 100000000000; // Calcula qual o quinto d�gito;
    n5b = n4b - (n4 * 1000000000000); // N�mero do cart�o sem o quarto d�gito.

    n6 = (n5b - (n5 * 100000000000)) / 10000000000; // Calcula qual o sexto d�gito;
    n6b = n5b - (n5 * 100000000000); // N�mero do cart�o sem o quinto d�gito.

    n7 = (n6b - (n6 * 10000000000)) / 1000000000; // Calcula qual o s�timo d�gito;
    n7b = n6b - (n6 * 10000000000); // N�mero do cart�o sem o sexto d�gito.

    n8 = (n7b - (n7 * 1000000000)) / 100000000; // Calcula qual o oitavo d�gito;
    n8b = n7b - (n7 * 1000000000); // N�mero do cart�o sem o s�timo d�gito.
    
    n9 = (n8b - (n8 * 100000000)) / 10000000; // Calcula qual o nono d�gito;
    n9b = n8b - (n8 * 100000000); // N�mero do cart�o sem o oitavo d�gito.

    n10 = (n9b - (n9 * 10000000)) / 1000000; // Calcula qual o d�cimo d�gito;
    n10b = n9b - (n9 * 10000000); // N�mero do cart�o sem o nono d�gito.

    n11 = (n10b - (n10 * 1000000)) / 100000; // Calcula qual o d�cimo primeiro d�gito;
    n11b = n10b - (n10 * 1000000); // N�mero do cart�o sem o d�cimo d�gito.

    n12 = (n11b - (n11 * 100000)) / 10000; // Calcula qual o d�cimo segundo d�gito;
    n12b = n11b - (n11 * 100000); // N�mero do cart�o sem o d�cimo primeiro d�gito.
    
    n13 = (n12b - (n12 * 10000)) / 1000; // Calcula qual o d�cimo terceiro d�gito;
    n13b = n12b - (n12 * 10000); // N�mero do cart�o sem o d�cimo segundo d�gito.

    n14 = (n13b - (n13 * 1000)) / 100; // Calcula qual o d�cimo quarto d�gito;
    n14b = n13b - (n13 * 1000); // N�mero do cart�o sem o d�cimo terceiro d�gito.

    n15 = (n14b - (n14 * 100)) / 10; // Calcula qual o d�cimo quinto d�gito;
    n15b = n14b - (n14 * 100); // N�mero do cart�o sem o d�cimo quarto d�gito.
    
    n16 = (n15b - (n15 * 10)) / 1; // Calcula qual o d�cimo sexto d�gito;
    n16b = n15b - (n15 * 10); // N�mero do cart�o sem o d�cimo quinto d�gito.

    // Imprime cada d�gito separadamente.

    /*printf("\nn1 = %d", n1);
    printf("\nn2 = %d", n2);
    printf("\nn3 = %d", n3);
    printf("\nn4 = %d", n4);
    printf("\nn5 = %d", n5);
    printf("\nn6 = %d", n6);
    printf("\nn7 = %d", n7);
    printf("\nn8 = %d", n8);
    printf("\nn9 = %d", n9);
    printf("\nn10 = %d", n10);
    printf("\nn11 = %d", n11);
    printf("\nn12 = %d", n12);
    printf("\nn13 = %d", n13);
    printf("\nn14 = %d", n14);
    printf("\nn15 = %d", n15);
    printf("\nn16 = %d", n16);*/

    // Multiplica os 1�, 3�, 5�, 7�, 9�, 11�, 13�, 15� d�gitos por 2 (cada um deles)...e caso o resultado seja maior que 9, ocorre a soma dos dois d�gitos (do resultado) e o resultado dessa soma � atribu�do as vari�veis "d1, d3, d5...".

    d1 = n1 * 2;
    if (d1 > 9){

        d1 = (d1 / 10) + (d1 - 10);
        
    }

    d3 = n3 * 2;
    if (d3 > 9){

        d3 = (d3 / 10) + (d3 - 10);
        
    }

    d5 = n5 * 2;
    if (d5 > 9){

        d5 = (d5 / 10) + (d5 - 10);
        
    }

    d7 = n7 * 2;
    if (d7 > 9){

        d7 = (d7 / 10) + (d7 - 10);
        
    }

    d9 = n9 * 2;
    if (d9 > 9){

        d9 = (d9 / 10) + (d9 - 10);
        
    }

    d11 = n11 * 2;
    if (d11 > 9){

        d11 = (d11 / 10) + (d11 - 10);
        

    }

    d13 = n13 * 2;
    if (d13 > 9){

        d13 = (d13 / 10) + (d13 - 10);
        

    }

    d15 = n15 * 2;
    if (d15 > 9){

        d15 = (d15 / 10) + (d15 - 10);
        

    }

    // Faz a soma de todos os d�gitos (tanto dos qur foram multiplicados por 2 e est�o com seus novos valores, quanto os que n�o foram).

    soma = d1 + n2 + d3 + n4 + d5 + n6 + d7 + n8 + d9 + n10 + d11 + n12 + d13 + n14 + d15 + n16;  

    // Se o resultado dessa soma terminar com 0 � um cart�o v�lido, se n�o, n�o � v�lido.

    if (soma > 100){

        resultado = (soma - 100);
        resultado = resultado - ((resultado / 10) * 10);

    } 
    else if (soma < 100){

        resultado = soma - ((soma / 10) * 10);

    }

    mastercard = (cartao - n3b) / 100000000000000; // Deixa somente os 2 primeiro d�gitos do cart�o.

    dinners_club = (cartao - n3b) / 100000000000000; // Deixa somente os 2 primeiro d�gitos do cart�o.

    discover1 = (cartao - n5b) / 1000000000000; // Deixa somente os 4 primeiro d�gitos do cart�o
    discover2 = (cartao - n3b) / 100000000000000; // Deixa somente os 2 primeiro d�gitos do cart�o.

    jcb = (cartao - n3b) / 100000000000000; // Deixa somente os 2 primeiro d�gitos do cart�o.

    american_express = (cartao - n4b) / 10000000000000; // Deixa somente os 2 primeiro d�gitos do cart�o.

    // Identifica qual a marca (emissor) do cart�o com base nos primeiros d�gitos

    printf("---------------------------------------------------------");

    if (n1 == 4){

        printf("\n\t\t  Emissor(a): Visa");

    }
    else if (mastercard == 51){

        printf("\n\t\t  Emissor(a): Mastercard");

    }
    else if (mastercard == 52){

        printf("\n\t\t  Emissor(a): Mastercard");

    }
    else if (mastercard == 53){

        printf("\n\t\t  Emissor(a): Mastercard");

    }
    else if (mastercard == 54){
 
        printf("\n\t\t  Emissor(a): Mastercard");

    }
    else if (mastercard == 55){

        printf("\n\t\t  Emissor(a): Mastercard");

    }
    else if (dinners_club == 36){

        printf("\n\t\t  Emissor(a): Dinners Club");

    }
    else if (dinners_club == 38){

        printf("\n\t\t  Emissor(a): Dinners Club");

    }
    else if (discover1 == 6011){

        printf("\n\t\t  Emissor(a): Discover");

    }
    else if (discover2 == 65){

        printf("\n\t\t  Emissor(a): Discover");

    }
    else if (jcb == 35){

        printf("\n\t\t  Emissor(a): JCB");

    }
    else if (american_express == 34){

        printf("\n\t\t  Emissor(a): American Express");

    }
    else if (american_express == 37){

        printf("\n\t\t  Emissor(a): American Express");

    }

    // Verifica se o cart�o � v�lido, comparando o ultimo d�gito com 0.

    if (resultado == 0){

        printf("\n\n\t\t  !!! CART�O V�LIDO !!!\n\n");

    }
    else{

        printf("\n\n\t\t  XXX CART�O INV�LIDO XXX\n\n");

    }

    // 5321184449386070 Master card
    // 6011864835520076 Discover
    // 3589378401884120 JBC
    // 374868078202270 American Express
    // 348401103188489 American Express

    system("pause");

    return 0;

}
