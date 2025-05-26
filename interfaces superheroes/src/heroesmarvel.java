
import javax.swing.JOptionPane;


public class heroesmarvel extends Superheroes implements volar, pelear {

    public heroesmarvel(String nombre, String identidad, String humano, String extraterrestre, String poderes, String Armas, String traje,String mecanismo,String pelea,int nivelpelea1) {
        super(nombre, identidad, humano, extraterrestre, poderes, Armas, traje, mecanismo,pelea,nivelpelea1);
        
        
    }
     public void datos() {
      JOptionPane.showInputDialog("Informacion del superheroe\n Nombre:"+this.getNombre()+"\n Identidad:"+this.getIdentidad()+"\n Humano:"+this.getHumano()+"\n Extraterrestre:"+this.getExtraterrestre()+"\n Poderes:"+this.getPoderes()+"\n Armas:"+this.getArmas()+"\n Traje:"+this.getTraje()+"\n Mecanismo de vuelo:"+this.getmecanismo()+"\n tecnica de pelea:"+this.getpelea()+"\n Nivel de pelea:"+this.getnivelpelea());
    }
     void entradadatos(String nombre,String identidad,String humano, String extraterrestre, String poderes,String Armas,String traje,String mecanismo,String pelea,int nivelpelea) {
         setNombre(nombre);
         setIdentidad(identidad);
         setHumano(humano);
         setExtraterrestre(extraterrestre);
         setPoderes(poderes);
         setArmas(Armas);
         setTraje(traje);
         mecanismo(mecanismo);
         pelea(pelea);
         nivelpelea(nivelpelea);
         
        
    }
     
    @Override
    public void mecanismo(String mecanismo) {
         System.out.println("Mecanismo de Vuelo"+mecanismo);
    
    }

    @Override
    public void tecnicapelea(String tecnicapelea) {
       System.out.println("Tecnica de Pelea"+tecnicapelea); 
    }

    @Override
    public void nivelpelea(int nivelpelea) {
       System.out.println("Nivel de Pelea"+nivelpelea);
    }
  }
  

   
    

