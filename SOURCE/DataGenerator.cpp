#include"sort.h"

template <class T>
void HoanVi(T& a, T& b)
{
	T x = a;
	a = b;
	b = x;
}

//-------------------------------------------------

// HÃ m phÃ¡t sinh máº£ng dá»¯ liá»‡u ngáº«u nhiÃªn
void GenerateRandomData(int a[], int n)
{
	srand((unsigned int)time(NULL));

	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % n;
	}
}

// HÃ m phÃ¡t sinh máº£ng dá»¯ liá»‡u cÃ³ thá»© tá»± tÄƒng dáº§n
void GenerateSortedData(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = i;
	}
}

// HÃ m phÃ¡t sinh máº£ng dá»¯ liá»‡u cÃ³ thá»© tá»± ngÆ°á»£c (giáº£m dáº§n)
void GenerateReverseData(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = n - 1 - i;
	}
}

// HÃ m phÃ¡t sinh máº£ng dá»¯ liá»‡u gáº§n nhÆ° cÃ³ thá»© tá»±
void GenerateNearlySortedData(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = i;
	}
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		int r1 = rand() % n;
		int r2 = rand() % n;
		HoanVi(a[r1], a[r2]);
	}
}

void GenerateData(int a[], int n, int dataType)
{
	switch (dataType)
	{
	case 0:	// ngáº«u nhiÃªn
		GenerateRandomData(a, n);
		break;
	case 2:	// cÃ³ thá»© tá»±
		GenerateSortedData(a, n);
		break;
	case 3:	// cÃ³ thá»© tá»± ngÆ°á»£c
		GenerateReverseData(a, n);
		break;
	case 1:	// gáº§n nhÆ° cÃ³ thá»© tá»±
		GenerateNearlySortedData(a, n);
		break;
	default:
		printf("Error: unknown data type!\n");
	}
}