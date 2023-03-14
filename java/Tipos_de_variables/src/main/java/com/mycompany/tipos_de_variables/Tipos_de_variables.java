
package com.mycompany.tipos_de_variables;

public class Tipos_de_variables {

    public static void main(String[] args) {
        
        byte  A = 12;                                       //La variable A "byte es de tipo entero" y el valor es 12 y  esta variable ocupa 8 bins de memoria.
        short B = 22354;                                    //La variable B "short es de tipo entero" y el valor es 22354 y  esta variable ocupa 16 bins de memoria.
        int   C = 1032370464;                               //La variable C "int es de tipo entero" y el valor es 1032370464 y  esta variable ocupa 32 bins de memoria.
        long  D = 1795671259;                               //La variable D "long es de tipo entero" y el valor es 1795671259 y  esta variable ocupa 64 bins de memoria.
        
        float E = 2.14588f;                                 //La variable E "float es de tipo decimal" y el valor es 2.14588f y  esta variable ocupa 32 bins de memoria.
        double F = 5.487964;                                //La variable F "double es de tipo decimal" y el valor es 5.487964 y  esta variable ocupa 64 bins de memoria.
                    
        char caracter = 'a';                                //La variable caracter "char es de tipo caracter " el caracter puede ser de tipo alfanumerico.
        boolean verdadero = true;
        boolean falso = false;
        
        System.out.println("El numero entero es:"+ A);      //Imprimimos o mostramos en consola "El numero entero es: 12".
        System.out.println("El numero entero es:"+ B);      //Imprimimos o mostramos en consola "El numero entero es: 22354".
        System.out.println("El numero entero es:"+ C);      //Imprimimos o mostramos en consola "El numero entero es: 1032370464".
        System.out.println("El nuemro entreo es:"+ D);      //Imprimimos o mostramos en consola "El numero entero es: 1795671259".
        System.out.println("El nuemro decimal es:"+ E);     //Imprimimos o mostramos en consola "El numero decimal es: 2.14588".
        System.out.println("El nuemro decimal es:"+ F);     //Imprimimos o mostramos en consola "El numero decimal es: 5.487964".
        System.out.println("El caracte es:"+ caracter);     //Imprimimos o mostramos en consola "El caracter es: a".
        System.out.println("La respuesta es:"+ verdadero);  //Imprimimos o mostramos en consola "La respuesta es: true".
        System.out.println("La respueta es:"+ falso);       //Imprimimos o mostramos en consola "La respuesta es: false".
    
    }
}
