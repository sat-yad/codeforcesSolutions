unordered_map<ll, int> mp;
         vector<ll> res(5);
        for (vector<int>& coor : cd) {
            int x = coor[0], y = coor[1];
            for (int dx = 0; dx <= 1; dx++) {
                for (int dy = 0; dy <= 1; dy++) {
                    if (x - dx >= 0 && y - dy >= 0 && x - dx < m - 1 && y - dy < n - 1) {
                        ll key = static_cast<ll>(x - dx) * n + y - dy;
                        mp[key] = mp[key] + 1;
                    }
                }
            }
        }

        for (const auto& count : mp) {
            res[count.second]++;
        }

        res[0] = static_cast<ll>(m - 1) * (n - 1) - accumulate(res.begin(), res.end(), 0LL);

        return res;
       