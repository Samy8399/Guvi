int main()
{
	int a[100],i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]!='\0')
		{
		if(a[i]>a[i+1])
		{
			j=a[i];
			a[i]=a[i+1];
			a[i+1]=j;
		}
		}
	}
	printf("\n%d  %d",a[0],a[n-1]);
}
