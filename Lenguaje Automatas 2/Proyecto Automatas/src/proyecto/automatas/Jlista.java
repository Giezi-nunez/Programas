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
public class Jlista {
    static JNodo inicio,ultimo;
    static NodoDat ini,ult;
    public Jlista(){
        inicio = null;
        ultimo = null;
        ini = null;
        ult = null;
        
    }
    public void mInserta(char sim){
        JNodo p = new JNodo();
        if(inicio == null){
            p.sim=sim;
            p.sig=null;
            p.ant=null;
            inicio=p;
            ultimo=p;
        }else{
            p.sim=sim;
            p.sig=null;
            p.ant=ultimo;
            ultimo.sig=p;
            ultimo=p;            
        }
    }
    
    public void comp(int n) {
    JNodoOp[] TablaOperadores = {
        new JNodoOp('*', 1),
        new JNodoOp('/', 1),
        new JNodoOp('+', 2),
        new JNodoOp('-', 2),
    };
    JNodo p = inicio; // Suponiendo que "inicio" es el nodo inicial de la lista
    JNodo q = null, pa = null, ps = null; // Inicializa q, pa y ps a null para evitar NullPointerException
    
    
        while (p != null) {
            for (int i = 0; i < TablaOperadores.length; i++) {
                if (p.sim == TablaOperadores[i].operador && TablaOperadores[i].nivel == n) {
                    if (p.ant != null)
                        pa = p.ant.ant; // Guardar referencia al nodo anterior al anterior a p
                    if (p.sig != null)
                        ps = p.sig.sig; // Guardar referencia al nodo siguiente al siguiente a p

                    q = new JNodo(); // Crear un nuevo nodo
                    JArbol r = new JArbol();//crear un objeto de tipo arbos
                    q.res = "R" + TablaOperadores[i].operador;
                    TabOperadores t=new TabOperadores();
                    p.tipo=t.tipodat(p.sim, p.ant.tipo, p.sig.tipo);//obtenemos el tipo de dato del resultado
                    q.tipo=p.tipo;
                    q.raiz= r.padre(p);//crear una referencia al nodo raiz del arbol de la operacion
                    
                    // Desconectar p, p.ant y p.sig de la lista
                    if (pa != null) {
                        pa.sig = q;
                        q.ant = pa;//+b
                    } else {
                        inicio = q;
                    }
                    if (ps != null) {//+
                        ps.ant = q;
                        q.sig = ps;
                    }
                }
            }
            p = p.sig;
        }
        
}

    public void mostrar(){
        // Mostrar la lista después de la modificación
        JNodo p = inicio;
        while (p != null) {
            if (p.res == null) {
                System.out.println(" " + p.sim);
            } else {
                System.out.println(" " + p.res );
            }
            p = p.sig;
        }
        System.out.println("\n");
    }
    
    public void Dinserta(char dat,String tip){
        NodoDat d = new NodoDat();
        if(ini == null){
            d.dato=dat;
            d.Tipo=tip;
            d.sig=null;
            ini=d;
            ult=d;
        }else{
            d.dato=dat;
            d.Tipo=tip;
            d.sig=null;
            ult.sig=d;
            ult=d;
        }
    }
    public void gettip(){
        NodoDat n=new NodoDat();
        n=ini;
        JNodo d=new JNodo();
        d=inicio;
        while(d!=null){
            n=ini;
            while(n!=null){
                if(n.dato==d.sim){
                    d.tipo=n.Tipo;
                    n=null;
                }else{
                    n=n.sig;  
                }
            }
            d=d.sig;
        }
    }
    public void tabla(){
    NodoDat a = ini;
    System.out.println("\nTabla de identificadores" );
    while (a != null){
        System.out.println(" " + a.dato + " " + a.Tipo);
        a=a.sig;
    }
    }
    public void mosarb(){
        JNodo a = inicio;
        JArbol b = new JArbol();
        b.InOrden(a.raiz);
    }

}
