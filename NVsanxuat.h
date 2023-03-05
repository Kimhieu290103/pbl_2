#pragma once
#include"NhanVien.h"
class NVsanxuat:public NhanVien{
    private:
    int product_number;
    public:
    NVsanxuat();
    void DocFile(fstream&);
    void XuatFile(fstream&);
    void InPut();
    void OutPut();
    float Tinhluong();
};