class Date {
    public:
        typedef unsigned time_t;
        
        Date(time_t yy, time_t mm, time_t dd, time_t h, time_t m, time_t s):
            year(yy), month(mm), day(dd), hour(h), minute(m), second(s) {}
        
        Date(): Date(0, 0, 0, 0, 0, 0) {}
        Date(time_t yy, time_t mm, time_t dd): Date(yy, mm, dd, 12, 0, 0) {}
        
    private:
        time_t year, month, day, hour, minute, second;
};