
// your task is to complete this function
// function should return an pointer to output array int*
// of size k*k
typedef pair<int, pair<int, int>> node; //value,{arrIdx,eleIdx}
int *mergeKArrays(int arr[][N], int k)
{
    int* result = new int[(k + 1) * (k + 1)];
    priority_queue<node, vector<node>, greater<node>> pq; //min pq

    int z = 0;
    //Add 1th element of every array in heap

    for (int i = 0; i < k; i++) {
        pair<int, int> p = make_pair(i, 0);
        pq.push(make_pair(arr[i][0], p));
    }

    //remove the elements one by one from the min heap and add to the result array
    while (!pq.empty()) {
        node current = pq.top();
        pq.pop();

        int value = current.first;
        int x = current.second.first; //array number
        int y = current.second.second; //idx of current array

        result[z++] = value;

        if (y + 1 < k) {
            pair<int, int> p = make_pair(x, y + 1);
            pq.push(make_pair(arr[x][y + 1], p));
        }

    }
    return result;
}