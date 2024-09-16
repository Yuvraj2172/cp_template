		/* Author : SONIC */
		#include<bits/stdc++.h>
		using namespace std;
		#define pb push_back
		#define em emplace_back
		#define pob pop_back
		#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
		#define fr(i,a,b) for(int i = a ; i < b ; i++)
		#define loop(x,n) for(int x = 0 ; x < n; ++ x)
		#define all(x) (x).begin(),x.end()
		#define sz(x) ((int)(x).size())
		#define allr(x) (x).rbegin(),(x).rend()
		#define yes cout<<"YES\n"
		#define no cout<<"NO\n"
		#define nl "\n";
		#define ff first
		#define ss second
		#define PRES(c,x) ((c).find(x)!= (c).end())
		
		typedef long long ll;
		typedef vector<int> vi;
		typedef vector<vi> vvi;
		typedef vector<ll> vll;
		typedef pair<int,int> pii;
		typedef pair<long, long> pll;
		typedef vector<pii> vpii;
		
		const int mod = 1e9 + 7;
		ll lcm(ll a, ll b){
			return a*b/__gcd(a,b);
		}
		// binary exponentiation or bin pow
		int pw(int a, int b, int m){
			if(b==0)return 1;
			if( b%2 == 0){
				int t = pw(a, b/2,m);
				return (1ll*t*t%m);
			}
			else {
				int t = pw(a,(b-1)/2,m);
				t = 1ll*t*t%m;
				return 1ll*a*t%m;
			}
		}
		
		long long binpowiterative(long long a, long long b, long long m){
		    	a%=m;
		    	long long res = 1;
		    	while(b>0){
		        	if(b&1){
		            	res = res * a % m;
			        }
			        a = a * a % m;
			        b >>=1;
		    	}
			    return res;
		}

		
		//sieve to check prime 
		vector<long long> sieve(int n) {
    		vector<bool> isPrime(n + 1, true);
    		vector<long long> primes;
		    for (long long i = 2; i <= n; i++) {
		        if (isPrime[i]) {
		            primes.push_back(i);
		            for (long long j = i * i; j <= n; j += i) {
		                isPrime[j] = false;
		            }
		        }
		    }
		    return primes;
		}
		void segmentedSieve(int low, int high){
		    long long sq = sqrt(high)+1;
		    vector<long long> prime = sieve(sq);
		    vector<bool> isPrime(high - low +1, true);
		    for(long long p : prime){
		        long long sm = (low/p)*p;
		        if(sm < low){
		            sm+=p;
		        }
		        if(sm == p)sm+=p;
		        for(long long m = sm; m<=high; m+=p){
		            isPrime[m-low] = false;
		        }
		    }
		    for(long long i = low; i<=high; i++){
		        if( i!=1 && isPrime[i-low] == true){
		            cout<<i<<" ";
		        }
		    }
		}
		ll nCk(ll n, ll k){
			ll res=1;
			for(ll i=1; i<=k;i++){
				res = res * (n-k+1 / i);
			}
			return (ll)(res + 0.01);
		}
		
		int add(int a, int b){
			if(a +  b>= mod)return a + b - mod;
			return a + b;
		}
		int sub(int a, int b){
			if(a < b)return a + mod - b;
			return a - b;
		}
		int mul(int a, int b){
			return (int)((1ll * a*b)%mod);
		}
		
		vector<int> buildprefxorarr(vector<int> v, int n){
			vector<int> pref(n,0);
			pref[0] = v[0];
			
			for(int i = 1; i<n;i++){
				pref[i] = pref[i-1] ^ v[i];
			}
			return pref;
			
		}
		
		vector<int> buildprefsumarr(vector<int> v, int n){
			vector<int> pref(n,0);
			pref[0] = v[0];
			
			for(int i = 1; i<n;i++){
				pref[i] = pref[i-1] + v[i];
			}
			return pref;
			
		}
	
		void solve(){
			int l,r; 
			cin>>l>>r;
			
			int i = 0;
			
			while(l + i <= r){
				l+=i;
				i+=1;
				
			}
			
			cout<<i<<"\n";
			
			
		}
		
		int main(){
			fast_io;
			cout<<fixed;
			cout<<setprecision(10);
			ll t; t=1;
			cin>>t;
			
			while(t--){
				solve();
			}
			return 0;
		}