/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Giezi Nuñez
 */
public class Clista
{
static CNodo inicio, ultimo;

public void Clistas()
{
    inicio =null;
    ultimo =null;
}
public void mInserta (int num)
{

CNodo p= new CNodo ();
if (inicio == null)
{
    p.num=num;
    p.sig=null;

    inicio = p;
    ultimo= p;
}
else 
{
p.num=num;
p.sig= null;

ultimo.sig =p;
ultimo = p;
}

}//public static void mInserta ()

public void mPresenta (){
CNodo p=new CNodo ();

p=inicio;
    while ( p !=null)
    {
        //console.writeLine ("\t{0}",p.num);
        p=p.sig;
    }//public void mPresenta
} 
