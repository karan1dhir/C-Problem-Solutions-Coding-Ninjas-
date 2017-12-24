#include<stdio.h>

int main()
{
      int array_a1[30], array_a2[30], array_a3[30], array_a4[30], array_a5[30], array_a6[30], array_a7[30], array_a8[30];
      int div, count, j, key, m, plaintext, temp, dec = 0;
      printf("\nEnter a Plain-Text value: ");
      scanf("%d", &plaintext);
      printf("\nEnter the Key: ");
      scanf("%d", &key);
      printf("\nEnter the Bit-Stream: ");
      for(count = 0; count < plaintext; count++)
      {
            scanf("%d", &array_a1[count]);
      }
      div = plaintext / 2;
      temp = div - key;
      for(count = 0; count <= temp; count++)
      {
            array_a3[count] = 0;
            dec++;
      }
      dec = dec - 1;
      printf("\nEnter the Key Bit Stream: ");
      for(count = 0; count < key; count++)
      {
            scanf("%d", &array_a3[dec++]);
      }
      for(count = 0; count < 2; count++)
      {
            printf("%d", array_a8[count]);
      }
      printf("\nLeft Hand: ");
      for(count = 0; count < div; count++)
      {
            array_a5[count] = array_a1[count];
            printf("%d", array_a1[count]);
      }
      printf("\nRight Hand: ");
      for(count = div; count < plaintext; count++)
      {
            array_a2[count] = array_a1[count];
            printf("%d", array_a1[count]);
      }
      for(j = 0, m = div; j < dec, m < plaintext; j++, m++)
      {
            if(array_a2[m] == 1 && array_a3[j] == 1)
            {
                  array_a6[j] = 0;
            }
            else if(array_a2[m] == 1 && array_a3[j] == 0)
            {
                  array_a6[j] = m;
            }
            else
            {
                  array_a6[j] = 0;
            }
      }
      printf("\nFirst XOR: ");
      for(count = 0; count < div; count++)
      {
            printf("%d", array_a6[count]);
      }
      for(j = 0, m = 0; j < div, j++; j++, m++)
      {
            if(array_a5[m] = 1 && array_a6[j] == 1)
            {
                  array_a4[j] = 0;
            }
            else if(array_a5[m] = 1 && array_a6[j] == 0)
            {
                  array_a4[j] = m;
            }
            else if(array_a5[m] == 0 && array_a6[j] == 1)
            {
                  array_a4[j] = 0;
            }
      }
      printf("\nSecond XOR: ");
      for(count = 0; count < div; count++)
      {
            printf("%d", array_a4[j]);
      }
      return 0;
}
