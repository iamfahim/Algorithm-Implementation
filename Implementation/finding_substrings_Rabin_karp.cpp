
#include <bits/stdc++.h>
using namespace std;

vector<int> rabin_karp(string const& s, string const& t) {
    const int p = 131;
    const int m = 1e9 + 9;
    const int S = s.size(), T = t.size();

    // Precompute all powers of P (mod m)
    vector<long long> p_pow(max(S, T));
    p_pow[0] = 1;
    for (int i = 1; i < (int)p_pow.size(); ++i)
        p_pow[i] = (p_pow[i-1] * p) % m;

    // Compute hash of all prefixes of t
    vector<long long> h(T + 1, 0);
    for (int i = 0; i < T; ++i)
        h[i+1] = (h[i] + t[i] * p_pow[i]) % m;

    // Compute hash of s
    long long h_s = 0;
    for (int i = 0; i < S; ++i)
        h_s = (h_s + s[i] * p_pow[i]) % m;

    // Match the hash of s (h_s) with the hash of substrings
    // of t (h[0..|S|]) and store the matches
    vector<int> occurences;
    for (int i = 0; i + S - 1 < T; ++i) {
        // Hash of substring of t from index i+1 to i+S inclusive
        long long cur_h = (h[i + S] + m - h[i]) % m;

        /*
        First index of cur_h is a multiple of p_pow[i], second
        index is a multiple of p_pow[i+1] and so on... like:
        t[i]*p_pow[i] + t[i+1]*p_pow[i+1] + t[i+2]*p_pow[i+2]...

        But, first index of h_s is a multiple of p_pow[0],
        second index is a multiple of p_pow[1] and so on...
        s[0]*p_pow[0] + s[1]*p_pow[1] + s[2]*p_pow[2] + ...

        Since, the multiples of both are different, we need to
        make the multiples same in order to get the same hash.
        So, we multiply h_s with p_pow[i] to change the multiples
        to p_pow[i], p_pow[i+1], ... from p_pow[0], p_pow[1]...

        h_s * p_pow[i] thus results to:
        s[0]*p_pow[i] + s[1]*p_pow[i+1] + s[2]*p_pow[i+2]...
        */
        if (cur_h == h_s * p_pow[i] % m)
            // if both hashes are same, we found a match and store it
            occurences.push_back(i);
    }

    return occurences;
}

int main() {
    vector<int> pos = rabin_karp("abc", "abcabcbcdabcabc");
    if (pos.size() > 0)
    {
        cout<<"number of pattern "<<pos.size()<<endl;
        for (int i : pos) cout << i << endl;
    }
    else
        cout << "Pattern not found" << endl;

    return 0;
}
