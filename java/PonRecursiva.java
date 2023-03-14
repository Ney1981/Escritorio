public class PonRecursiva {
    public int potencia(int a, int b){
        if(a==1){
            return 1;
            
        } 
        if(b==1){
            return a;
        }return a * potencia(a,b-1);
    }
    
}