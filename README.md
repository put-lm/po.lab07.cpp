# Zadania

1. Zapoznaj się z klasami książki dostępnymi w repozytorium.
2. Zaimplementuj metody z klasy `BookShop`
	* `create` to metody tworzące odpowiednie książki i dodające je do wektora książek
	* `read` zwraca wektor książek
	* `remove` usuwa książkę pod odpowiednim `isbn`


## Przetestuj polimorfizm:
1. Uruchom aplikację

```C++
// Oczekiwany wynik

Jestem sobie książką... ani papierową, ani cyfrową... taką nie wiadomo jaką :)
Jestem sobie książką... ani papierową, ani cyfrową... taką nie wiadomo jaką :)
Jestem sobie książką... ani papierową, ani cyfrową... taką nie wiadomo jaką :)

Jestem sobie książką... ani papierową, ani cyfrową... taką nie wiadomo jaką :)
Jestem sobie książką... ani papierową, ani cyfrową... taką nie wiadomo jaką :)
```

2. Metody wirtualne - zmień motedę getDetails w klasie bazowej na wirtualną, co się zmieniło ?

3. Klasy abstrakcyjne `pure virtual`:
	* usuń implementację metody getDetails
	* w deklaracji zmień na metodę `pure virtual`: `virtual string getDetails() = 0;`
	* wprowadź odpowiednie zmiany w pozostałych plikach - pamiętaj, że nie można tworzyć już obiektów klasy abstrakcyjnej `Book`

## Zadanie Domowe

Zaadoptuj rozwiązanie do swojego projektu.
