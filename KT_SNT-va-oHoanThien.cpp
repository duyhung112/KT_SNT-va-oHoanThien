#include <iostream>
#include <stdilib.h>
#include <time.h>
using namespace std;
#define MAX 100
void Taomang_NgauNhien(int A[], int &n){
  cout <<"\nNhap so luong phan tu cua mang: );
  cin >> n;
  srand(time(NULL);
  for(int i = 1; i <= n; i++){
      A[i] = rand() % MAX -20;
  }
}    
        
void XuatMang(int A[], int n){
  cout   <<"\nMang vua tao : ";
  for(int  i = 1; i <= n; i++){
    cout  <<"Phan tu thu " << i << "la": << A[i]  << "\n";
  }
}
        
        
bool check_SHT(int n){
    int sum = 0;//khai bao biem sum
    for(int i=1;i<=n/2;i++){
        if(n%i==0) 
            sum+=i;
    }
    if(sum==n) return true; // tra ve true
    return false;
}
  
bool laSoNguyenTo1(int n)
{
    // Neu n < 2 thi khong phai la SNT
    if (n < 2){
        return false;
    }       
     
    for (int i = 2; i < (n - 1); i++){
        if (n % i == 0){
            return false;
        }   
    }
    return true;
}
       
void XuatSNT(int A[], int n){
  cout  <<"\nCac so chinh phuong co trong mang la: ");
  for(int i = 1; i <= n; i++){
    if(laSoNguyenTo1(A[i]) ==  true){
      cout  << A[i];
    }
  }
}

void XuatSHT(int A[], int n){
  cout  <<"\nCac so chinh phuong co trong mang la: ");
  for(int i = 1; i <= n; i++){
    if(check_SHT(A[i]) ==  true){
      cout  << A[i];
    }
  }
}
        
        
int main(){
  int A[MAX];
  int n;
  Taomang_NgauNhien(A,n);
  XuatMang(A, n);
  XuatSNT(A,n);
  XuatSHT(A,n);
  system("pause");
  return 0;
}
  
