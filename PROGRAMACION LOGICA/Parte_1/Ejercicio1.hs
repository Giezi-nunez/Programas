-- JARED GIEZI PEREZ NUÑEZ  EJERCICIO 1

--multiplicacion de 4 numeros
multiplicaCuatro :: Num a => a -> a -> a -> a -> a
multiplicaCuatro a b c d = a * b * c * d

-- AreaRectangulo.hs
areaRect :: Int -> Int -> Int
areaRect base altura = base * altura

-- AreaTriangulo.hs
areaTrian :: Float -> Float -> Float
areaTrian base altura = 0.5 * base * altura

-- Ejercicio 3
-- Escribe una función que reciba como parámetro una cadena de caracteres y le añada al principio “Hola “:
saludo :: String -> String 
saludo nombre = "Hola " ++ nombre

--Ejercicio 4
-- formula 
areaHero :: Float -> Float -> Float -> Float
areaHero a b c = sqrt (s * (s - a) * (s - b) * (s - c))
  where s = (a + b + c) / 2

-- Ejercicio 5
-- formula
raicesFormulaCuand :: Float -> Float -> Float -> String
raicesFormulaCuand a b c 
  | d > 0     = "dos soluciones"          
  | d == 0    = "una solución"             
  | otherwise = "dos imaginarias"          
  where d = b^2 - 4*a*c  

-- Ejercicio 6
substractHalf :: Float -> Float 
substractHalf x = (x / 2) - 12

-- parte 2 
volumeBox :: Int -> Int -> Int -> Int 
volumeBox largo ancho alto = largo * ancho * alto

--Ejercicio 7
estadoAgua :: Float -> String
estadoAgua temperatura
    | temperatura <= 0 = "Solido"
    | temperatura > 0 && temperatura < 100 = "Liquido"
    | otherwise = "Gaseoso"

--Ejerciocio 9

calificacionLetra :: Int -> String 
calificacionLetra calificacion
    | calificacion >= 91 && calificacion <= 100 = "A"
    | calificacion >= 81 && calificacion <= 90  = "B"
    | calificacion >= 71 && calificacion <= 80  = "C"
    | calificacion >= 61 && calificacion <= 70  = "D"
    | otherwise                                   = "F"

-- Ejercicio 10
tipoTriangulo :: Int -> Int -> Int -> String
tipoTriangulo a b c
    | a <= 0 || b <= 0 || c <= 0 = "Lados invlidos"
    | a == b && b == c            = "Equilatero"
    | a == b || a == c || b == c  = "Isosceles"
    | otherwise                    = "Escaleno"

-- Parte 2
diaSemana :: Int -> String
diaSemana n
    | n == 1 = "lunes"
    | n == 2 = "martes"
    | n == 3 = "miercoles"
    | n == 4 = "jueves"
    | n == 5 = "viernes"
    | n == 6 = "sabado"
    | n == 7 = "domingo"
    | otherwise = "Numero Invalido"


