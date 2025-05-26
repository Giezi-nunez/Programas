/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Garaje;

import javax.swing.JOptionPane;


public class Revisiones extends Trabajos 
{
    String describe;
    String trabajo;
    int ttrabajo;
    String numhrs;
    int numhoras;
    
    @Override
    public double precioxcobrar()
    {
        return +20;
    }
   
   public void entradadatos()
   {   
       describe = JOptionPane.showInputDialog(null,"Describe la revision a realizar ");
       trabajo = JOptionPane.showInputDialog(null, "Cual es el numero de trabajo realizado?: ");
       ttrabajo = Integer.parseInt(trabajo);
       numhrs = JOptionPane.showInputDialog(null,"Introduce el numero de horas del servicio realizado: ");
       numhoras = Integer.parseInt(numhrs);
      }
    
   public void mostrardatos()
   {
       System.out.println("El tiempo de entrega maximo es de 7 dias");
    
       System.out.println("La descrpcion del trabajo es"+this.describe);
       System.out.println("El identificador de trabajo es: "+(this.ttrabajo-1));
       System.out.println("El numero de horas del trabajo es de: "+this.numhoras+" horas");
       System.out.println("El precio por cobrar es: "+numhoras*30+precioxcobrar());
   }
}

