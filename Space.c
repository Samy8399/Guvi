int main()
{
	int i,b,j=0;
	char a[100];
	gets(a);
	for(i=0;a[i]!='\0';i++);
	b=i;
	//printf("%d",b);
	for(i=0;i<b;i++)
	{ 
		if(a[i]==' ')
		{
			j++;
		}
	}
	printf("%d",j);
	return 0;
}
