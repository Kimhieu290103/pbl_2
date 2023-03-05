#pragma once
#include <vector>
#include<iostream>
#include<fstream>
#include<iomanip>
#include <string>
using namespace std;
class NhanVien{
    protected:
    double Id;
    string Name;
    string DateOfBirth;
    string Address;
    string Gender;
    int CCCD;
    int SDT;
    public:
    NhanVien();
    ~NhanVien();
    void Set_Id(double);
    void Set_SDT(int);
    void Set_CCCD(int);
    void Set_Name(string);
    void Set_DateOfBirth(string);
    void Set_Gender(string);
    void Set_Address(string);
    double Get_Id();
    int Get_SDT();
     int Get_CCCD();
    string Get_Name();
    string Get_DateOfBirth();
    string Get_Gender();
    string Get_Address();
    virtual float Tinhluong();
    virtual void InPut();
    virtual void OutPut();
    virtual void DocFile(fstream &);
    virtual void XuatFile(fstream &);
    friend ostream& operator<<(ostream&,NhanVien&);

};