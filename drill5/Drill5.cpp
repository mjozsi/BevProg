//Kiss Mate
#include "std_lib_facilities.h"

int main()
try {
    //1. Eredeti: Cout << "Success!\n";
    //Jav�tott:
          cout<< "Success!\n";
    //2. Eredeti: cout << "Success!\n;
    //Jav�tott:
          cout<<"Success!\n";
    //3. Eredeti: cout << "Success" << !\n"
    //Jav�tott:
          cout<<"Success!\n";
    //4. Eredeti: cout << success << '\n';
    //Jav�tott:
          cout<<"Success!"<<'\n';
    //5. Eredeti: string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
    //Jav�tott:
          int res=7; vector<int>v(10); v[5]=res; cout << "Success!\n";
    //6. Eredeti: vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
    //Jav�tott:
          vector<int>a(10); a[5]=7; if (a[5]==7) cout<<"Success!\n";
    //7. Eredeti: if (cond) cout << "Success!\n"; else cout << "Fail!\n";
    //Jav�tott:
          bool cond=true ; if(cond) cout<<"Success!\n"; else cout<< "Fail!\n";
    //8. Eredeti: bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
    //Jav�tott:
          bool c=false; if(!c) cout <<"Success!\n"; else cout<<"Fail!\n";
    //9. Eredeti: string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
    //Jav�tott:
          string s="ape"; bool x="fool"<s; if (!x) cout <<"Success!\n";
    //10. Eredeti: string s = "ape"; if (s=="fool") cout << "Success!\n";
    //Jav�tott:
          string d="ape"; if (d!="fool") cout << "Success!\n";
    //11. Eredeti: string s = "ape"; if (s=="fool") cout < "Success!\n";
    //Jav�tott:
          string d2="ape"; if (d2!="fool") cout<<"Success!\n";
    //12.Eredeti: string s = "ape"; if (s+"fool") cout < "Success!\n";
    //Jav�tott:
          string d3="ape"; if(d3!="fool") cout<<"Success!\n";
    //13.Eredeti: string vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
    //Jav�tott:
          vector<char>y(5); for(int i=0;i<y.size();++i) ; cout <<"Success!\n";
    //14.Eredeti: vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
    //Jav�tott:
          vector<char> y2(5); for (int i=0; i<=y2.size(); ++i) ; cout<< "Success!\n";
    //15.Eredeti: string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
    //Jav�tott:
          string q="Success!\n"; for(int i=0; i<q.size(); ++i) cout<<q[i];
    //16.Eredeti: if (true) then cout << "Success!\n"; else cout << "Fail!\n";
    //Jav�tott:
          if (true) cout<<"Success!\n"; else cout << "Fail!\n";
    //17.Eredeti: int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
    //Jav�tott:
          int p=2000; int p1=p; if (p1==2000) cout<<"Success!\n";
    //18.Eredeti: string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
    //Jav�tott:
          string w="Success!\n"; for(int i=0; i<w.size(); ++i) cout<<w[i];
    //19.Eredeti: vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
    //Jav�tott:
          vector<int>u(5); for (int i=0; i<=u.size(); ++i) ; cout<<"Success!\n";
    //20.Eredeti: int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
    //Jav�tott:
          int i=0; int j=9; while (i<10) ++i; if (j<i) cout<<"Success!\n";
    //21.Eredeti: int x = 2; double d = 5/(x�2); if (d==2*x+0.5) cout << "Success!\n";
    //Jav�tott:
          double x1=2; double d5=5/x1; if (d5!=2*x1+0.5) cout<<"Success!\n";
    //22.Eredeti: string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
    //Jav�tott:
          string sp="Success!\n"; for (int i=0; i<sp.size(); ++i) cout<<sp[i];
    //23.Eredeti: int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";
    //Jav�tott:
          int i2=0, j2=9; while (i2<10) ++i2; if (j2<i2) cout<<"Success!\n";
    //24.Eredeti: int x = 4; double d = 5/(x�2); if (d=2*x+0.5) cout << "Success!\n";
    //Jav�tott:
          int x6=4; double d6=5/(x6-2); if (d6!=2*x6+0.5) cout<<"Success!\n";
    //25.Eredeti: cin << "Success!\n";
    //Jav�tott:
         cout<<"Success!\n";
          keep_window_open();
          return 0;
}
catch (exception& e) {
          cerr << "error: " << e.what() << '\n';
          keep_window_open();
          return 1;
}
catch (...) {
          cerr << "Oops: unknown exception!\n";
          keep_window_open();
          return 2;
}