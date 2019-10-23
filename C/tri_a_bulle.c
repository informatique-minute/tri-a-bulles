// Tri à bulles en C.
// Utilisation: cc tri_a_bulle.c && ./a.out

#include <stdio.h>

void permuter(int* liste, int m, int n)
{
  int tmp = liste[m];
  liste[m] = liste[n];
  liste[n] = tmp;
}


void tri_a_bulles(int* liste, int n)
{
  for (int j=0; j<n-1; j++) // block "j ← 0", "sj j < n-1" et "j ← j+1"
    {
      for (int i=0; i<n-1; i++) // block "i ← 0", "si i < n-1" et "i ← i+1"
	{
	  if (liste[i] > liste[i+1]) // si éléments i et i+1 pas dans l'ordre
	    {
	      permuter(liste, i, i+1); // permuter éléments i et i+1
	    }
	}
    }
}



void affiche_liste(int* liste)
{
  for (int i=0; i<9; i++) {
    printf("%d ",liste[i]);
  }
}

int main()
{
  int liste[] = {8,3,5,1,4,7,9,2,6};

  printf("Avant le tri, la liste est: ");
  affiche_liste(liste);
  printf("\n");

  tri_a_bulles(liste, 9);

  printf("Après le tri, la liste est: ");
  affiche_liste(liste);
  printf("\n");
}
