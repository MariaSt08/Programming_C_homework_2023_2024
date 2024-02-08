#include<stdio.h>
#include<string.h>
#include"schoolclass.h"
#include"schoolroom.h"
struct School
{
struct SchoolClass school_classes[20];
struct SchoolRoom school_rooms[10];
};
int main(void)
{
    struct School my_school;
    my_school.school_rooms[0].num_room=2122;
    my_school.school_classes[1].num_class=9;
    strcpy(my_school.school_classes[1].students[22].name,"Maria");
    strcpy(my_school.school_classes[1].students[22].surname,"Stephanova");
    printf("\n Nomerut na staqta e: %d",my_school.school_rooms[0].num_room);
    printf("\n Nomerut na klasa e: %d",my_school.school_classes[1].num_class);
    printf("\n Uchenikut se kazva: %s",my_school.school_classes[1].students[22].name);
    printf("\n Familiqta na uchenika e: %s",my_school.school_classes[1].students[22].surname);
}