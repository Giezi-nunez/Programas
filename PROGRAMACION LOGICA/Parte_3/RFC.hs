import Data.Char (isAlpha, isAlphaNum, isDigit)

--isAlpha :: Char -> Bool
--isAlpha c =isAscii c && isLetter c

esAlfaNum :: Char -> Bool
esAlfaNum c = isAlphaNum c

isForRFCNormal :: String -> Bool
isForRFCNormal rfc =length rfc == 12 && all isRFCChar (zip [1..12] rfc)

isRFCChar :: (Int, Char) -> Bool
isRFCChar (i, c)
  | i <= 3 = isAlpha c
  | i == 4 = c == '-'
  | i >= 5 && i <= 10 = isAlphaNum c
  | i == 11 || i == 12 = isDigit c
  | otherwise = False

isDateRFCValid :: String -> Bool
isDateRFCValid date =
  let (year, month, day) = fechaRFC date
  in year >= 0 && year <= 99 && month >= 1 && month <= 12 && day >= 1 && day <= 31

fechaRFC :: String -> (Int, Int, Int)
fechaRFC date =
  let year = read (take 2 date) :: Int
      month = read (drop 2 (take 4 date)) :: Int
      day = read (drop 4 date) :: Int
  in (year, month, day)
