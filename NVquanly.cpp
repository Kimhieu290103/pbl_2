#include"NVquanly.h"
void NVquanly::DocFile(fstream &file){
    NhanVien::DocFile(file);
    file>>this->Coefficients_salary;
    file.ignore(2);
    file>>this->Basic_salary;
}
void NVquanly::XuatFile(fstream &file){
    NhanVien::XuatFile(file);
    file<<"Chuc vu: Nhan vien quan ly"<<endl;
    file<<"he so luong:  "<<this->Coefficients_salary<<endl;
    file<<"luong co ban: "<<this->Basic_salary<<endl;
    file<<"tong luong: "<< Tinhluong()<<endl;
}
void NVquanly::InPut(){
    NhanVien::InPut();
    cout<<endl;
    cout<<"nhap he so luong: ";
    cin>>this->Coefficients_salary;
    cout<<endl;
    cout<<"nhap luong co ban: ";
    cin>>this->Basic_salary;
}
void NVquanly::OutPut(){
    NhanVien::OutPut();
    cout<<"he so luong: "<<this->Coefficients_salary;
    cout<<"luong co ban:  "<< this->Basic_salary;
    cout<<" tong luong: "<<Tinhluong()<<endl;
    
}
float NVquanly::Tinhluong(){
    return this->Coefficients_salary*this->Basic_salary;
}