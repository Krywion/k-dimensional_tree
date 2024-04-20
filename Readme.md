
Repozytorium zawiera:
- pliki źródłowe programu w języku C++.
- plik Makefile, który umożliwia kompilację programu.
- Dokumentacje programu w formacie docx.


Aby uruchomić program należy wpisać kolejno w konsoli 2 poniższe komendy:
% make
% ./myapp

Opis problemu: 
Efektywne przechowywanie i wyszukiwanie współrzędnych punktów leżących najbliżej wskazywanego punktu. 
Ze względu na wysoką wymiarowość problemu, użycie tradycyjnych struktur danych takich jak listy, tablice jest nieefektywne z czasowego punktu widzenia.

Opis rozwiązania: Rozwiązaniem problemu jest zastosowanie struktury k-wymiarowego drzewa, które pozwala na efektywne 
dzielenie przestrzeni na podstawie wartości współrzędnych punktów. Każdy węzeł tej struktury reprezentuje punkt w przestrzeni d-wymiarowej. 
Dzielenie polega na porównywaniu wartości dwóch punktów na przemian schodząc głębiej w strukturze drzewa.

Złożoności czasowe:

Budowanie drzewa – O( n log n) – Drzewa ma log n poziomów przez które musimy porównać aktualnie dodawany punkt, dodanie n punktów to złożoność n log n

Wyszukiwanie najbliższego sąsiada – 0(log n) -  w przypadku gdy wszystkie punkty tworzą zrównoważone drzewo (o najmniejszej głębokości), w najgorszym przypadku złożoność może wynieść O(n).

Złożoność pamięciowa – O(n) – przechowujemy zawsze n punktów


