import random

random.seed ()
while 1:
    a=random.randint (10,20)
    print (a)
    print ("Czy chcesz konttynuować t/n")
    if input () == "n":
        break
