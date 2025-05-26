import Data.Char (ord, chr, isAlpha, isUpper, isLower)

generaAcronimo :: [Char] -> [Char]
generaAcronimo = filter isUpper

--EJERCICIO 6 
cifrarCesar :: String -> String
cifrarCesar = map (desplazar 6)
descifrarCesar :: String -> String
descifrarCesar = map (desplazar (-6))

desplazar :: Int -> Char -> Char
desplazar n c
    | isAlpha c && isUpper c = chr (((ord c - ord 'A' + n) `mod` 26) + ord 'A')
    | isAlpha c && isLower c = chr (((ord c - ord 'a' + n) `mod` 26) + ord 'a')
    | otherwise              = c  

--Ejercicio numero 1
suma :: Int -> Int -> String
suma x y
    | x == y    = show x ++ show y  
    | otherwise = show (x + y)     
-- Ejercicio numero 2
esBisiesto :: Int -> Bool
esBisiesto año
    | año `mod` 400 == 0 = True
    | año `mod` 100 == 0 = False
    | año `mod` 4 == 0   = True
    | otherwise          = False
-- Ejercicio numer0 3
monthName :: Int -> String
monthName n
    | n == 1 = "Enero"
    | n == 2 = "Febrero"
    | n == 3 = "Marzo"
    | n == 4 = "Abril"
    | n == 5 = "Mayo"
    | n == 6 = "Junio"
    | n == 7 = "Julio"
    | n == 8 = "Agosto"
    | n == 9 = "Septiembre"
    | n == 10 = "Octubre"
    | n == 11 = "Noviembre"
    | n == 12 = "Diciembre"
    | otherwise = "Error"
-- Ejercicio 4 
isDateValid :: Int -> Int -> Int -> Bool
isDateValid dia mes año
    | mes < 1 || mes > 12 = False  
    | dia < 1             = False  
    | mes == 2            = dia <= (if esBisiesto año then 29 else 28)  
    | mes `elem` [4, 6, 9, 11] = dia <= 30  
    | otherwise           = dia <= 31       
-- Ejercico 5 
-- ghci> collatz 3 [3,10,5,16,8,4,2,1] ghci> collatz 15 [15,46,23,70,35,106,53,160,80,40,20,10,5,16,8,4,2,1]
collatz :: Int -> [Int]
collatz n
    | n <= 0    = error "El número debe ser un entero positivo"
    | n == 1    = [1]
    | even n    = n : collatz (n `div` 2)
    | otherwise = n : collatz (3 * n + 1)
--Ejercicio 7 
factors :: Integer -> [Integer]
factors n = [x | x <- [1..n], n `mod` x == 0]
isPrime :: Integer -> Bool
isPrime n = factors n == [1,n]
primes :: [Integer]
primes = [x | x <- [2..], isPrime x]
-- Función para generar una lista infinita de tuplas de números primos gemelos
primosGemelos :: [(Integer, Integer)]
primosGemelos = [(p, p + 2) | p <- primes, isPrime (p + 2)]

-- Ejercicio 8
-- 2^ a la potencia 
listaGranos :: [Integer]
listaGranos = [2^(n - 1) | n <- [1..64]]

--Ejercicio 10 
listaSinMultiplos :: [Int] -> Int -> [Int]
listaSinMultiplos lista x = filter (\n -> n `mod` x /= 0) lista

