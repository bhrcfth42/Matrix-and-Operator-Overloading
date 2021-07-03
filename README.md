# Matrix and Operator Overloading
 
Bu ödevde C++ dilinde Matris sınıfının tanımlanmasını yapmanız gerekmektedir.
Matris sınıfının UML diyagramı aşağıda verildiği gibi yapılacaktır.

```
Matrix Sınıf İsmi
```
- rows	:	int
- cols	:	int
- data	[MAXROWS]	[MAXCOLS]	:	float

```
Sınıf Üyeleri
```
+	Matrix	()
+	Matrix	(float	data[MAXROWS][MAXCOLS],int	rows,int	cols)
+	print(void)	:	void

- test_stochastic(void)	:	bool
+	operator+(const	Matrix	&)	:	Matrix
+	operator+(float	scalar_value)	:	Matrix
+	operator++(void)	:	void
+	operator+=(const	Matrix	&)	:	void

```
Sınıf Fonksiyonları
```
Sınıf üyelerinin tipleri (:) işaretinden sonra belirtilmiştir. Sınıf fonksiyonlarının dönüş
tipleri (:) işaretinden sonra belirtilmiştir. Tabloda (-) **_private_** , (+) **_public_** olarak gösterilmiştir.

MAXROWS, MAXCOLS değişkenleri programın başında **sabit** olarak tanımlanır.
(Her iki değerde 10 olmalıdır). Sınıf üyelerinden **_rows_** ve **_cols_** , matrisin gerçek boyutlarıdır.

Matris sınıfının operatör fonksiyonları aşağıda gösterilmiştir:

```
Operatör Operatör Tanımı Açıklama
+ Matris Toplamı Parametre olarak aldığı Matris ile tanımlı Matrisi toplar,
sonucu yeni oluşturulan bir Matris nesnesine atar, sonra
bu yeni Matris nesnesini döndürür.
+ Sayısal Toplam Verilen tamsayı değerini Matrisin her bir öğesine ekler,
sonucu yeni oluşturulan bir Matris nesnesine atar ve
sonra bu yeni Matris nesnesini döndürür.
++ Elemanları 1 arttırma Matrisin tüm elemanlarının değerlerini 1 arttırır.
+= Matris Toplama ve Atama Parametre olarak aldığı Matris ile tanımlı Matrisi toplar
ve sonucu tanımlı Matrise atar.
```
```
HARRAN ÜNİVERSİTESİ
MÜHENDİSLİK FAKÜLTESİ
BİLGİSAYAR MÜHENDİSLİĞİ
```

( **+** , **+=** ) Operatörlerinin çalışması için 2 adet matris olmalıdır ve bu matrislerin boyutlarının
aynı olması gerekmektedir. Bu operatör fonksiyonları çalıştırılmadan önce matrisin boyutları
kontrol edilmeli, eğer matrisin boyutları eşit değil ise operatör işlemleri yapılamaz.

Matris sınıfının diğer üye fonksiyonları:

```
Fonksiyon Açıklamalar
```
**Default Constructor** Satır ve Sütunlar başlangıçta 0 olur.

**Parametered
Constructor**
Sınıf üyelerinin bütün değerlerini parametre olarak alır.

**print()**

- Matrisi ekrana yazdırır.
- Bu fonksiyon çalıştığında test_stochastic() fonksiyonu da
    çağırılır. Eğer test_stochastic fonksiyonu “true” değerini
    döndürürse ekrana “Bu Matris Stokastik Bir Matristir”
    yazısı yazdırılır. Diğer durumda ise ekrana hiçbir şey
    yazdırılmaz.
- Bu fonksiyonun sonunda ekrana “================”
    yazılır.

**test_stochastic()**

```
Bir matrisin stokastik matris olabilmesi için kare matris
olması gerekir. Eğer bir matris kare matris (satırlar ve sütünler
eşit olmalı) değil ise fonksiyon “false” değerini döndürür.
Eğer bir matris kare matris ise stokastik olup olmadığı kontrol
edilir. Matris Stokastik bir matris ise fonksiyon “true”
değerini, diğer durumlarda ise “false” değeri döndürür.
Stokastik Matris:
Bir kare matrisinin bütün elemanları pozitif ve her satırdaki
elemanlarının toplamı 1 ise bu matrise “stokastik matris”
denir.
```

## GİRDİ DOSYASI

**Matrisler.txt** : Matris datalarını bulunduran bir txt dosyasıdır. Aşağıdaki resimde görüldüğü
gibi ilk satırdaki “ 3 3 ” ifadesi matrisin satır ve sütun bilgilerini göstermektedir. Matrisin
değerleri ise her bir **_row_** değeri aynı satıra yazılır ve bir sonraki **_row_** değerleri için alt satıra
geçilir.

## YAPILACAKLAR

1. Matris Sınıfı yukarıda tanımlandığı gibi oluşturulmalıdır.
2. Matris sınıfından **Mat** isminde bir nesne dizisi oluşturulmalıdır. (Dizinin boyutu
    maksimum 20 olmalıdır).
3. Matrisler.txt dosyası okunarak **Mat** dizisindeki nesnelere sırasıyla atanmalıdır.
4. Sonuc1 ve Sonuc2 matris nesneleri oluşturulmalıdır.
5. + operatörü Mat[0] ve Mat[2] için çağrılmalı ve sonuç Sonuc1 nesnesine atanmalıdır.
    Daha sonra Sonuc1 nesnesinin **_print_** fonksiyonu çağrılmalıdır.
6. + operatörü Mat[4] ve **_scalar_value_** = 70 için çağrılmalı ve sonuç Sonuc2 nesnesine
    atanmalıdır. Daha sonra Sonuc2 nesnesinin **_print_** fonksiyonu çağrılmalıdır.
7. ++ operatörü Mat[2] nesnesi için çağrılmalıdır.
8. += operatörü Mat[3] ve Mat[1] nesnesi için çağrılmalı ve sonuç Mat[3] nesnesine
    atanmalıdır.
9. Mat dizisinin her bir elemanı için **_print_** fonksiyonu çağrılmalıdır.
