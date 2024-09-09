//Q-1

#include <stdio.h>

main() 
{
    FILE *evenFile, *oddFile;
    int i;

    evenFile = fopen("even-file.txt", "w");
    oddFile = fopen("odd-file.txt", "w");

    if (evenFile == NULL || oddFile == NULL) 
	{
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 50; i <= 70; i++) 
	{
        if (i % 2 == 0) 
		{
            fprintf(evenFile, "%d ", i);
        } else {
            fprintf(oddFile, "%d ", i);
        }
    }

    fclose(evenFile);
    fclose(oddFile);

    evenFile = fopen("even-file.txt", "r");
    oddFile = fopen("odd-file.txt", "r");

    if (evenFile == NULL || oddFile == NULL) 
	{
        printf("Error opening file for reading!\n");
        return 1;           
    }

    printf("Even numbers from even_file.txt:\n");
    while (fscanf(evenFile, "%d", &i) != EOF) 
	{
        printf("%d ", i);
    }
    printf("\n");

    printf("Odd numbers from odd_file.txt:\n");
    while (fscanf(oddFile, "%d", &i) != EOF) 
	{
        printf("%d ", i);
    }
    printf("\n");

    fclose(evenFile);
    fclose(oddFile);

}
