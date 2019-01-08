#include<stdio.h>
#include<conio.h>
float v,i,r;
int choice;
main()
{
    printf("What do you want to calculate?\n\n");
    repeat:
    printf("Press 1 for Voltage, 2 for Current, 3 for Resistor :\t");
    scanf("%d",&choice);
    if(choice==1)
        {printf("\n\nVoltage = Current * Resistor\n\n");
        printf("Enter the Resistor's value :");
        scanf("%f",&r);
        printf("Enter the Current's value :");
        scanf("%f",&i);
        v=i*r;
        printf("\n\nVoltage : %f V",v);
        goto end;}
    if(choice==2)
        {printf("\n\nCurrent = Voltage / Resistor\n\n");
        printf("Enter the Voltage's value :");
        scanf("%f",&v);
        printf("Enter the Resistor's value :");
        scanf("%f",&r);
        i=v/r;
        printf("\n\nCurrent : %f A",i);
        goto end;}
    if(choice==3)
        {printf("\n\nResistor = Voltage / Current\n\n");
        printf("Enter the Voltage's value :");
        scanf("%f",&v);
        printf("Enter the Current's value :");
        scanf("%f",&i);
        r=v/i;
        printf("\n\nResistor : %f Ohm",r);
        goto end;}
        else
            {printf("\n\nOops, Try Again!\n\n");
        goto repeat;}
        end:
            printf("\n\n For Exit Press Any Key!");

        getch();

}
