#include <stdio.h>

int main(){
    int month=0, date=0;
    scanf("%d%d", &month, &date);

    int lastDate[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    
    int day = 0, i = 0;
    month--;
    while(month!=0){
        day += lastDate[i];
        i++;
        month--;
    }

    // printf("day: %d\n", day);
    day += date;
    day %= 7;

    char dayOfWeek[8][8] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    // printf("day: %d, dayOfWeek: %s", day, dayOfWeek[day]);
    printf("%s", dayOfWeek[day]);

    return 0;
}