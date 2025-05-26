/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Garaje;


public abstract class Trabajos

{
protected String descrpcion;
protected int tipo_trabajo;//
protected int numero_trabajos;// numero que se asocia al momento del registro
protected double numero_horas;// numero de horas trabajadas
protected boolean finalizado=true; //estatus del trabajo

   

    public String getDescrpcion() {
        return descrpcion;
    }

    public void setDescrpcion(String descrpcion) {
        this.descrpcion = descrpcion;
    }

    public int getTipo_trabajo() {
        return tipo_trabajo;
    }

    public void setTipo_trabajo(int tipo_trabajo) {
        this.tipo_trabajo = tipo_trabajo;
    }

    public int getNumero_trabajos() {
        return numero_trabajos;
    }

    public void setNumero_trabajos(int numero_trabajos) {
        this.numero_trabajos = numero_trabajos;
    }

    public double getNumero_horas() {
        return numero_horas;
    }

    public void setNumero_horas(float numero_horas) {
        this.numero_horas = numero_horas;
    }

    public boolean isFinalizado() {
        return finalizado;
    }

    public void setFinalizado(boolean finalizado) {
        this.finalizado = finalizado;
    }
    public abstract double precioxcobrar();
    {
    double precioxcobrar = getNumero_horas()*30;
    }
        
    public int idTrabajos(int numero_trabajos)
            {
                return numero_trabajos-1;
            }
    public double numeroHoras(int numero_horas)
    {
        return 0;
    }
    
public abstract void mostrardatos();// poner como abstract

}
