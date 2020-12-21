// Function to find inversion count in the array

// arr[]: Input Array
// N : Size of the Array arr[]
long long int merge(long long arr[],long long start,long long end){
	long long mid=(start+end)/2;
	long long i=start;
	long long k=start;
	long long j=mid+1;

	long long int count=0;
	int temp[start+end+1];

	while((i<=mid) and (j<=end)){
		if(arr[i]>arr[j]){
			count+=(mid-i+1);
			temp[k++]=arr[j++];
		} else{
			temp[k++]=arr[i++];
		}
	}

	while(i<=mid){
		temp[k++]=arr[i++];
	}

	while(j<=end){
		temp[k++]=arr[j++];
	}

	for(long long p=start;p<=end;p++){
		arr[p]=temp[p];
	}
	return count;
}
long long int inversionCountHelper(long long arr[],long long start,long long end){
	if(start>=end){
		return 0;
	}

	long long mid=(start+end)/2;
	long long int x=inversionCountHelper(arr,start,mid);
	long long int y=inversionCountHelper(arr,mid+1,end);
	long long int z=merge(arr,start,end);

	return (x+y+z);
}

long long int inversionCount(long long arr[], long long N)
{
    return inversionCountHelper(arr,0,N-1);
}
