#include <stdio.h>
int main (){
    
    //Suma de los digitos de un numero.
    
    int aux=0,pdec=0; //Defino variables
    for (int i=12567;i>0;i/=10){ /*Inicializo el numero al que necesito que se sumen los digitos,
    busco que el bucle termine cuando el valor de i deje de ser mayor de 0, y que en cada iteracion i sea dividido para 10*/ 
        pdec= i%10; //En esta variable se guarda el residuo de dividirlo para 10, entonces el valor entero
        aux+=pdec; // En esta variable se va guardando y sumando cada residuo, para asi presentarlo al final  
        if (i<10){ //Estructura Condicional Doble para especificar cuando debe dejar de mostrarme al final el +
            printf("%d=",pdec);
        }else{
            printf("%d+",pdec);
        }
    }
    printf("%d\n",aux); //Indico la suma de los digitos del numero que utilize al principio
    
    //Inverso de un numero

    int num,inum=0; //Defino variables
    for(int i=123456789;i>0;i/=10){ /*Inicializo un numero al que necesite invertirlo, especifico que necesito que el bucle se detenga 
    si deja de ser mayor de 0, y que por cada iteracion se valla dividiendo para 10*/
        num=i%10; //En esta variable se guarda el residuo de dividirlo para 10, entonces el valor entero
        inum=inum*10+num; //En cada iteracion multiplico por 10 para que crezca en un digito e ir sumando el valor del residuo
    }
    printf("%d\n",inum); //Indico el numero inverso del numero que se proporciono al principio
    
    //Potencia mediante sumas sucesivas
    
    int num1=2,pot=9,resultado=1; //Defino variables
    printf("%d^%d=",num1,pot); //Indico que tipo de calculo estoy realizando
    for (int i=0;i<pot;i++){ /*Inicializo con i=0, busco que el bucle continue mientras i 
    sea menor al valor de pot, y que se le sume uno a i por cada iteracion del bucle*/ 
        if (i==(pot-1)){ //Estructura Condicional Doble para especificar cuando debe dejar de mostrarme al final el *
            printf("%d=",num1);
        } else {
            printf("%d*",num1);
        }
        resultado*=num1; //Aqui se va a ir guardando la multiplicacion de lo que se guardo anteriormente y lo multiplica por num1
    } 
    printf("%d\n",resultado); //Indico el resultado de la potencia realizada
    
    //Radicacion mediante restas sucesivas  //15625 y 6, falla para cuando num2 no es multiplo de raiz?
    
    int num2=256,raiz=4,resultado1=num2; //Defino variables 
    printf("%d^(1/%d)=",num2,raiz); //Indico que tipo de calculo estoy realizando
    for (int i=0;i<raiz;i++){/*Inicializo con i=0, busco que el bucle continue mientras i 
    sea menor al valor de raiz, y que se le sume uno a i por cada iteracion del bucle*/
        if(i==0){ /*Estructura Condicional Multiple para especificar cuando debe dejar de mostrarme al final el /,
        ademas de que a iniciar el bucle el primer valor que me exprese sea el que esta dentro de la raiz*/
            printf("%d/",num2);
        } else if (i==(raiz-1)){
            printf("%d=",raiz);
        } else {
            printf("%d/",raiz);
        }
        if(i==0){ /*Estructura Condicional Doble para que se guarde primero el numero dentro 
        de la raiz y luego se divida las veces necesarias para raiz*/
            resultado1=num2; // idea? multiplicar fraccion raiz vces?
        }else{
            resultado1/=raiz;
        }
    } 
    printf("%d\n",resultado1); //Indico el resultado de la radicacion realizada 
    
    //Serie Fibonacci
    
    int numeros=10,serie1=0,serie2=1; //Defino variables
    printf("0,1,1,2,3,5,8,13\n"); //Indico ejemplo de referencia de como es la serie Fibonacci
    for (int i=0;i!=numeros;i++){ /*Inicilizo con i=0, luego busco que el bucle se repita mientras i sea diferente 
    del valor de numeros, y que en cada iteracion a i se le sume 1*/
        if(i<1){ /*Estructura Condicional Multiple para indicar que valores necesito indicar primero en la serie, 
        para que luego un numero sea el resultado de la suma de los 2 numeros anteriores*/  
            printf("%d,",serie1); //Indico Los primeros valores de la serie
            serie1+=serie2; //Le asigno a la variable que se sume con el valor inicial de serie2 
        }else{
            if(i==(numeros-1)){ //Estructura Condicional Doble que me permite indicar hasta cuando utilizo la ,
                printf("%d", serie2); //Indico el valor que se le valla asignando a serie 2 
                serie2+=serie1; //Le asigno a la variable que se sume con el valor de serie1 
            }else{
                printf("%d,",serie2); //Indico el valor que se le valla asignando a serie 2 
                serie2+=serie1; //Le asigno a la variable que se sume con el valor de serie1
            }
        }
        serie1=serie2-serie1; /*Le asigno a serie1 que sea la resta de serie2 con el valor de serie1, 
        para asi guardar el valor anterior y luego utilizaro en las sumas*/
    }
    return 0;
}