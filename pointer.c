#include <stdio.h>
#include <stdlib.h>

int main()
{
    int source_arr[100];
    int dest_arr[100];
    int n;
    int i;
    int *source_ptr;
    int *dest_ptr;
    int *end_ptr;
    source_ptr=source_arr;
    dest_ptr=dest_arr;
    printf("Dizimiz Kac Elemanli Olsun?\n");
    scanf("%d",&n);
    printf("Dizimizin Elemanlarini Giriniz!\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(source_ptr+i));
    }
    end_ptr=&source_arr[n-1];
    printf("Kaynak Dizi Kopyalanmadan Once:");
    bastir(source_arr,n);
    while(source_ptr<=end_ptr)
    {
       *dest_ptr=*source_ptr;
       source_ptr++;
       dest_ptr++;

    }

    return 0;
}