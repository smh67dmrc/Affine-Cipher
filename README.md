# Affine Encrypter and Decrypter

###### Affine(Doğrusal) şifreleme yerine koyma (Substitution) şifreleme yönteminin özel bir halidir. Şifrelemede hangi karakterin yerine konulacağı doğru denklemi(y=ax+b (mod n)) ile belirlenir.

* n değeri alfabedeki toplam karakter sayısıdır.
* İngiliz alfabesi kullanıldığı için n=26 olarak alınmıştır.
* x değeri şifrelenecek mesajı belirtir.
* y değeri şifrelenmiş mesajı belirtir.
* a ve b anahtar değerlerini belirtir.
* (ters_a) a degerinin modüler tersini ifade eder.
* Dikkat edilmesi gereken en önemli nokta n sayısı ile a anahtar değerinin aralarında asal olmasıdır. Eğer aralarında asal olmazsa doğru sonuçlar üretilmez.

### Encryption Örneği

###### "affine" kelimesini adım adım şifreleyelim.
###### a = 5 olsun.
###### b = 2 olsun.

###### x1 = index_a = 0
###### x2 = index_f = 5
###### x3 = index_f = 5
###### x4 = index_i = 8
###### x5 = index_n = 13
###### x6 = index_e = 4

###### Sırasıyla her karakterin şifreli halini bulalım.

###### y1 = (a*x1)+b (mod 26)
###### y1 = (5*0)+2	 (mod 26)
###### y1 = 2 = "c"	  

###### y2 = (a*x2)+b (mod 26)
###### y2 = (5*5)+2	 (mod 26)
###### y2 = 1 = "b"	  

###### y3 = (a*x3)+b (mod 26)
###### y3 = (5*5)+2	 (mod 26)
###### y3 = 1 = "b"	

###### y4 = (a*x4)+b (mod 26)
###### y4 = (5*8)+2	 (mod 26)
###### y4 = 16 = "q"	

###### y5 = (a*x5)+b (mod 26)
###### y5 = (5*13)+2 (mod 26)
###### y5 = 15 = "p"

###### y6 = (a*x6)+b (mod 26)
###### y6 = (5*4)+2	 (mod 26)
###### y6 = 22 = "w"

###### Şifreli metin = "cbbqpw"	

### Decryption Örneği

###### "affine" kelimesini adım adım deşifreleyelim.
###### a = 5 olsun.
###### b = 2 olsun.

###### Şifre çözme işleminin yapılabilmesi için öncelikle a değerinin modüler tersi bulunmalıdır.
###### (ters_a*a)mod26 = 1 denklemi çözülerek a değerinin tersi hesaplanır.
###### Denklemi sağlayan en küçük (ters_a*a) değeri 105 olarak hesaplanır.
###### Bu durumda denklem şu hale gelir = (ters_a*5)mod26 = 1 
###### a degerinin tersi = 21 olarak bulunmuş olur.
###### a degerinin tersi ile her bir karakterin deşifrelenmiş halini bulalım.
###### Kullanacağımız denklem => ters_a*(y-b)mod26

###### NOT : Deşifreleme işleminde eğer sonuç negatif değer çıkarsa pozitif olana kadar 26 ile toplanmalıdır deşifreleme denkleminde negatif değerler kullanılamayacağı için pozitif karşılığını elde etmemiz gerekir.

###### Sırasıyla her karakterin deşifrelenmiş halini bulalım.

###### 21*(0-2)mod26 
###### 21*(0-2+(26))mod26  (bkz.NOT)
###### (21*24)mod26 = 10
###### Alfabede 10. indexte bulunan karakter => "k"

###### 21*(5-2)mod26 
###### (21*3)mod26 = 11
###### Alfabede 11. indexte bulunan karakter => "l"

###### 21*(5-2)mod26 
###### (21*3)mod26 = 11
###### Alfabede 11. indexte bulunan karakter => "l"

###### 21*(8-2)mod26 
###### (21*6)mod26 = 22
###### Alfabede 22. indexte bulunan karakter => "w"

###### 21*(13-2)mod26 
###### (21*11)mod26 = 23
###### Alfabede 23. indexte bulunan karakter => "x"

###### 21*(4-2)mod26 
###### (21*2)mod26 = 16
###### Alfabede 16. indexte bulunan karakter => "q"

###### Deşifrelenmiş metin = "kllwxq"	








