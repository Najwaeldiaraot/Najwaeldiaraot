//created by 23343079_Najwa Eldiara Owilia Tiksa
#include <stdio.h>

int display(struct student s);

struct student
{
    char name [50];
	int age;
};

int main() {
    struct student s1;

    printf( "Enter name: ");
	scanf("%[^\n]%*c", s1.name);
	
	printf("Enter age: ");
	scanf("%d", &s1.age);
	
	display(s1);  //passing structure as an argument
}
// membuat fungsi dengan struct sebagai parameter
int display(struct student s) {
    printf("\nDisplaying information \n");
	printf("Name: %s", s.name) ;
	printf("\nRoll: %d", s.age);
}