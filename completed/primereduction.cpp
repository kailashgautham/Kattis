//#include<bits/stdc++.h>
//using namespace std;
//
//bool isPrime(int n, unordered_map<int,bool>& primes) {
//    if (primes.find(n) != primes.end()) return primes[n];
//    for(int i=2; i < n; i++) {
//        if (n%i==0) {
//            primes[n] = false;
//            return false;
//        }
//    }
//    primes[n] = true;
//    return true;
//}
//
//int factorToPrime(int n, unordered_map<int,bool>& primes, unordered_map<int,int>& primereductions) {
//    if (primereductions[n] != 0) return primereductions[n];
//    int primesum=0;
//    int initial = n;
//    while(n>1){
//        for(int i=2;i<=n;i++){
//            if(n%i == 0 && isPrime(i, primes)) {
//                primesum += i;
//                n /= i;
//                break;
//            }
//        }
//    }
//    primereductions[initial] = primesum;
//    return primesum;
//}
//
//int main(){
//    int n;
//    int c;
//    unordered_map<int,bool> primes;
//    unordered_map<int,int> primereductions;
//    while(cin>>n&&n!=4){
//        c=1;
//        while(!isPrime(n, primes)){
//            c++;
//            n = factorToPrime(n, primes, primereductions);
//        }
//        cout<<n<<" "<<c<<endl;
//    }
//}