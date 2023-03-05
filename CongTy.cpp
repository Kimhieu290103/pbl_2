#include"CongTy.h"
// int KiemTra(string s)
// {
// 	for (int i = 0; i < s.length(); i++)
// 	{
// 		if (s[i] < '0' || s[i] > '9')
// 		{
// 			return 0;
// 		}
// 	}
// 	return 1;
// }
void CongTy::Docfile(fstream &file){
    int n;
   file>>n;
   cout<<n;
    for(int i=0;i<n;i++){
        char chr;
        file>>chr;
        file.ignore(2);
        if(chr=='A'){
            NhanVien* x=new NVquanly;
            x->DocFile(file);
            list.push_back(x);
        }
        else if(chr=='B'){
            
            NhanVien* x=new NVsanxuat;
            x->DocFile(file);
            list.push_back(x);
        }
        
        else if(chr=='C'){
            NhanVien* x=new NVvanphong;
            x->DocFile(file);
            list.push_back(x);
        }
        else if(chr=='D'){
            NhanVien* x=new NVthuctap;
            x->DocFile(file);
            list.push_back(x);
        }
    }
}
void CongTy::Xuatfile(fstream& file){
    for(int i=0;i<list.Size();i++){
        file<<"\n Thong tin nhan vien thu: "<<i+1<<endl;
        list[i]->XuatFile(file);
    }
    file<<"\n Tong luong cong ty phai tra: "<<to_string( Tinhluong())<<endl;
}
void CongTy::Output(){
    cout<<endl;
    for(int i=0;i<list.Size();i++){
        list[i]->OutPut();
    }
}
float CongTy::Tinhluong(){
    int luong=0;
    for(int i=0;i<list.Size();i++){
        luong+=list[i]->Tinhluong();
    }
    return luong;
}
int CongTy::IndexOf(double m){
    int index=-1;
    for(int i=0;i<list.Size();i++){
        if(list[i]->Get_Id() ==m){
            index=i;
            break;
        }
    }
    return index;
}
void CongTy::Update(double &m){
    int index=IndexOf(m);
    if(index>=0){
        cout<<"\n   Danh sach update    \n";
        cout<<"\n 1.Id      \n";
        cout<<"\n 2.Name      \n";
        cout<<"\n 3.DateOfBirth      \n";
        cout<<"\n 4.Gender      \n";
        cout<<"\n 5.Address      \n";
        cout<<"\n 6.CCCD      \n";
        cout<<"\n 7.SDT      \n";
        cout<<"\n 8.thoat    \n";
        int lc;
        do{
            cout<<"Nhap lua chon muon Update: ";
            cin>>lc;
            if(lc==1){
                rewind(stdin);
                double Id;
                cout<<"\n nhap ma Id moi : ";
                cin>>Id;
                list[index]->Set_Id(Id);
            }
            else if(lc==2){
                rewind(stdin);
                string name;
                cout<<"\n Nhap name moi: ";
                getline(cin, name);
                list[index]->Set_Name(name);
            }
            else if(lc==3){
                rewind(stdin);
                string date;
                cout<<"\n Nhap date moi: ";
                getline(cin,date);
                list[index]->Set_DateOfBirth(date);
            }
            else if(lc==4){
                rewind(stdin);
                string gender;
                cout<<"\n nhap gender moi: ";
                getline(cin,gender);
                list[index]->Set_Gender(gender);
            }
            else if(lc==5){
                rewind(stdin);
                string address;
                cout<<"\n nhap dia chi moi:";
                getline(cin,address);
                list[index]->Set_Address(address);
            }
            else if(lc==6){
                rewind(stdin);
                int cccd;
                cout<<"\n nhap CCCD moi : ";
                cin>>cccd;
                list[index]->Set_CCCD(cccd);
            }
            else if(lc==7){
                rewind(stdin);
                int SDT;
                cout<<"\n nhap SDT moi: ";
                cin>>SDT;
                list[index]->Set_SDT(SDT);
            }
        }
            while(lc!=8);
            list[index]->OutPut();

        }
        else{
            cout<<"\n khong tim thay nhan vien co ma id ban vua nhap!!";
        }
    }
