#include <iostream>

int main() {
    int start_time, end_time, duration, start_year, start_month, start_day,end_year, end_month, end_day;
    char op;

    do {
        printf("Start datetime: (Press ENTER after typing each one)");
        scanf("%d %d %d %d", &start_time, &start_day, &start_month, &start_year);

        printf("End datetime: (Press ENTER after typing each one)");
        scanf("%d %d %d %d", &end_time, &end_day, &end_month, &end_year);

        if (start_day == end_day && start_month == end_month && start_year == end_year) {
            duration = end_time - start_time;

        } else if (start_month == end_month && start_year == end_year) {
            duration = ((end_day - start_day) * 24) + (end_time - start_time);

        } else if (start_year == end_year) {
            duration = ((end_month - start_month) * 730) + ((end_day - start_day) * 24) + (end_time - start_time);

        } else{
            duration = ((end_year - start_year) * 8766) + ((end_month - start_month) * 730) + ((end_day - start_day) * 24) + (end_time - start_time);

        }

        printf("It took %d hours for the game to finish.\n", duration);
        printf("\n Wanna leave? Type 'y' if you wanna leave.\n");
        op = getchar();

    }while(op != 'y');

    return 0;
}
