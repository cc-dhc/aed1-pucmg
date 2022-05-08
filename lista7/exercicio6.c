// No primeiro código, o valor no endereço ptr é alterado.
int main1() {
    int *ptr, i;
    ptr = (int *)malloc(sizeof(int));
    *ptr = 10;
    for (i = 0; i < 5; i++) {
        *ptr = *ptr + 1;
    }
    printf("\nptr: %d", *ptr);
    free(ptr);
    return 0;
}

// Já no segundo código, o endereço para onde ptr aponta é alterado. 
int main2() {
    int *ptr, i;
    ptr = (int *) malloc(sizeof(int));
    *ptr = 10;
    for(i=0;i<5;i++) {
        ptr=ptr+1;
    }
    printf("\nptr: %p", ptr);
    free(ptr);
    return 0;
}