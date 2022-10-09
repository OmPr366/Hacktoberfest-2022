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
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);

#ifndef OmPr
#define debug(x)         \
    cerr << #x << " = "; \
    _print(x);           \
    cerr << " ";
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(ld t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(string t) { cerr << t; }

template <class T>
void _print(set<T> v);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Solution >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

bool isTPrime(int n)
{
    int count = 0;
    if (n == 1)
        return false;

    for (int i = 1; i < 9; i++)
    {
        if (n % i == 0)
            return true;
    }
    return false;
}

bool isPrime(ll n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
bool perfect_squre(ll n)  // For checking whether it's a perfect square or not 
{
  ll x=sqrt(n);

  return (x*x==n);
}

void chll_suru_ho_ja()
{
    // Code Here
    ll x = 0;
    cin >> x;

    if (!perfect_squre(x))
    {
        cout << "NO\n";

        return ;
    }

    if (isPrime(sqrt(x)))
        cout << "YES\n";
    else
        cout << "NO\n";
}

/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Test Cases >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

int main()
{
#ifndef OmPr
    /// freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
    fastio();
    ll T = 1;
    cin >> T;

    while (T--)
    {
        chll_suru_ho_ja();
    }
    return 0;
}