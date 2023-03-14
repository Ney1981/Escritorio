
package com.mycompany.entrada_y_salida_de_datos_por_consola;

import java.util.Scanner;

public class Entrada_y_salida_de_datos_por_consola {

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int num1;
        float num2;
        double num3;
        String cadena;
        char letra;
        
        System.out.print("Digite la cadena: ");
        cadena = entrada.nextLine();
        
        System.out.print("Digite una letra: ");
        letra = entrada.next().charAt(0);
        
        System.out.print("Digite un numero entero: ");
        num1 = entrada.nextInt();
        
        System.out.print("Digite el numero decimal: ");
        num2 = entrada.nextFloat();
        
        System.out.print("Digite el nuemro decimal: ");
        num3 = entrada.nextDouble();
        
                System.out.println("La cadena digitada es: "+cadena);
                System.out.println("La leytra digitada es: "+letra);
                System.out.println("El numero entero es: "+num1);
                System.out.println("El numero decimal es: "+num2);
                System.out.println("El numero decimal es: "+num3);
        
    }
}