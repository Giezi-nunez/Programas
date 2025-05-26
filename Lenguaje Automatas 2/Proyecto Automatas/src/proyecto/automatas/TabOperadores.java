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
public class TabOperadores {
    
   
    public TabOperadores(){
         
    }
    
    public String tipodat(char op,String td1,String td2){
        JNodoOp[] Tablatip = {new JNodoOp('*',"int","int","int"),
        new JNodoOp('*',"int","float","float"),
        new JNodoOp('*',"float","float","float"),
        new JNodoOp('/',"int","int","float"),
        new JNodoOp('/',"int","float","float"),
        new JNodoOp('/',"float","float","float"),
        new JNodoOp('+',"int","int","int"),
        new JNodoOp('+',"int","float","float"),
        new JNodoOp('+',"float","float","float"),
        new JNodoOp('-',"int","int","int"),
        new JNodoOp('-',"int","float","float"),
        new JNodoOp('-',"float","float","float")};
        String tipo=null;
        if(td1==td2){
            tipo=td1;
        }else{
            tipo="float";
        }
        return tipo;  
    }
    
   
}
