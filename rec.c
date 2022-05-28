#include <stdio.h>

int main()
{
    int i, y, col, lignes;
    printf("Veuillez entrer le nombre de colonnes:\n");
    scanf("%d", &col);
    printf("Veuillez entrer le nombre de lignes:\n");
    scanf("%d", &lignes);
    i=1;
    y=1;
    while(y<=lignes)
    {
        while(i<=col)
        {
            printf("* ");
            i++;
        }
        printf("\n");
        i=1;
        y++;
        
    }
    
    return 0;
}