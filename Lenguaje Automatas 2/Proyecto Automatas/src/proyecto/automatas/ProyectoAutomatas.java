/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package proyecto.automatas;
import java.util.Scanner;
/**
 *
 * @author Luis Enrique Reyes V
 */
public class ProyectoAutomatas {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       Jlista lista = new Jlista();
       String exprecion;
       int x;
       char sim;
       Scanner escaner = new Scanner(System.in);
       System.out.println("\nIngrese las variables de tipo entero(separados por una coma):\nint ");
       exprecion=escaner.nextLine();
       x=exprecion.length();
       for(int i=0;i<x;i++){
           sim=exprecion.charAt(i);
           if(sim!=','){
           lista.Dinserta(sim, "int");}
       }
       System.out.println("\nIngrese las variables de tipo flotante(separados por una coma):\nfloat ");
       exprecion=escaner.nextLine();
       x=exprecion.length();
       for(int i=0;i<x;i++){
           sim=exprecion.charAt(i);
           if(sim!=','){
           lista.Dinserta(sim, "float");}
       }
       System.out.println("\nIngrese la exprecion a evaluar:\n");
       exprecion=escaner.nextLine();
       x=exprecion.length();
       for(int i=0;i<x;i++){
           sim=exprecion.charAt(i);
           lista.mInserta(sim);
       }
       lista.gettip();
       lista.comp(1);
       lista.mostrar();
       lista.comp(2);
       lista.mostrar();
       
       lista.tabla();
       lista.mosarb();
       
    }
    
}
