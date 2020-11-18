#include <iostream>
using namespace std;
#include <cmath>

int main() {
  int p[10], dec[10];
  int N,a,b,c,d,e,f,g,h,n1,n2;

  cin >> N;
  for (int i=0; i<10; i++) {
    p[i]=pow(i,N);
  }

  for(int j=0; j<8; j++) {
    dec[j]=pow(10,j);
  }

  for(a=0; a<10; a++) {
    for(b=0; b<10; b++) {
      for(c=0; c<10; c++) {
        for(d=0; d<10; d++) {
          for(e=0; e<10; e++) {
            for(f=0; f<10; f++) {
              for(g=0; g<10; g++) {
                for(h=0; h<10; h++) {
                  n1=h*dec[7]+g*dec[6]+f*dec[5]+e*dec[4]+d*dec[3]+c*dec[2]+b*dec[1]+a;
                  if ( n1==(p[a]+p[b]+p[c]+p[d]+p[e]+p[f]+p[g]+p[h]) ) cout << n1 << endl;
                  else continue;
                }
              }
            }
          }
        }
      }
    }
  }
}