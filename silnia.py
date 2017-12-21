#silnia

#silnia
def silnia(arg1):
    if arg1 > 1:
        return (arg1 * silnia (arg1 -1))
    else:
        return 1

#tu bedzie funkcja 


#
#reszta
wartosc=""
while not wartosc.isdigit ():
    wartosc=input ("podaj wartosc ")
#if wartosc.isdigit () :

silnia(int(wartosc))
