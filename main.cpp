#include <iostream>

int main() {
    int start_time, end_time, duration, start_year, start_month, start_day,end_year, end_month, end_day;

    //tem q colocar uns printfs ai
    scanf("%d %d", &start_time, &end_time);

    scanf("%d %d %d %d %d %d", &start_day, &end_day, &start_month, &end_month, &start_year, &end_year);

    if(start_day == end_day && start_month == end_month && start_year == end_year){
        duration = end_time - start_time;

    }else if(start_month == end_month && start_year == end_year){


    }else if(start_year == end_year){


    }

    printf("%d", duration);

    return 0;
}