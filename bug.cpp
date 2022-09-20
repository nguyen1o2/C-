#include<bits/stdc++.h>
using namespace std;

class Date{
  private : 
    int ngay,thang,nam;
  public :
//    Date(){
//        this -> ngay = this -> thang = this -> nam = 0;
//    }
    void Nhap();
    void Xuat();
};
void Date::Nhap(){
    cout<<"\nNhap DATE : ";
    cin>>this -> ngay>>this -> thang>>this -> nam;
}
void Date::Xuat(){
    cout<<"\nDATE : "<<this -> ngay<<"/"<<this -> thang<<"/"<<this -> nam;
}

class SinhVien{
  private :
    string MSV;
    string HoTen;
//    Date NgaySinh;
//    string GioiTinh;
//    string NghanhHoc;
    float DiemTK;
  public :
//    SinhVien(){
//        this -> MSV = this -> HoTen = this -> GioiTinh = this -> NghanhHoc = "";
//        this -> DiemTK = 0;
//    }
    void Nhap();
    void Xuat(); 
    friend void Chen(SinhVien *a,int &n);
//    int getDiemTK(){
//        return DiemTK;
//    }
//    SinhVien Max(SinhVien *a,int n,int left,int right){
//        //TH1 : co 1  phan tu
//        if(left == right){
//            return a[left];
//        }
//        // TH2 : co 2 phan tu
//        else if(left == right - 1){
//            if(a[left].DiemTK > a[right].DiemTK){
//                return a[left];
//            }
//            else{
//                return a[right];
//            }
//        }
//        // TH3 : Co nhieu hon 2 phan tu
//        else{
//            int mid = (left + right)/2;
//            SinhVien MaxLeft = Max(a,n,left,mid);
//            SinhVien MaxRight = Max(a,n,mid+1,right);
//            if(MaxLeft.DiemTK > MaxRight.DiemTK){
//                return MaxLeft;
//            }
//            else{
//                return MaxRight;
//            }
//        }

};
void SinhVien :: Nhap(){
  cin.ignore();
     cout<<"\nNhap Ma Sinh Vien : ";fflush(stdin);getline(cin,this -> MSV);
     cout<<"\nNhap Ten Sinh Vien : ";fflush(stdin);getline(cin,this -> HoTen);
//     NgaySinh.Nhap();
//     cout<<"\nNhap Gioi Tinh : ";fflush(stdin);getline(cin,this -> GioiTinh);
//     cout<<"\nNhanh Hoc : ";fflush(stdin);getline(cin,this -> NganhHoc);
    cout<<"\nNhap Diem Tong Ket : ";cin>>this -> DiemTK;
}

void SinhVien :: Xuat(){
     cout<<"\nMa Sinh Vien : "<<this -> MSV;
     cout<<"\n Ten Sinh Vien : "<<this -> HoTen;
//     NgaySinh.Xuat();
//     cout<<"\n Gioi Tinh : "<<this -> GioiTinh;
//     cout<<"\nNhanh Hoc : "<<this -> NganhHoc;
    cout<<"\nNhap Diem Tong Ket : "<<this -> DiemTK;
}

void Chen(SinhVien *a,int &n){
        int k;
        cout<<"\nNhap vao vt can chen: ";
        cin>>k;
        SinhVien hs_new;
        hs_new.Nhap();
            for(int i=n;i>=k;i--)
              a[i]=a[i-1];
              a[k]=hs_new;
              n++;		
		cout<<"\nSAu khi chen \n";
        for(int i=0;i<n;i++){
          a[i].Xuat();
        }
}


int main(){
    SinhVien *a;
	int n;
    cout<<"Nhap So Luong SInh Vien : ";cin>>n;
    a = new SinhVien[n];
    for(int i=0;i<n;i++){
        cout<<"\n\t\t===== Nhap Sinh Vien "<<i<<" ======\n";
        a[i].Nhap();
    }
     for(int i=0;i<n;i++){
        cout<<"\n\t\t===== Hien Thi Sinh Vien "<<i<<" ======\n";
        a[i].Xuat();
    }
    Chen(a,n);
    // cout<<"\nSinh Vien Co Diem TOng Ket Cao Nhat \n"; a -> Max(a,n,0,n-1).Xuat();

    
}