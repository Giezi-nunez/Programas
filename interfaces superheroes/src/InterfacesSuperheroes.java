
import javax.swing.JOptionPane;


public class InterfacesSuperheroes {

    public static void main(String[] args) {
     String nombre,identidad,humano,extraterrestre,poderes,Armas,traje,op;
     int nivelpelea2;
     
     int opcion;
     String mecanismo,pelea,nivelpelea1;
     
     op=JOptionPane.showInputDialog(null,"Seleccionar una opcion:\n"
                    +"1.-SuperHeroe DC\n"
                    +"2.-SuperHeroe Marvel \n"
                    +"3.-Salir");
     opcion=Integer.parseInt(op);
     switch(opcion){
         case 1:
             nombre=JOptionPane.showInputDialog(null,"Escribe el nombre del superheroe");
             identidad=JOptionPane.showInputDialog(null,"Escribe la identidad del superheroe");
             humano=JOptionPane.showInputDialog(null,"Escribe si es humano del superheroe");
             extraterrestre=JOptionPane.showInputDialog(null,"Escribe si es extraterrestre del superheroe");
             poderes=JOptionPane.showInputDialog(null,"Escribe los poderes del superheroe");
             Armas=JOptionPane.showInputDialog(null,"Escribe las armas del superheroe");
             traje=JOptionPane.showInputDialog(null,"Escribe el traje del superheroe");
             mecanismo=JOptionPane.showInputDialog(null,"Que mecanismo utiliza para volar");
             pelea=JOptionPane.showInputDialog(null,"Que metodo de pelea tiene");
             nivelpelea1=JOptionPane.showInputDialog(null,"Que nivel de pelea tiene");
             nivelpelea2=Integer.parseInt(nivelpelea1);
             heroesdc super1= new heroesdc(nombre,identidad,humano,extraterrestre,poderes,Armas,traje,mecanismo,pelea,nivelpelea2);
             super1.entradadatos(nombre,identidad,humano,extraterrestre,poderes,Armas,traje,mecanismo,pelea,nivelpelea2);
             super1.mecanismo(mecanismo);
             super1.pelea(pelea);
             super1.nivelpelea(nivelpelea2);
             super1.datos();
             
             
            case 2:
             nombre=JOptionPane.showInputDialog(null,"Escribe el nombre del superheroe");
             identidad=JOptionPane.showInputDialog(null,"Escribe la identidad del superheroe");
             humano=JOptionPane.showInputDialog(null,"Escribe si es humano el superheroe");
             extraterrestre=JOptionPane.showInputDialog(null,"Escribe si es extraterrestre el superheroe");
             poderes=JOptionPane.showInputDialog(null,"Escribe los poderes del superheroe");
             Armas=JOptionPane.showInputDialog(null,"Escribe las armas del superheroe");
             traje=JOptionPane.showInputDialog(null,"Escribe el traje del superheroe");
             mecanismo=JOptionPane.showInputDialog(null,"Que mecanismo utiliza para volar");
             pelea=JOptionPane.showInputDialog(null,"Que metodo de pelea tiene");
             nivelpelea1=JOptionPane.showInputDialog(null,"Que nivel de pelea tiene");
             nivelpelea2=Integer.parseInt(nivelpelea1);
             heroesmarvel super2= new heroesmarvel(nombre,identidad,humano,extraterrestre,poderes,Armas,traje,mecanismo,pelea,nivelpelea2);
             super2.entradadatos(nombre,identidad,humano,extraterrestre,poderes,Armas,traje,mecanismo,pelea,nivelpelea2);
             super2.mecanismo(mecanismo);
             super2.pelea(pelea);
             super2.nivelpelea(nivelpelea2);
             super2.datos();
     }
    }
    
}
