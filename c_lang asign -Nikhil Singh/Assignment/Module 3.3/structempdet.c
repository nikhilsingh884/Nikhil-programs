#include <stdio.h>

struct emp
{
    int id;
    char name[20];
    int age;
    char address[150];
};

int main()
{
    struct emp e1 = {101, "Nikhil singh", 25, "A 403 Sai darshan residency, dindoli, surat"};
    struct emp e2 = {105, "Ashish singh", 27, "E 690 Ashok nagar, shahdara, Delhi"};
    struct emp e3 = {105, "Happy singh", 21, "54, laxmi nagar, maliwara chowk, Ghaziabad"};
    struct emp e4 = {105, "Akash Sharma", 27, "A 73, sagar tenament, maninagar, Ahmedabad"};
    struct emp e5 = {105, "Saubir Dey", 27, "J 202 suramya apts, ghodasar, Ahmedabad"};

    printf("The details of employee with id no %d are: %s , %d , %s\n", e1.id, e1.name, e1.age, e1.address);
    printf("The details of employee with id no %d are: %s , %d , %s\n", e2.id, e2.name, e2.age, e2.address);
    printf("The details of employee with id no %d are: %s , %d , %s\n", e3.id, e3.name, e3.age, e3.address);
    printf("The details of employee with id no %d are: %s , %d , %s\n", e4.id, e4.name, e4.age, e4.address);
    printf("The details of employee with id no %d are: %s , %d , %s\n", e5.id, e5.name, e5.age, e5.address);

    return 0;
}