<!-- Proje Başlığı -->
<h1 align="center"> 42 - Push_swap 🧮</h1>

<!-- Proje Açıklaması -->
<p align="center">
Bu proje, bir dizi sayıyı en az adımda sıralamak için en verimli algoritmayı geliştirmeyi amaçlar. Yığın (stack) veri yapıları kullanarak sıralama işlemi optimize edilir ve veriler iki yığın arasında taşınır. Çeşitli sıralama algoritmaları (Bubble Sort, Quick Sort, vb.) değerlendirilir ve en uygun algoritma seçilir. Proje, algoritma tasarımı ve veri yapılarının etkin kullanımında bilgi sağlar ve performans avantajları sunar. 🔍📊</p>

<!-- Proje Logosu veya Görseli -->
<p align="center">
  <a target="blank"><img src="https://i.hizliresim.com/kjz5yie.png" height="150" width="150" /></a>
</p>

## Projenin Amacı 🎯

Push_swap projesinin temel amacı, belirli bir sayı dizisini en az adımda sıralamak için en etkili algoritmayı geliştirmektir. Bu hedefe ulaşmak için projede yığın (stack) veri yapıları ve çeşitli sıralama algoritmaları kullanılır. 

Yığın veri yapıları, sıralama sürecinde verilerin düzenlenmesi ve yönetilmesinde kritik bir rol oynar. Bu veri yapıları, "son giren, ilk çıkan" (LIFO) prensibine göre çalışır ve sıralama algoritmalarının etkinliğini artırmak için kullanılır. İki ayrı yığın kullanarak, veriler bir yığından diğerine taşınır, böylece sıralama işlemi daha verimli ve düzenli hale gelir.

Projede, sıralama algoritmalarının performansı detaylı bir şekilde analiz edilir. Basit algoritmalardan (Bubble Sort, Insertion Sort) daha karmaşık algoritmalara (Quick Sort, Merge Sort) kadar çeşitli yöntemler uygulanır ve her birinin avantajları ile dezavantajları değerlendirilir. Bu analiz, hangi algoritmanın en verimli olduğunu belirlemek için yapılır ve sonuçta en iyi performansı sağlayan algoritma seçilir.

Push_swap, algoritma tasarımı, veri yapıları ve performans optimizasyonu konularında derinlemesine bilgi edinmeyi sağlar. Yığın veri yapılarının etkin kullanımı ve sıralama algoritmalarının performansını artırmak, yazılım geliştirme süreçlerinde önemli beceriler kazandırır. Proje, sıralama işlemlerinde verimlilik ve performans açısından gerçek dünya uygulamalarında önemli avantajlar sunar.

### Temel Hedefler 📈
- **Verimli Sıralama:** Verilen sayı dizisini en az adımda sıralayabilen bir algoritma geliştirmek. 
- **Yığın Kullanımı:** İki ayrı yığın kullanarak sıralama algoritmalarını uygulamak. 
- **Algoritma Optimizasyonu:** Sıralama işlemi için en uygun algoritmayı bulmak ve uygulamak. 

## Kullanılan Komutlar 💡

Push_swap projesinde kullanılan bazı temel komutlar şunlardır:

- **`sa`**: İlk iki öğeyi `a` yığında takas eder. 🔄
- **`sb`**: İlk iki öğeyi `b` yığında takas eder. 🔄
- **`pa`**: `b` yığından `a` yığına bir öğe taşır. ↔️
- **`pb`**: `a` yığından `b` yığına bir öğe taşır. ↔️
- **`ra`**: `a` yığındaki tüm öğeleri bir pozisyon döndürür. 🔁
- **`rb`**: `b` yığındaki tüm öğeleri bir pozisyon döndürür. 🔁
- **`rra`**: `a` yığındaki tüm öğeleri bir pozisyon geri döndürür. 🔙
- **`rrb`**: `b` yığındaki tüm öğeleri bir pozisyon geri döndürür. 🔙
- **`rr`**: Hem `a` hem de `b` yığınlarını bir pozisyon döndürür. 🔁🔁
- **`rrr`**: Hem `a` hem de `b` yığınlarını bir pozisyon geri döndürür. 🔙🔙

Bu komutlar, sıralama algoritması içinde yığınları yönetmek ve verileri taşımak için kullanılır.


## Gereksinimler 📋

Push_swap projesini çalıştırmak için aşağıdaki gereksinimlerin sağlanması gerekir:

- Unix tabanlı bir işletim sistemi (Linux, macOS) 🖥️
- GCC derleyici 🛠️

## Kurulum 🔧

Projeyi yerel bir makinede çalıştırmak için aşağıdaki adımları izleyin:

1. Repoyu yerel makinenize klonlayın: `git clone https://github.com/username/push_swap.git`
2. Proje dizinine gidin: `cd push_swap`
3. Projeyi derlemek için Makefile'ı çalıştırın: `make`

## Kullanım 🗸

Sıralama işlemi için aşağıdaki adımları izleyin:

1. Programı çalıştırın ve sıralamak istediğiniz sayıları argüman olarak girin:
   ```bash
   ./push_swap [sayı1] [sayı2] [sayı3] ...
