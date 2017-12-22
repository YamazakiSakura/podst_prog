 #include <stdio.h>

int main(){
        int liczba;

        printf("Podaj liczbe do konwersji");
        scanf("%d", &liczba);


        printf("wynik: ");
        do{
                printf("%d", liczba % 2);
                liczba /= 2;
        }while(liczba > 0);
        printf("\n");
return 0;
}
