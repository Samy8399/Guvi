int main()
{
	int a[10],i,j=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	j=j+a[i];
	printf("%d",j/n);
}
	
