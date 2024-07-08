#include <iostream>
#include <climits>
#include <vector>

typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ll> value(n);
    for (int i = 0; i < n; i++)
        cin >> value[i];

    ll best = INT_MIN;
    ll current_sum = 0;
    int start_index = 0;
    int end_index = -1;
    int temp_start = 0;

    for (int i = 0; i < n; i++) {
        if (current_sum + value[i] >= value[i])
            current_sum += value[i];
        else {
            current_sum = value[i];
            temp_start = i;
        }

        if (current_sum > best) {
            best = current_sum;
            start_index = temp_start;
            end_index = i;
        }
    }

    cout << "Maximum subarray sum: " << best << endl;
    cout << "Subarray indices: " << start_index << " to " << end_index << endl;

    return 0;
}
