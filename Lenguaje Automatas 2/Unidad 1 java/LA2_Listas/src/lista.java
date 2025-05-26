/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Giezi Nuñez
 */


    

    
//class Clista

class lista 
{
static void Main()
{
Clista  Lista=new Clista ();
int num;

Console.WriteLine("\nEscribe numero <-1 termina>:"); //hacerlo como java 
num=Convert.ToInt16 (Console.ReadLine());
while(num ! =-1)
{
Lista.mInserta(num);


Console.WriteLine("\nEscribe numero <-1 termina>:");
num =Convert.ToInt16 (Console.Readline());
}
Lista.mPresenta();
}
}




