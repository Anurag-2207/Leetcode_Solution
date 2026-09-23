class Solution {
public:
    double angleClock(int hour, int minutes) {
        if(hour==12) hour=0;
        int hrmin=hour*5;
        if(hrmin<minutes){
            double x=minutes-hrmin;
            x*=6;
            double y=minutes/2.0;
            double ans=x-y;
            double ans2=360-x+y;
            double res=min(ans,ans2);
            if(res<0) return -res;

            return res;
        }
        else{
            double x=hrmin-minutes;
            x*=6;
            double y=minutes/2.0;
            double ans=x+y;
            double ans1=360-x-y;
            double res=min(ans,ans1);
            if(res<0) return -res;
            return res;
        }
        return -1;
    }
};