void CongTy::Delete(double m){
    int index=IndexOf(m);
    if(index>=0){
        list.erase(index);
    }
    else{
        cout<<"\n khong tim thay vi tri de xoa!!";
    }
}    
void CongTy::TimnhanvienthemID(fstream& file){
    double s;
    bool check=false;
    cout<<"\n Nhap Id nhan vien muon tim: ";
    cin>>s;
    int i=0;
    for(i=0;i<list.Size();i++){
        if(list[i]->Get_Id()==s){
            check=true;
            break;
        }
    }
    if(check==true){
        file<<"\n thong tin nhan vien co ma can tim la : ";
        list[i]->XuatFile(file);
    }
    else{
        file<<"\n Khong tim thay nhan vien co ma Id:"<<s;
    }
}

void CongTy::Themvaovitribatki(int index){
    int lc;
    cout<<"\n 1.Nhan vien quan ly \n";
    cout<<"\n 2.Nhan vien san xuat \n ";
    cout<<"\n 3.Nhan vien van phong \n";
    cout<<"\n 4.Nhan vien thuc tap\n";
    cout<<"\n Nhap lua chon vi tri  muon them vao: ";
    cin>>lc;
    if(lc==1){
        NVquanly* temp=new NVquanly;
        cout<<"Nhap thong tin nhan vien muon them:"<<endl;
        double id;
        bool check;
        do{
            check=true;
            rewind(stdin);
            cout<<"Nhap Id: ";
            cin>>id;
            for(int i=0;i<list.Size();i++){
                if(list[i]->Get_Id()==id){
                    check=false;
                    break;
                }
            }
            if(check==false){
                cout<<"\n ID da bi trung lap!!";
            }
        }while(check==false);
        temp->Set_Id(id);
        temp->InPut();
        list.add(index,temp);
        
    }
    else if(lc==2){
        NVsanxuat* temp=new NVsanxuat;
        cout<<"\n Nhap thong tin nhan vien muon them:"<<endl;
        double id;
        bool check;
        do{
            check=true;
            rewind(stdin);
            cout<<"\n Nhap ID: \n";
            cin>>id;
            for(int i=0;i<list.Size();i++){
                if(list[i]->Get_Id()==id){
                    check=false;
                    break;
                }
            }
            if(check==false){
                cout<<"ID da bi trung lap!!";
            }
        }while(check==false);
        temp->Set_Id(id);
        temp->InPut();
        list.add(index,temp);
    }
    else if(lc==3){
        NVvanphong* temp=new NVvanphong;
        cout<<"Nhap thong tin nhan vien muon them: "<<endl;
        double id;
        bool check;
        do{
            check=true;
            rewind(stdin);
            cout<<"Nhap Id: ";
            cin>>id;
            for(int i=0;i<list.Size();i++){
                if(list[i]->Get_Id()==id){
                    check=false;
                    break;
                }
            }
            if(check==false){
                cout<<"ID da bi trung lap!";
            }
        }while(check==false);
        temp->Set_Id(id);
        temp->InPut();
        list.add(index,temp);
    }
    else if(lc==4){
        NVthuctap* temp=new NVthuctap;
        cout<<"Nhap thong tin nhan vien muon them: "<<endl;
        double id;
        bool check;
        do{
            check=true;
            rewind(stdin);
            cout<<"Nhap Id: ";
            cin>>id;
            for(int i=0;i<list.Size();i++){
                if(list[i]->Get_Id()==id){
                    check=false;
                    break;
                }
            }
            if(check==false){
                cout<<"ID da bi trung lap!!";
            }
        }while(check==false);
        temp->Set_Id(id);
        temp->InPut();
        list.add(index,temp);
    }
}
void CongTy::Sapxeptheoluong(){
    cout<<"1.sap xep tang dan"<<endl;
    cout<<"2.sap xep giam dan"<<endl;
    int lc;
    cin>>lc;
    int x;
    for(int i=0;i<list.Size()-1;i++){
        x=i;
        for(int j=i+1;j<list.Size();j++){
            if(lc==1){
                if(list[j]->Tinhluong() < list[x]->Tinhluong())
                x=j;
                }
            if(lc==2){
                    if(list[j]->Tinhluong() > list[x]->Tinhluong())
                    x=j;
                }
                }
            if(x!=i){
                NhanVien* temp=list[i];
                list[i]=list[x];
                list[x]=temp;
            }
        
    }
}