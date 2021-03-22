#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sort;
    int capacitors_in_series;
    float operation = 0;
    float capacitance;
    float equal_capacitance;


    printf("\n How many capacitors are connected as series = ");
    scanf("%d",&capacitors_in_series);

    printf("\n You will enter %d capacitance value. ", capacitors_in_series);

    for (i=0;i<capacitors_in_series;i++){
        sort = i+1;
        printf("\n %d. capacitance value = ",sort);
        scanf("%f",&capacitance);
        operation = (operation+(1/(capacitance)));
    }

    equal_capacitance = (1/(operation));

    printf("\n Equal Capacitance in Series = %f ",equal_capacitance);

    return 0;


}
