#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "processed.h"

struct Process processes[5];
int processescount = 0;

static int nextprocessid()
{
    static int currentID = 1;
    if (currentID > 5)
    {
        return 0;
    }
    return currentID++;
}

int createnewprocess(const char processname[30])
{
    if (processescount < 5)
    {
        int ID = nextprocessid();
        if (ID != 0)
        {
            struct Process newprocess = {ID};
            strcpy(newprocess.name, processname);
            processes[processescount++] = newprocess;
            return ID;
        }
    }
    return 0;
}

void stopprocess(int processid)
{
    int found = 0;

    for (int i = 0; i < processescount; i++)
    {
        if (processes[i].ID == processid)
        {
            found = 1;
            for (int j = i; j < processescount - 1; j++)
            {
                processes[j] = processes[j + 1];
            }
            processescount--;
            break;
        }
    }
    for (int k = processescount; k < 5; k++)
    {
        processes[k].ID = 0;
    }
}
