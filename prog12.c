#include<stdio.h>
int main()
{
    // if the marks obtained by a student in five different subjects are input through the keyboard, 
    //find out the aggregate marks and 
    // percentage marks obtained by the student. 
    //assume that the maximum marks that can be obtained by a student in each subject is 100;

    float physics,maths,chemistry,music,english,percentage,marksobtained,aggregate,no,tm;

    printf("marks obtained in physics: ");
    scanf("%f",&physics);
    printf("marks obtained in maths: ");
    scanf("%f",&maths);
    printf("marks obtained in chemistry: ");
    scanf("%f",&chemistry);
    printf("marks obtained in music: ");
    scanf("%f",&music);
    printf("marks obtained in english: ");
    scanf("%f",&english);
    tm = physics + maths + chemistry + music + english;
    
   // Maximum marks obtained by students is 100;
    percentage = (tm*100) / 500;

    printf("percentage =%.2f", percentage);
    return 0;


}