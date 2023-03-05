#include"NVthuctap.h"
float NVthuctap::Tinhluong(){
    return this->working_time*1000;
}
void NVthuctap::DocFile(fstream &file){
    NhanVien::DocFile(file);
    file>>this->working_time;
}
void NVthuctap::XuatFile(fstream &file){
    NhanVien::XuatFile(file);
    file<<"Chuc vu: Nhan vien thuc tap"<<endl;
    file<<"thoi gian lam thu viec(thang): "<<this->working_time<<endl;
    file<<"luong: "<<Tinhluong()<<endl;
    
}
void NVthuctap::InPut(){
    NhanVien::InPut();
    cout<<endl;
    cout<<"nhap thoi gian lam thu viec(thang): ";
    cin>>this->working_time;
}
void NVthuctap::OutPut(){
    NhanVien::OutPut();
    cout<<"thoi gian lam thu viec(thang): "<<this->working_time<<endl;
    cout<<"luong: "<<Tinhluong();
}
