/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package proyecto.automatas;

/**
 *
 * @author Luis Enrique Reyes V
 */
public class JNodoOp{
    char operador;
    int nivel;
    String op1,op2,res;
    public JNodoOp(char operador, int nivel){
    this.operador = operador;
    this.nivel = nivel;
    }
    public JNodoOp(char operador,String op1,String op2,String res){
        this.operador=operador;
        this.op1=op1;
        this.op2=op2;
        this.res=res;
    }
}
