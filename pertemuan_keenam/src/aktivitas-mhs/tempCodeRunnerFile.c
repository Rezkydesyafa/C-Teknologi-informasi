
    }
    else
    {
        printf("Memory allocated successfully.\n");
        for (i = 0; i < n; ++i)
        {
            ptr[i] = i + 1;
        }

        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i)
        {
            printf("%d, ", ptr[i]);
        }