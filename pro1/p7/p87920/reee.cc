for (int j = 0; j < n and !si; j++) {
                if (j == i) j++;
                else {
                    sum = sum + v[j];
                }
                if (sum == v[i]) si = true;
            }