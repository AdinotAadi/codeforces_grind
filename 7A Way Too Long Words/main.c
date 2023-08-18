#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char arr[100][100];
    char word[100], first, last, nword[100];
    int n, size;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", word);
        strcpy(arr[i], word);
    }

    for (int i = 0; i < n; i++)
    {
        if (strlen(arr[i]) <= 10)
        {
            printf("%s\n", arr[i]);
        }
        else
        {
            strcpy(nword, "");
            size = strlen(arr[i]) - 2;
            first = arr[i][0], last = arr[i][size + 1];
            sprintf(nword, "%c%d%c", first, size, last);
            printf("%s\n", nword);
        }
    }

    return 0;
}
