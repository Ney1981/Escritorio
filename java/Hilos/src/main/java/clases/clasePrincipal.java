package clases;

public class clasePrincipal {

    public static void main(String[] args) {

        Proceso1 extencion = new Proceso1();
        Thread implementacion = new Thread(new Proceso2());

        extencion.start();
        implementacion.start();
    }
}
