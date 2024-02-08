#ifndef PROCESSED_H
#define PROCESSED_H
struct Process
{
    int ID;
    char name[30];
};
extern struct Process processes[5];
extern int processescount;
int createnewprocess(const char processname[30]);
void stopprocess(int processid);

#endif