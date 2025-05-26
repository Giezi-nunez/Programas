tipoTrian a b c
     | a == b && b == c = "Equilatero"
     | a == b || b==c || a==c = "Isoceles"
     | otherwise = "Escaleno"


tipTrianIf a b c =
      if (a == b && b == c) then "Equilatero"
         else if (a == b || b==c || a==c) then "Isoceles"
         else "Escaleno"

numOfRealSolutions a b c
    | disc > 0  = 2
    | disc == 0 = 1
    | otherwise = 0
        where
        disc = b^2 - 4*a*c