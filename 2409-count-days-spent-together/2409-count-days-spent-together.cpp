class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {
        string x = max(arriveAlice, arriveBob);
        string y = min(leaveAlice, leaveBob);
        if(x>y) return 0;
        int a = (x[0] - '0') * 10 + (x[1] - '0'); 
        int b = (y[0] - '0') * 10 + (y[1] - '0'); 
        int c = (x[3] - '0') * 10 + (x[4] - '0');
        int d = (y[3] - '0') * 10 + (y[4] - '0');
        int days = 0;
        for (int i = 1; i < a; i++) {
            if (i == 1)
                days += 31;
            if (i == 2)
                days += 28;
            if (i == 3)
                days += 31;
            if (i == 4)
                days += 30;
            if (i == 5)
                days += 31;
            if (i == 6)
                days += 30;
            if (i == 7)
                days += 31;
            if (i == 8)
                days += 31;
            if (i == 9)
                days += 30;
            if (i == 10)
                days += 31;
            if (i == 11)
                days += 30;
            if (i == 12)
                days += 31;
        }
        days += c;
        int day = 0;
        for (int i = 1; i < b; i++) {
            if (i == 1)
                day += 31;
            if (i == 2)
                day += 28;
            if (i == 3)
                day += 31;
            if (i == 4)
                day += 30;
            if (i == 5)
                day += 31;
            if (i == 6)
                day += 30;
            if (i == 7)
                day += 31;
            if (i == 8)
                day += 31;
            if (i == 9)
                day += 30;
            if (i == 10)
                day += 31;
            if (i == 11)
                day += 30;
            if (i == 12)
                day += 31;
        }
        day += d;
        if (day - days + 1 < 0)
            return 0;
        return day - days + 1;
    }
};