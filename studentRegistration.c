#include <stdio.h>
#include <string.h>

int main() 
{
    char stdname[100];
    printf("Enter your name:\n");
    scanf("%[^\n]s", stdname);
    
    char mail[100];
    printf("Enter your email id.\n");
    scanf("%s", mail);
    if(!mail) {
        printf("an email address is mandatory to complete this registration!");
        return 0;
    }
    else {
            int deptcode;
    printf("Enter your department:\n============\nDepartment Codes:\n============\n+ ECE: 121\n+ CSE: 131\n+ EEE: 141\n+ ENI: 151\n+ MECHANICAL: 161\n============\nDepartment Code: ");
    scanf("%d", &deptcode);
    
    int allcodes[] = {121, 131, 141, 151, 161};
    int len = sizeof allcodes / sizeof allcodes[0];
    int found = 0;
        for (int i = 0; i < len; i++) {
        if (allcodes[i] == deptcode) {
            found = 1;
            break;
        }
    }
    
    //tution fee varies from dept 
    int tfee;
    if(deptcode == 121) {
        tfee = 100000;
    }
    else if(deptcode == 131) {
        tfee = 120000;
    }
    else if(deptcode == 141) {
        tfee = 90000;
    }
    else if(deptcode == 151) {
        tfee = 50000;
    }
    else if(deptcode == 161) {
        tfee = 60000;
    }
    
    if(!found) {
        printf("Sorry %s we donot offer any courses other than CSE, ECE, EEE, MECH, ENI", stdname);
        return 0;
    }
    else {
        char type[50];
        char tmode[50];
        char htype[50];
        
        int hfee, bfee;
        printf("Which mode do you prefer? (hostel/nonhostel)?\n");
        scanf("%s", type);
        
        if(strcmp(type, "nonhostel") ==0) {
            hfee=0;
            printf("Which mode of transport do you prefer? (bus/self)\n");
            scanf("%s", tmode);
            bfee=5000;
        }
        else {
            printf("How do you want your hostel room to be? (ac/nonac)?\n");
            scanf("%s", htype);
            if(strcmp(htype, "ac") ==0) {
                hfee = 65000;
            }
            else {
                hfee=40000;
            }
            bfee=0;
        }
        int totalfee = tfee+bfee+hfee;
        printf("\n\n============================\n");        
        printf("Registration complete....\n");
        printf("============================\n");
        printf("please find your details below:\n");
        printf("============================\n");
        printf("Student Details:\n");
        printf("Name: %s\n", stdname);
        printf("Email: %s\n", mail);
        printf("Department Code: %d\n", deptcode);
        printf("Resident Type: %s\n", type);
        printf("Hostel Type: %s\n", htype);
        printf("Transport Type: %s\n", tmode);
        printf("============================\n");
        printf("Fee details:\nTution Fees: ₹ %d\nHostel Fees: ₹ %d\nTransport Fees: ₹ %d\n", tfee, hfee, bfee);
        printf("============================\n");
        printf("Total fees: ₹ %d", totalfee);
        
    }
}}
