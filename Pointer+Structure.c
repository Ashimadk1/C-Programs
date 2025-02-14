#include <stdio.h>


struct EmpAddress {
    char *ename;        
    char stname[20];   
    int PhoneNumber;        
} 
employee = {"Ashim", "Lakeside \n", 98499999999}, *pt = &employee;

int main() {
    
    

   
    printf(" %s from %s \n\n", pt->ename, (*pt).stname);
    return 0;
}

