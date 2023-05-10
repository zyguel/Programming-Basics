#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include <stdbool.h>
#define MAX_AGE 120
#define MAX_STORE 40
#define MAX_MONEY 100000
#define DIAMOND
#define PLATINUM
#define GOLD
#define SILVER
#define BRONZE

int limit;
int flag;
void pausechar(){
	getchar();
}
typedef struct {
    char name[50];
    int age;
} Person;

void writePersonToFile(FILE *fp, Person *p) {
    fwrite(p, sizeof(Person), 1, fp);
}

void readPersonFromFile(FILE *fp, Person *p) {
    fread(p, sizeof(Person), 1, fp);
}

Person *createMultipleData(){
	int numpersons;
	RETRY:
	if (flag == 1){
		getchar();
	}
	flag = 0;
	printf("\n\nEnter number of Persons to input : ");
		if (scanf(" %d", &numpersons) != 1){
			printf("Enter whole numeric input only!\n");
			flag = 1;
			goto RETRY;
		}
	getchar();	
	
	limit = numpersons;
	Person *p;
	int i;
	p = (Person*)malloc(sizeof(Person)*(numpersons+1));
	for (i=0;i<numpersons;i++){
		char name[250];
		printf("\n\n");
		printf("Enter info of Student #%d\n", i+1);
		printf("Enter name : ");
		scanf(" %[^\n]s", name);
		getchar();
		strcpy(p[i].name,name);	
		printf("Enter age : ");
		scanf(" %d", &(p[i].age));
		getchar();
	}
	return p;
}


int main(int argc, char *argv[]) {
    FILE *fp;
    fp = fopen("file.txt", "w+");
    Person student, fStudent;
    strcpy(student.name,"Patrick");
    student.age = 20;
    writePersonToFile(fp, &student);
    fclose(fp);

    fp = fopen("file.txt", "r"); //r+ will make the whole code return a large value and ended up processing much slower; Unless a+ is changed to w+ in  line 58;
    readPersonFromFile(fp, &fStudent);
    printf("%s - %d", fStudent.name, fStudent.age);
    fclose(fp);
    
    Person *GET_Student;
    GET_Student = createMultipleData();
	
	fp = fopen("file.txt", "a+"); // open file in w+ mode for overwrite apply w+ if line 50 mode is changed to r+; But will overwrite last data copied;.
    int i;
    for (i = 0; i < limit; i++) {
        writePersonToFile(fp, &GET_Student[i]); // write each person to the file
    }
    fclose(fp);
    
	fp = fopen("file.txt", "r");
	if (fp != NULL) {
	    int i = 0;
	    Person *p = GET_Student;
	    while (fread(&p[i], sizeof(Person), 1, fp) == 1) {
	        printf("\n\nPerson #%d\n", i+1);
	        printf("Name: %s\n", p[i].name);
	        printf("Age: %d\n", p[i].age);
	        i++;
	    }
	    fclose(fp);
	} else {
	    printf("File not found.\n");
	}

	
    return 0;
}
