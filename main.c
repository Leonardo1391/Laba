#include <stdio.h>
#include <locale.h>

int game_output(char *gOutput[10], int size)
{
    for (int t = 0; t < size; t++)
    {
        printf("%s\n", gOutput[t]);
    }
    return 1;
}

int main() 
{ 
    setlocale(LC_ALL, "Russian");
    while (1)
    {
        char *mData[10] = {
            "[0] Exit",
            "[1] Посмотреть на часы", 
            "[2] Промотать время", 
            "[3] Посмотреть инвентарь", 
            "[4] Положить предмет в слот", 
            "[5] Выбросить предмет",
            "[6] Устранение дубликатов"};
        int size = sizeof(mData) / sizeof(mData[0]);
        game_output(mData, size);

        char user_input;
        scanf ("%d", &user_input);

        
    }

}


