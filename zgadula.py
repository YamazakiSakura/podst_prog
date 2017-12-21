import random
#a tak wyglądają komentarze
random.seed ()
while 1:
    a=int(input("Podaj a"))
    b=int(input("Podaj b"))
    if a>b:
        print("a>b")
    else:
           break
        
a=random.randint (0,100)
licznik=0
print ("Zgadnij liczbę od 0 do 100")
print (a)
while 1:
    
    liczba= int(input ())
    licznik+=1
    if liczba > a:
        print ("Podałeś większą liczbę, podaj mniejszą")
    elif liczba < a:
        print ("Podałeś mniejszą liczbę")
    else:
        print ("Zgadłeś za", licznik , "razem, ta liczba to: ", a)
        break
