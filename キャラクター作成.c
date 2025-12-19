#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int inteligence,stamina,charisma;
    char class[10];
    
    srand(time(NULL));
    
    inteligence = rand() % 21;
    stamina = rand() % (21-inteligence);
    charisma = 20 - inteligence - stamina;
    
    if(inteligence >= stamina && inteligence >= charisma) {
        printf("class:mage\n");
    } else if (stamina >= inteligence && stamina >= charisma) {
        printf("class:knight\n");
    } else {
        printf("class:thief\n");
    }
    
    printf("inteligence:%d\n",inteligence);
    printf("stamina    :%d\n",stamina);
    printf("charisma   :%d\n",charisma);
    
    
    return 0;
}