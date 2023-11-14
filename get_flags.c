#include "main.h"

int get_flags(const char *format, int *f)
{
    const char FLAGS_CH[] = {'+', ' ', '#', '\0'};
    const int FLAGS_ARR[] = {F_PLUS, F_SPACE, F_HASH};

    int flags = 0;
    int curr_i = *f + 1;

    while (format[curr_i] != '\0')
    {
        char current_flag = format[curr_i];

        switch (current_flag) 
        {
            case '+':
            case '#':
            case ' ':
                for (int j = 0; FLAGS_CH[j] != '\0'; j++) 
                {
                    if (current_flag == FLAGS_CH[j]) {
                        flags |= FLAGS_ARR[j];
                        break;
                    }
                }
                break;
            default:
                curr_i--;
                break;
        }

        curr_i++;
    }

    *f = curr_i - 1;

    return flags;
}