#include"cheaders.h"

void *MyMalloc(unsigned int);
void Myfree(void *);

static char a[1000] ;
static char *ptr , *upper;

static unsigned int bytesfree , bytesallocated;

int main()
{
	char *p ,*q;
	upper = a;
	for(int i=0 ; i<3;i++)
	{
		p=MyMalloc(20*(i+1));
		if(!p)
		{
			puts("memory not allocated");
			return 0;
		}
		strcpy(p,"raja");
		printf("%s\n",p);
		Myfree(p);
	}


	return 0;
}


void * MyMalloc(unsigned int size)
{
	ptr = upper ;
	bytesfree = a-ptr+sizeof(a);
	if( bytesfree < size)
		return NULL;
	upper += size;
	bytesfree -= size;
	bytesallocated += size;
	printf("bytesfree = %u   bytesallocated = %u\n",bytesfree , bytesallocated);
	return ptr;
}

void Myfree(void *p)
{
	bytesallocated -= 20;
	upper = upper-20;
}
