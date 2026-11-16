
#include <stdio.h>

struct HospitalRecord {
    
    struct PatientInfo {
        int PatientID;
        char Name[30];
        int Age;
    } patient;

    int RoomNo;
    int Days;
};

int main() {

    struct HospitalRecord record;

    struct HospitalRecord *ptr;

    ptr = &record;

    printf("Enter Patient ID: ");
    scanf("%d", &ptr->patient.PatientID);

    printf("Enter Patient Name: ");
    scanf("%s", ptr->patient.Name);

    printf("Enter Patient Age: ");
    scanf("%d", &ptr->patient.Age);

    printf("Enter Room Number: ");
    scanf("%d", &ptr->RoomNo);

    printf("Enter Hospitalization Days: ");
    scanf("%d", &ptr->Days);

    printf("\n--- Hospital Record ---\n");

    printf("Patient ID: %d\n", ptr->patient.PatientID);
    printf("Name: %s\n", ptr->patient.Name);
    printf("Age: %d\n", ptr->patient.Age);
    printf("Room Number: %d\n", ptr->RoomNo);
    printf("Days: %d\n", ptr->Days);

    return 0;
}
