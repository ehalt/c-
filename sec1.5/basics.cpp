int sum = 0, value = 0;
	while(cin >> value) {
		sum += value;
	}
	cout << "sum is: " << sum;








// i have to make it more clear 
    int currVal = 0, val = 0;
    if (cin >> currVal) {
        int cnt = 1;
        while(cin >> val) {
            if (val == currVal) {
                ++cnt;
            }
            else {
                cout << currVal << " occurs: " << cnt << "times.\n";
                currVal = val;
                cnt = 1;
            }
        }
        cout << currVal << " occurs " << cnt << " times \n";
    }







