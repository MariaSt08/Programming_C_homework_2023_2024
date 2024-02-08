#include<stdio.h>
#include<stdlib.h>
#include "processed.h"
int main()
{
 while(1)
    {
int choice;
        printf("Choose an option:\n");
        printf("1.Create process\n");
        printf("2.Listing all processes\n");
        printf("3.Stop the process\n");
        printf("4.Exit\n");

        scanf("%d", &choice);
        
switch (choice)
 {
            case 1: 
            {
                char processName[30];
                printf("Process name: ");
                scanf("%s", processName);
                int result = createnewprocess(processName);
                if (result != 0) {
                    printf("A process has been created: %d\n", result);
                }
                break;
            }

            case 2:
                printf("Listing all processes:\n");
                for (int i = 0; i < processescount; i++) {
                    printf("Process %d: %s\n", processes[i].ID, processes[i].name);
                }
                break;

            case 3: {
                int processID;
                printf("Enter number of the process you want to stop: ");
                scanf("%d", &processID);
                stopprocess(processID);
                break;
            }

            case 4:
                printf("Exit.\n");
                break;

            default:
             printf("\n Invalid option. Choose again...");
            break;
        }
    }
    
         return 0;
 }

   