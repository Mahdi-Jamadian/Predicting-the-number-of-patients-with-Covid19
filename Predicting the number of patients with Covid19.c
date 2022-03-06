#include <stdio.h>
#include <math.h>
/* My name Is : Mahdi Jamadian.
 * My Gmail :  Mr.jamadian@gmail.com
 * Instagram :Mahdi_Jamadian
 * My Git hub : Mahdi_Jamadian
 * */
int COVID_19() {
    printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
    printf(" Predicting the number of patients with Covid 19 \n");
    printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
    for (int a = 0; a < 3; ++a) {
        float day = 0;
        double injured = 1;
         unsigned long long int m;
        printf("\n Enter the first day to calculate the injured : ");
        scanf("%f", &day);
        day = day;
        for (int i = 0; i < day; ++i) {
            injured = injured + (injured * 0.28);
            m  = abs(injured);
        }
        printf("\n------------------------------------------------------------------\n");
        printf(" The number of people infected with this virus is : %d",m);
        printf("\n------------------------------------------------------------------\n");
    }
}
int main() {
COVID_19();
    return 0;
}
