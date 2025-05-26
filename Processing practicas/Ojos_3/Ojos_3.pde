//Perez Nuñez Jared Giezi
PVector[] eyePositions; 
PVector[] pupilPositions; 
int numEyes = 250; 

void setup() {
  size(400, 200);
  eyePositions = new PVector[numEyes];
  pupilPositions = new PVector[numEyes];
  
  // Calcular posiciones de los ojos
  for (int i = 0; i < numEyes; i++) {
    float x = map(i, 0, numEyes-1, width * 0.05, width * 0.95); // Cambiado el rango de x
    float y = random(height * 0.2, height * 0.8); // Posición y aleatoria dentro del rango
    eyePositions[i] = new PVector(x, y);
  }
}

void draw() {
  background(200);
  
  PVector mouseVector = new PVector(mouseX, mouseY);
  
  // Dibujar ojos
  for (int i = 0; i < numEyes; i++) {
    PVector eyePos = eyePositions[i];
    PVector pupilPos = eyePos.copy().add(mouseVector.copy().sub(eyePos).setMag(10));
    pupilPositions[i] = pupilPos; // Almacenar posición de la pupila
    
    fill(255);
    ellipse(eyePos.x, eyePos.y, 50, 50);
    
    fill(0);
    ellipse(pupilPos.x, pupilPos.y, 20, 20);
  }
}
