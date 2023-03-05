#pragma once
#include"NhanVien.h"
class NVvanphong: public NhanVien{
private:
int years_of_experience;
public:
void DocFile(fstream &);
void XuatFile(fstream &);
void InPut();
void OutPut();
float Tinhluong();
};