/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package Garaje;
import javax.swing.*; 

public class AGarage {

    
    public static void main(String[] args)
    {
        int valor = 0;
        String opcion;
       
       opcion=JOptionPane.showInputDialog(null,"Menu de reparaciones TECNM"
            + "\n\n1.- Revision vehicular"
            + "\n2.- Reparaciones mecanicas"
            + "\n3.- Reparaciones hojalateria y pintura"
            + "\n4.- Salir" 
            + "\n\n Elige una opción: ");
       valor=Integer.parseInt(opcion);
       
       switch(valor)
       {
           case 1:
       Revisiones ent=new Revisiones();
       
       ent.entradadatos();
       ent.mostrardatos();
       break;
       
           case 2:
               ReparacionesMecanica ent1=new ReparacionesMecanica() {};
               
                   ent1.entradadatos();
                   ent1.mostrardatos();
                   break;
               
           case 3:
               ReperacionesHyP ent2=new ReperacionesHyP() {};
               
               ent2.entradadatos();
               ent2.mostrardatos();
               break;
               
           case 4:
               System.out.println("¡¡¡Hata pronto!!!");
               break;
               
           default:
               System.out.println("Opcion no valida");
       }
        }
          }

    
    
    

