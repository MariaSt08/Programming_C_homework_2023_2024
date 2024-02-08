#include <stdio.h>
#include<stdio.h>

int main() 
{
    unsigned char lights;
    printf("Lights:");
    scanf("%u",&lights);
    int option;
while(1)
{
do {
        printf("\n Menu:\n");
        printf("1. Switch lights\n");
        printf("2. Print state\n");
        printf("3. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option) {
        case 1:
            unsigned char switchlights;
            printf("\nEnter room number (1-8):");
            scanf("%u", &switchlights);

            switchlights = 1 << (switchlights - 1);

            lights = lights ^ switchlights;
            printf("\n After turning off/on the lights, the state is: %u", lights);
            break;
        case 2:
            printf("\n Lamps that are on: ");
            for (int i = 0; i < 8; i++)
             {
                unsigned char light = 1 << i;
                if ((lights & light) == light) 
                {
                    printf(" %d ", i + 1);
                }
            }
            break;
        case 3:
            break;
        default:
            printf("\n Invalid option. Choose again...");
            break;
        }
    } while (option != 3);
}
      return 0;
}
