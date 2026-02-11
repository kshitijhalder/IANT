/***************************************************************
* 	Program Goal: Create a program with student data and class performance.
*   Student Data: Daily attendance, class teacher name, student name.
*	Class Performance Data: Subject results, behavior, monthly attendance report, and grade (A to D).
****************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_STUDENTS 50
#define MAX_NAME_LENGTH 50
#define MAX_SUBJECTS 5
#define MAX_BEHAVIOR_NOTES 5
#define MAX_ATTENDANCE_DAYS 30

typedef struct {
    char name[MAX_NAME_LENGTH];
    char teacher[MAX_NAME_LENGTH];
    bool attendance[MAX_ATTENDANCE_DAYS]; // 0 = absent, 1 = present
    struct {
        char subject[MAX_NAME_LENGTH];
        char grade;
    } subjects[MAX_SUBJECTS];
    char behaviorNotes[MAX_BEHAVIOR_NOTES][MAX_NAME_LENGTH];
    int monthlyAttendance;
    char overallGrade;
} Student;

void initializeStudent(Student* student, const char* name, const char* teacher) {
    strcpy(student->name, name);
    strcpy(student->teacher, teacher);
    for (int i = 0; i < MAX_ATTENDANCE_DAYS; i++) {
        student->attendance[i] = false;
    }
    student->monthlyAttendance = 0;
    student->overallGrade = ' ';
}

void markAttendance(Student* student, int day, bool present) {
    if (day >= 0 && day < MAX_ATTENDANCE_DAYS) {
        student->attendance[day] = present;
        if (present) {
            student->monthlyAttendance++;
        }
    }
}

void addSubjectGrade(Student* student, const char* subject, char grade) {
    static int subjectCount = 0;
    if (subjectCount < MAX_SUBJECTS) {
        strcpy(student->subjects[subjectCount].subject, subject);   
        student->subjects[subjectCount].grade = grade;
        subjectCount++;
    }
}

void addBehaviorNote(Student* student, const char* note) {
    static int behaviorCount = 0;
    if (behaviorCount < MAX_BEHAVIOR_NOTES) {
        strcpy(student->behaviorNotes[behaviorCount], note);
        behaviorCount++;
    }
}

void calculateOverallGrade(Student* student) {
    int total = 0;
    int count = 0;
    for (int i = 0; i < MAX_SUBJECTS; i++) {
        if (student->subjects[i].grade != '\0') {
            total += (int)student->subjects[i].grade;
            count++;
        }
    }
    if (count > 0) {
        double average = (double)total / count;
        if (average >= 90) {
            student->overallGrade = 'A';
        } else if (average >= 80) {
            student->overallGrade = 'B';
        } else if (average >= 70) {
            student->overallGrade = 'C';
        } else {
            student->overallGrade = 'D';
        }
    }
}

void printStudentReport(const Student* student) {
    printf("\nStudent Name: %s\n", student->name);
    printf("Class Teacher: %s\n", student->teacher);
    printf("\nSubjects and Grades:\n");
    for (int i = 0; i < MAX_SUBJECTS; i++) {
        if (student->subjects[i].grade != '\0') {
            printf("%s: %c\n", student->subjects[i].subject, student->subjects[i].grade);
        }
    }
    printf("\nBehavior Notes:\n");
    for (int i = 0; i < MAX_BEHAVIOR_NOTES; i++) {
        if (strlen(student->behaviorNotes[i]) > 0) {
            printf("%s\n", student->behaviorNotes[i]);
        }
    }
    printf("\nAttendance Record:\n");
    for (int i = 0; i < MAX_ATTENDANCE_DAYS; i++) {
        printf("Day %d: %s\n", i + 1, student->attendance[i] ? "Present" : "Absent");
    }
    printf("\nMonthly Attendance: %d days present\n", student->monthlyAttendance);
    printf("\nOverall Grade: %c\n", student->overallGrade);
}

int main() {
    Student students[MAX_STUDENTS];
    int studentCount = 0;

    char input[MAX_NAME_LENGTH];
    int choice;

    // Label for the main menu
    main_menu:
    while (1) {
        printf("\n1. Add Student\n");
        printf("2. Mark Attendance\n");
        printf("3. Add Subject Grade\n");
        printf("4. Add Behavior Note\n");
        printf("5. Generate Report\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline

        switch (choice) {
            case 1: {
                if (studentCount < MAX_STUDENTS) {
                    printf("Enter student name: ");
                    fgets(input, MAX_NAME_LENGTH, stdin);
                    // Remove newline and trim whitespace
                    input[strcspn(input, "\n")] = '\0';
                    printf("Enter class teacher name: ");
                    fgets(input, MAX_NAME_LENGTH, stdin);
                    input[strcspn(input, "\n")] = '\0';
                    initializeStudent(&students[studentCount], input, input);
                    studentCount++;
                    printf("Student added successfully!\n");
                } else {
                    printf("Maximum number of students reached!\n");
                    goto main_menu; // Return to main menu
                }
                break;
            }
            case 2: {
                if (studentCount > 0) {
                    printf("Enter student name: ");
                    fgets(input, MAX_NAME_LENGTH, stdin);
                    input[strcspn(input, "\n")] = '\0';
                    // Trim whitespace from input
                    input[strcspn(input, " \t")] = '\0';
                    int studentIndex = -1;
                    // Case-insensitive comparison
                    for (int i = 0; i < studentCount; i++) {
                        char nameCopy[MAX_NAME_LENGTH];
                        strcpy(nameCopy, students[i].name);
                        // Convert both names to lowercase
                        char inputLower[MAX_NAME_LENGTH], nameLower[MAX_NAME_LENGTH];
                        strcpy(inputLower, input);
                        strcpy(nameLower, nameCopy);
                        strlwr(inputLower);
                        strlwr(nameLower);
                        if (strcmp(inputLower, nameLower) == 0) {
                            studentIndex = i;
                            break;
                        }
                    }
                    if (studentIndex != -1) {
                        int day;
                        printf("Enter day (1-30): ");
                        scanf("%d", &day);
                        getchar();
                        bool present;
                        printf("Was the student present? (1 for yes, 0 for no): ");
                        scanf("%d", &present);
                        markAttendance(&students[studentIndex], day - 1, present);
                        printf("Attendance marked successfully!\n");
                    } else {
                        printf("Student not found!\n");
                        goto main_menu; // Return to main menu
                    }
                } else {
                    printf("No students added yet!\n");
                    goto main_menu; // Return to main menu
                }
                break;
            }
            case 3: {
                if (studentCount > 0) {
                    printf("Enter student name: ");
                    fgets(input, MAX_NAME_LENGTH, stdin);
                    input[strcspn(input, "\n")] = '\0';
                    input[strcspn(input, " \t")] = '\0';
                    int studentIndex = -1;
                    for (int i = 0; i < studentCount; i++) {
                        char nameCopy[MAX_NAME_LENGTH];
                        strcpy(nameCopy, students[i].name);
                        char inputLower[MAX_NAME_LENGTH], nameLower[MAX_NAME_LENGTH];
                        strcpy(inputLower, input);
                        strcpy(nameLower, nameCopy);
                        strlwr(inputLower);
                        strlwr(nameLower);
                        if (strcmp(inputLower, nameLower) == 0) {
                            studentIndex = i;
                            break;
                        }
                    }
                    if (studentIndex != -1) {
                        printf("Enter subject: ");
                        fgets(input, MAX_NAME_LENGTH, stdin);
                        input[strcspn(input, "\n")] = '\0';
                        input[strcspn(input, " \t")] = '\0';
                        char grade;
                        printf("Enter grade (A-D): ");
                        scanf(" %c", &grade);
                        addSubjectGrade(&students[studentIndex], input, grade);
                        printf("Subject grade added successfully!\n");
                    } else {
                        printf("Student not found!\n");
                        goto main_menu; // Return to main menu
                    }
                } else {
                    printf("No students added yet!\n");
                    goto main_menu; // Return to main menu
                }
                break;
            }
            case 4: {
                if (studentCount > 0) {
                    printf("Enter student name: ");
                    fgets(input, MAX_NAME_LENGTH, stdin);
                    input[strcspn(input, "\n")] = '\0';
                    input[strcspn(input, " \t")] = '\0';
                    int studentIndex = -1;
                    for (int i = 0; i < studentCount; i++) {
                        char nameCopy[MAX_NAME_LENGTH];
                        strcpy(nameCopy, students[i].name);
                        char inputLower[MAX_NAME_LENGTH], nameLower[MAX_NAME_LENGTH];
                        strcpy(inputLower, input);
                        strcpy(nameLower, nameCopy);
                        strlwr(inputLower);
                        strlwr(nameLower);
                        if (strcmp(inputLower, nameLower) == 0) {
                            studentIndex = i;
                            break;
                        }
                    }
                    if (studentIndex != -1) {
                        printf("Enter behavior note: ");
                        fgets(input, MAX_NAME_LENGTH, stdin);
                        input[strcspn(input, "\n")] = '\0';
                        input[strcspn(input, " \t")] = '\0';
                        addBehaviorNote(&students[studentIndex], input);
                        printf("Behavior note added successfully!\n");
                    } else {
                        printf("Student not found!\n");
                        goto main_menu; // Return to main menu
                    }
                } else {
                    printf("No students added yet!\n");
                    goto main_menu; // Return to main menu
                }
                break;
            }
            case 5: {
                if (studentCount > 0) {
                    printf("Enter student name: ");
                    fgets(input, MAX_NAME_LENGTH, stdin);
                    input[strcspn(input, "\n")] = '\0';
                    input[strcspn(input, " \t")] = '\0';
                    int studentIndex = -1;
                    for (int i = 0; i < studentCount; i++) {
                        char nameCopy[MAX_NAME_LENGTH];
                        strcpy(nameCopy, students[i].name);
                        char inputLower[MAX_NAME_LENGTH], nameLower[MAX_NAME_LENGTH];
                        strcpy(inputLower, input);
                        strcpy(nameLower, nameCopy);
                        strlwr(inputLower);
                        strlwr(nameLower);
                        if (strcmp(inputLower, nameLower) == 0) {
                            studentIndex = i;
                            break;
                        }
                    }
                    if (studentIndex != -1) {
                        calculateOverallGrade(&students[studentIndex]);
                        printStudentReport(&students[studentIndex]);
                    } else {
                        printf("Student not found!\n");
                        goto main_menu; // Return to main menu
                    }
                } else {
                    printf("No students added yet!\n");
                    goto main_menu; // Return to main menu
                }
                break;
            }
            case 6:
                printf("Exiting program!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again!\n");
                goto main_menu; // Return to main menu
        }
    }

    return 0;
} 