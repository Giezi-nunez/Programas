
cambiarChars :: String -> String
cambiarChars = map reemplazarChar

reemplazarChar :: Char -> Char
reemplazarChar c
        |  c == 'o' || c == 'o' = '0'
        |  c == 'l' || c == 'L' = '1'
        |  c == 'd' || c == 'D' = '2'
        |  c == 'e' || c == 'E' = '3'
        |  c == 'a' || c == 'A' = '4'
        |  c == 's' || c == 'S' = '5'
        |  c == 'g' || c == 'G' = '6'
        |  c == 'f' || c == 'F' = '7'
        |  c == 'b' || c == 'B' = '8'
        |  c == 'p' || c == 'P' = '9'
        | otherwise = c 
