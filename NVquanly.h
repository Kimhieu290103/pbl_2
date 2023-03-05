#pragma once
#include"NhanVien.h"
class NVquanly:public NhanVien{
private:
    double Coefficients_salary;
    double Basic_salary;
public:
    void DocFile(fstream &);
    void XuatFile(fstream &);
    void InPut();
    void OutPut();
    float Tinhluong();
};