#include <stdio.h>
int main(void) {
    int BJT_Time;
    int UTC_Time;
    const int max_time = 2359;

    scanf("%d", &BJT_Time);
    if (BJT_Time <= 759) {
        UTC_Time = max_time - 800 +  BJT_Time + 1; // utc = 2359 - (759 - bjt + 1) + 1

    }
    else {
        UTC_Time = BJT_Time - 800;
    }
    printf("%d", UTC_Time);


}