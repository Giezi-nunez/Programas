

public class Superheroes {
    String nombre;
    String identidad;
    String humano;
    String extraterrestre;
    String poderes;
    String Armas;
    String traje;
    String mecanismo;
    String pelea;
    int nivelpelea1;

    public Superheroes(String nombre, String identidad, String humano, String extraterrestre, String poderes, String Armas, String traje,String mecanismo,String pelea,int nivelpelea1) {
        this.nombre = nombre;
        this.identidad = identidad;
        this.humano = humano;
        this.extraterrestre = extraterrestre;
        this.poderes = poderes;
        this.Armas = Armas;
        this.traje = traje;
        this.mecanismo=mecanismo;
        this.pelea=pelea;
        this.nivelpelea1=nivelpelea1;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public void setIdentidad(String identidad) {
        this.identidad = identidad;
    }

    public void setHumano(String humano) {
        this.humano = humano;
    }

    public void setExtraterrestre(String extraterrestre) {
        this.extraterrestre = extraterrestre;
    }

    public void setPoderes(String poderes) {
        this.poderes = poderes;
    }

    public void setArmas(String Armas) {
        this.Armas = Armas;
    }

    public void setTraje(String traje) {
        this.traje = traje;
    }

    public String getNombre() {
        return nombre;
    }

    public String getIdentidad() {
        return identidad;
    }

    public String getHumano() {
        return humano;
    }

    public String getExtraterrestre() {
        return extraterrestre;
    }

    public String getPoderes() {
        return poderes;
    }

    public String getArmas() {
        return Armas;
    }

    public String getTraje() {
        return traje;
    }
    public void mecanismo(String mecanismo){
        this.mecanismo=mecanismo;
    }
    public String getmecanismo(){
        return mecanismo;
    }
    public void pelea(String pelea){
        this.pelea=pelea;
    }
     public String getpelea(){
        return pelea;
    }
      public void nivelpelea(int nivelpelea){
        this.nivelpelea1=nivelpelea;
    }
      public int getnivelpelea(){
        return nivelpelea1;
    }
}
