#include <stdio.h>

void burbuja(int arr[], float arr2[], int numDatos)
{
	int pasada, comp;
	int auxInt;
	float auxFloat;
	for (pasada = 0; pasada < numDatos - 1; pasada++)
		for (comp = 0; comp < numDatos - 1; comp++)
			if (arr[comp] > arr[comp + 1])
			{
				auxInt = arr[comp];
				arr[comp] = arr[comp + 1];
				arr[comp + 1] = auxInt;

				auxFloat = arr2[comp];
				arr2[comp] = arr2[comp + 1];
				arr2[comp + 1] = auxFloat;
			}
}

int main()
{
	int valor[10];
	float valordos[10];
	int numElem;
	int numAlum = 0;
	scanf_s("%i", &numElem); 
	int i;
	for (i = 0; i < numElem; i++)
	{
		scanf_s("%i", &valor[i]);
		scanf_s("%f", &valordos[i]);
	}
	for (i = 0; i < numElem; i++)
	{
		if (valor[i] != valor[i + 1]) {
			numAlum++;
		}
	}
	printf("\n%i", numAlum);
	burbuja(valor, valordos, numElem);
	for (i = 0; i < numElem; i++)
	{
		if (valor[i] != valor[i + 1]) {
			printf("\n%i %f", valor[i], valordos[i]);
		}
	}
}
