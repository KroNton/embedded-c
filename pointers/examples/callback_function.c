
#include <stdio.h>

int sensor_value_callback()
{
    int a=5;
    printf("sensor_value_callback function is called\n ");
    return a ;
}

int sensor2_value_callback()
{
    int a=6;
    printf("sensor2_value_callback function is called\n ");
    return a ;
}

int calculate_distance(int (*sensor_callback)())
{
    int sensor_value = (*sensor_callback)();
    int distance = sensor_value *4;
    printf("value of distance is %d\n",distance );
    return distance;
}


int main()
{

   calculate_distance(&sensor_value_callback);
   
   calculate_distance(sensor2_value_callback);


    return 0;
}