#include<iostream>
#include<vector>
#include<math.h>
#include<iomanip>
using namespace std;
struct Diem
{
    double x, y;
};

class DaGiac
{
    private:
    vector<Diem> Point;
    
    public:
    DaGiac(vector<Diem> diem)
    {
        for(int i = 0; i < diem.size(); i++)
        {
            Point.push_back(diem[i]);
        }
    }
    float khoang_cach(Diem &diem1, Diem &diem2)
    {
        float do_dai;
        do_dai = sqrt(pow(diem1.x + diem2.x, 2) + pow(diem1.y + diem2.y, 2));
        return do_dai;
    }
    float tinhChuVi()
    {
        float chu_vi = 0;
        if(Point.size() < 3)
        {
            return chu_vi;
        }
        for(int i = 0; i < Point.size(); i++)
        {
            chu_vi = chu_vi = khoang_cach(Point[i], Point[i+1]);
        }
        chu_vi = chu_vi + khoang_cach(Point[0], Point.back());
        return chu_vi;
    }
    ~DaGiac();
};

int main()
{
    Diem mangDiem[] = {{0, 0}, {1, 0}, {1, 1}, {0, 1}};
    vector<Diem> diem(mangDiem, mangDiem+4);
    DaGiac dg(diem);
    // cout<<fixed<< setprecision(2) << dg.tinhChuVi();
}