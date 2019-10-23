# Tri à bulle en python
# Source: http://www.lepython.com/tri-a-bulles/


def Tri_bulle (L) :
    permutation = True
    n=len(L)

    while permutation==True : #on répéte la procédure tant qu'on a trouvé une permutation (c-à-d L[i]&gt;L[i+1] l'élément e de la liste est plus grand que l'élément qui le suit)

        permutation = False # on considère qu'il n'existe aucune permutation (c-à-d la liste est triée)

        for  i  in range( n-1) : # on parcour la liste pour chercher s'il y une permutation
            if L[i] > L[i+1] : # Si elements i et i+1 pas dans l'ordre
                permutation = True # permutation existe on change la variable permutation en True
                L[i],L[i+1]= L[i+1],L[i] # on met L[i] et L[i+1] en ordre

    return L


liste = [8,3,5,1,4,7,9,2,6]
print("Avant le tri, la liste est:", liste)

Tri_bulle(liste)

print("Après le tri, la liste est:", liste)
