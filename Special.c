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
		if(((a[i]>=48)&&(a[i]<=57))||(((a[i]>64)&&(a[i]<91))||((a[i]>96)&&(a[i]<123))))
		{
		}
		else
		 j++;
	}
	printf("%d",j);
	return 0;
}
