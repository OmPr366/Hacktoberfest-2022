/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~OmPr~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define nline "\n"
#define in cin >>
#define out cout <<  
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define ll long long
#define ld long double
#define sll set<ll>
#define vll vector<ll>
#define mll map<ll, ll>
#define pll pair<ll, ll>
#define gri greater<long long>()
#define set_bits __builtin_popcountll
#define fastio() ios_base::sync_with_stdio(false);cout.tie(NULL);

#ifndef OmPr
#define debug(x) cerr << #x <<" = "; _print(x); cerr << " ";
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(string t) {cerr << t;}

template <class T> void _print(set <T> v);
template <class T> void _print(vector <T> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Solution >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

void chll_suru_ho_ja(){
    //Code Here
    int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];

    int max_val = 0;
    int index =  0;
    for(int i = 0; i < 4; i++){
        if(arr[i] > max_val){
            max_val = arr[i];
            index = i;
        }
    }
    string name[4] =  {"Hussien", "Atef", "Karemo",  "Ezzat"};
    cout<<name[index]<<" ";

    max_val =  0;
    int ig =  index;
    for(int i = 0; i < 4; i++){
        if(arr[i] > max_val && i != ig){
            max_val = arr[i];
            index = i;
        }
    }
    cout<<name[index]<<endl;

    
}

/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Test Cases >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/



int main()
{
#ifndef OmPr
    ///freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
    fastio();
    ll T = 1;
    cin >> T;
    
    while(T--)
    {
        chll_suru_ho_ja();
    }
    return 0;
}