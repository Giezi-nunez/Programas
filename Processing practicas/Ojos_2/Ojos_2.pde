//Perez Nuñez Jared Giezi 
PVector[] eyePositions; 
PVector[] pupilPositions; 
int numRows = 5; // Número de filas
int numCols = 4; // Número de columnas

void setup() {
  size(400, 400);
  eyePositions = new PVector[numRows * numCols];
  pupilPositions = new PVector[numRows * numCols];
  
  for (int row = 0; row < numRows; row++) {
    for (int col = 0; col < numCols; col++) {
      float x = map(col, 0, numCols-1, width * 0.1, width * 0.9);
      float y = map(row, 0, numRows-1, height * 0.2, height * 0.8);
      int index = row * numCols + col; // Calcular el índice en el arreglo
      eyePositions[index] = new PVector(x, y);
    }
  }
}

void draw() {
  background(200);
  
  PVector mouseVector = new PVector(mouseX, mouseY);
  
  // Dibujar ojos
  for (int i = 0; i < numRows * numCols; i++) {
    PVector eyePos = eyePositions[i];
    PVector pupilPos = eyePos.copy().add(mouseVector.copy().sub(eyePos).setMag(10));
    pupilPositions[i] = pupilPos; 
    
    fill(255);
    ellipse(eyePos.x, eyePos.y, 50, 50);
    
    fill(0);
    ellipse(pupilPos.x, pupilPos.y, 20, 20);
  }
}
