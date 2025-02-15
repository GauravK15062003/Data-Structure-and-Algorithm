while (true)
        {
            int left = 2 * i, right = 2 * i + 1;
            if(left>idx-1) break;
            if(right>idx-1){
                 if (arr[i] > arr[left])
                {
                    swap(arr[i], arr[left]);
                    i = left;
                }
                break;
            }
            if (arr[left] < arr[right])
            {
                if (arr[i] > arr[left])
                {
                    swap(arr[i], arr[left]);
                    i = left;
                }
                else
                    break;
            }
            else
            {
                if (arr[i] > arr[right])
                {
                    swap(arr[i], arr[right]);
                    i = right;
                }
                else break;
            }
        }
    }