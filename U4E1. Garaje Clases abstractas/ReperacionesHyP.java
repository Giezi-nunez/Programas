/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Garaje;
import javax.swing.JOptionPane;

public abstract class ReperacionesHyP extends Trabajos
{
    String material;
    protected double materiales;
    String describe;
    String trabajo;
    int ttrabajo;
    String numhrs;
    int numhoras;
    
public void entradadatos()
   {   
       describe = JOptionPane.showInputDialog(null,"Describe la revision a realizar ");
       trabajo = JOptionPane.showInputDialog(null, "Cual es el numero de trabajo realizado?: ");
       ttrabajo = Integer.parseInt(trabajo);
       numhrs = JOptionPane.showInputDialog(null,"Introduce el numero de horas del servicio realizado: ");
       numhoras = Integer.parseInt(numhrs);
       material=JOptionPane.showInputDialog(null,"Introduce la cantidad de materiales: ");
       materiales=Integer.parseInt(material);
      }
    public double precioxcobrar()
{  
    return materiales*1.3;
}
   public void mostrardatos()
   {
       System.out.println("El tiempo de entrega maximo es de 21 dias");
       System.out.println("La descrpcion del trabajo es"+this.describe);
       System.out.println("El identificador de trabajo es: "+(this.ttrabajo-1));
       System.out.println("El numero de horas del trabajo es de: "+this.numhoras+" horas");
       System.out.println("El precio por cobrar es: "+numhoras*30+precioxcobrar());
   }
 }

