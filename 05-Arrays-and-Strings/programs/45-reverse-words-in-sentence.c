#include <stdio.h>

int main(void)
{
    char sentence[200];
    char words[100][200];
    int i = 0;
    int j;
    int count = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0' && count < 100)
    {
        while (sentence[i] == ' ' || sentence[i] == '\t' || sentence[i] == '\n')
        {
            i++;
        }

        if (sentence[i] == '\0')
        {
            break;
        }

        j = 0;

        while (sentence[i] != '\0' &&
               sentence[i] != ' ' &&
               sentence[i] != '\t' &&
               sentence[i] != '\n')
        {
            words[count][j++] = sentence[i++];
        }

        words[count][j] = '\0';
        count++;
    }

    printf("Sentence with words in reverse order: ");

    for (i = count - 1; i >= 0; i--)
    {
        printf("%s", words[i]);

        if (i > 0)
        {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
