/**
 * check if a string is a number
 * 
 */
int is_number(char *str)
{
        int i;

        for (i = 0; str[i] != '\0'; i++)
        {
                if (isdigit(str[i]) == 0)
                {
                        printf("Error\n");
                        return (0);
                }
                        
        }
        return (1);
}