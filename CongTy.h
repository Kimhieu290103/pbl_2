#pragma once
#include<fstream>
#include"NVquanly.h"
#include"NVsanxuat.h"
#include"NVthuctap.h"
#include"NVvanphong.h"
#include"List.h"
#include"NhanVien.h"

class CongTy{
    private:
    List<NhanVien*> list;
    public:
    void Docfile(fstream&);
    void Xuatfile(fstream&);
    void Input();
    void Output();
    float Tinhluong();
    void Themvaovitribatki(int);
    int IndexOf(double);
    void Update(double&);
    void Delete(double);
    void Sapxeptheoluong();
    void TimnhanvienthemID(fstream&);
    bool check();
    
};