#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    char designation[50];
    float salary;
};

struct Node {
    struct Employee employee;
    struct Node* next;
};
// Global variable to store the head of the linked list
struct Node* head = NULL; 

void addEmployee() {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
    printf("\n");
    printf("Enter employee ID: ");
    scanf("%d", &newNode->employee.id); 
    printf("Enter employee name: ");
    scanf(" %[^\n]", newNode->employee.name); 
    printf("Enter employee designation: ");
    scanf(" %[^\n]", newNode->employee.designation); 
    printf("Enter employee salary: ");
    scanf("%f", &newNode->employee.salary);
    newNode->next = NULL; 

    printf("\n");

    if (head == NULL) {
        head = newNode; 
    } else {
        struct Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next; 
        }
        temp->next = newNode; 
    }

    printf("Employee added successfully.\n");
}

void deleteEmployee() {
    if (head == NULL) {
        printf("No employees to delete.\n");
        return;
    }

    int id;
    printf("Enter employee ID to delete: ");
    scanf("%d", &id); 

    struct Node* curr = head;
    struct Node* prev = NULL;

    if (curr != NULL && curr->employee.id == id) {
        head = curr->next; 
        free(curr); 
        printf("Employee deleted successfully.\n");
        return;
    }

    while (curr != NULL && curr->employee.id != id) {
        prev = curr;
        curr = curr->next; 
    }

    if (curr == NULL) {
        printf("Employee not found.\n");
        return;
    }

    prev->next = curr->next; 
    free(curr); 
    printf("Employee deleted successfully.\n");
}

void searchEmployee() {
    if (head == NULL) {
        printf("No employees to search.\n");
        return;
    }

    int id;
    printf("Enter employee ID to search: ");
    scanf("%d", &id); 

    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->employee.id == id) { 
            printf("Employee found:\n");
            printf("ID: %d\n", temp->employee.id);
            printf("Name: %s\n", temp->employee.name);
            printf("Designation: %s\n", temp->employee.designation);
            printf("Salary: %.2f\n", temp->employee.salary);
            return;
        }
        temp = temp->next; // Traverse the list to find the employee
    }

    printf("Employee not found.\n");
}

void displayEmployees() {
    if (head == NULL) {
        printf("No employees to display.\n");
        return;
    }

    struct Node* temp = head;
    printf("Employee List:\n");
    while (temp != NULL) {
        printf("ID: %d\n", temp->employee.id);
        printf("Name: %s\n", temp->employee.name);
        printf("Designation: %s\n", temp->employee.designation);
        printf("Salary: %.2f\n\n", temp->employee.salary);
        temp = temp->next; 
    }
}

void freeMemory() {
    struct Node* temp = head;
    while (head != NULL) {
        head = head->next;
        free(temp); 
        temp = head;
    }
}

int main() {
    int choice;

    while (1) {
        printf("Employee Management System\n");
        printf("1. Add Employee\n");
        printf("2. Delete Employee\n");
        printf("3. Search Employee\n");
        printf("4. Display Employees\n");
        printf("5. Exit\n");

        printf("\n");
        printf("Enter your choice: ");
        scanf("%d", &choice); 

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                deleteEmployee();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                displayEmployees();
                break;
            case 5:
                freeMemory();
                printf("Exiting the program. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
