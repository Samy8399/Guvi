int main()
{
	int b,c,i;
	char a[100],z[100];
	scanf("%s %s",&a,&z);
	for(i=0;a[i]!='\0';i++);
	b=i;
	for(i=0;z[i]!='\0';i++);
	c=i;
	if(b>c)
	printf("%s",a);
	else if(b==c)
	printf("%s",a);
	else 
	printf("%s",z);
}
