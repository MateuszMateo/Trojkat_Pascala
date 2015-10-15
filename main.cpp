#include <iostream>

using namespace std;

long long int wartosciTrojkata[3000][3000];

long long Symbol(long long N,long long K){
    for(int N=0;N < 3000; ++N) {
        wartosciTrojkata[N][0] = 1;
        wartosciTrojkata[N][N] = 1;
      for(int K=0; K <= N; ++K) {
        wartosciTrojkata[N][K] = wartosciTrojkata[N-1][K-1] + wartosciTrojkata[N-1][K];
        return wartosciTrojkata[N][K];
      }
    }


}

int main()
{
    cout << "Podaj wartosci" << endl;
    long long N,K;
    cin >> N >> K;
    cout << wartosciTrojkata[N][K]<<endl;
    return 0;
}

