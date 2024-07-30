#include <stdio.h>

 //creating strtucture
struct Student {
    char name[90];
    int age;
    long regi;
    float weight;
    double Ph;
}s; //structure variable

/* Structure Definition: Defines a new data type struct Student with five members: name, age, regi, weight, and Ph. This structure can be used to group these related variables together.
Structure Variable: s is a variable of type struct Student that holds the actual data for a student.
    */
void get(struct Student *s) //storing in memory loactions stored in pointer s
{
    printf("Enter details for student:\n");
    
   printf("Name: ");
    scanf(" %s", s->name);
    printf("Age: ");
    scanf("%d", &s->age);
    printf("Registration Number: ");
    scanf("%ld", &s->regi);
    printf("Weight: ");
    scanf("%f", &s ->weight);
    printf("Phone Number: ");
    scanf("%lf", &s ->Ph);
    while(s ->Ph<1000000000||s ->Ph>9999999999)
        {
            printf(" Invaild number entered,\n Please enter again");
            printf("\n\nPhone Number: ");
            scanf("%lf", &s ->Ph);
        }
        printf("\n");  
}


void put(struct Student *s) //printing from memory loactions stored in pointer s
{
    printf("\nPrinting records:\n");
    
    printf("Name: %s\n",s ->name);
    printf("Age: %d\n", s ->age);
    printf("Registration Number: %ld\n",s ->regi);
    printf("Weight: %f\n", s ->weight);
    printf("Phone Number: %.0f\n", s ->Ph);
    printf("\n");
    
}

/*Function Parameter: The get function takes a pointer to a struct Student as its parameter (struct Student *s). This allows the function to access and modify the original struct Student variable passed to it.
Pointer Dereferencing: Inside get, s->name, s->age, etc., are used to access the members of the structure pointed to by s. The -> operator is used for dereferencing pointers to access members of the structure.
Function Parameter: Similar to get, the put function takes a pointer to a struct Student and prints the values of its members.
*/

int main()
{
    struct Student s; //intialize structure variable
    get(&s); // get data to loactions stored in s
    put(&s); // print data from locations in s
    return 0;
}

/*Structure Variable: s is declared as a local variable of type struct Student within main.
Function Calls:
get(&s) passes the address of s to the get function, allowing it to modify the contents of s.
put(&s) passes the address of s to the put function, allowing it to access and print the contents of s.*/
