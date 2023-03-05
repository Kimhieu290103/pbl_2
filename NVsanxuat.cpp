#include"NVsanxuat.h"
NVsanxuat::NVsanxuat(){

}
void NVsanxuat::DocFile(fstream & file){
    NhanVien::DocFile(file);
    file>>this->product_number;
}
void NVsanxuat::XuatFile(fstream &file){
    NhanVien::XuatFile(file);
    file<<"Chuc vu: Nhan vien san xuat"<<endl;
    file<<"so san pham: "<<this->product_number<<endl;
    file<<"luong:"<<Tinhluong()<<endl;
}
void NVsanxuat::InPut(){
    NhanVien::InPut();
    cout<<"\n nhap so san pham:  ";
    cin>>this->product_number;
}
void NVsanxuat::OutPut(){
   NhanVien::OutPut();
    cout<<"so san pham:  "<<this->product_number<<endl;
    cout<<"luong:  "<<Tinhluong();
}
float NVsanxuat::Tinhluong(){
    return this->product_number*50000;
}