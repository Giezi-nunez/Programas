import Data.Char (ord, chr, isAlpha, isUpper, isLower)

cifrarCesar :: String -> String
cifrarCesar = map (desplazar 6)

descrifrarCesar :: String -> String
descrifrarCesar = map (desplazar (-6))

desplazar :: Int -> Char -> Char
desplazar n c
    | isAlpha c && isUpper c = chr (((ord c - ord 'A' + n) `mod` 26) + ord 'A')
    | isAlpha c && isLower c = chr (((ord c - ord 'a' + n) `mod` 26) + ord 'a')
    | otherwise              = c  