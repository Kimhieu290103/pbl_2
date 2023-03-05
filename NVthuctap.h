
#pragma once
#include"NhanVien.h"
class NVthuctap:public NhanVien{
 int working_time;
 public:
 void DocFile(fstream &);
 void XuatFile(fstream &);
 void InPut();
 void OutPut();
 float Tinhluong();
};