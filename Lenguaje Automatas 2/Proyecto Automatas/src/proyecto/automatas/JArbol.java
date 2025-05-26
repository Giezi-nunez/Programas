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
public class JArbol {
    public JNodoArb padre(JNodo r){//con este metodo se crea el sub arbol
        JNodoArb raiz = new JNodoArb();
        
            raiz.sim=r.sim;
            raiz.tipo=r.tipo;
            raiz.Hder=hijos(r.sig);
            raiz.Hizq=hijos(r.ant);
            //se le dan vlores al simbolo y al enlace con los nodos hijos
        return raiz;
    }
    
     public JNodoArb hijos(JNodo r){//con este metodo creamos los nodos hijos
        JNodoArb raiz = new JNodoArb();
            if(r.raiz!=null){//si yha hay un sib arbol en el nodo de alguno de los hijos de cenlaza directamente
                raiz=r.raiz;
                return raiz;
            }else{//si no se le dan valores normales
                raiz.sim=r.sim;
                raiz.tipo=r.tipo;
                raiz.Hder=null;
                raiz.Hizq=null;
                return raiz;      
            }
            
        
        
    }
    public void InOrden(JNodoArb n) {
        if (n == null) {
            return;
        }

        // Primero recorrer el subárbol izquierdo
        InOrden(n.Hizq);

        // Luego imprimir el valor del nodo
        System.out.print(n.sim + " ");

        // Finalmente recorrer el subárbol derecho
        InOrden(n.Hder);
    }
    
}
