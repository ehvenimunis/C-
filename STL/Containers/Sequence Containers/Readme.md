 # Sequence Containers: 
  Sıralı bir şekilde erişilebilen veri yapılarını uygular. Verilere sırayla erişilir. 
  Sıralı kaplardaki öğeler kesin bir doğrusal sırayla sıralanır. Bu sıradaki konumlarına göre tek tek öğelere erişilir.

   ## vector : 

    Vektörler, bir öğe eklendiğinde veya silindiğinde kendini otomatik olarak 
    yeniden boyutlandırma yeteneğine sahip dinamik dizilerle aynıdır ve depoları 
    container tarafından otomatik olarak işlenir. Dinamik boyutlu dizi taşıyıcısıdır. 
    Performansı en yüksek olan taşıyıcıdır. Vektör öğeleri, iteratörler kullanılarak 
    erişilebilmeleri ve geçilebilmeleri için bitişik depolamaya yerleştirilir. 
    Vektörlerde veriler sona eklenir. Sonunda ekleme, bazen diziyi genişletme 
    ihtiyacı olabileceğinden farklı zaman alır. Son elemanın kaldırılması 
    yalnızca sabit bir zaman alır çünkü yeniden boyutlandırma olmaz. 
    Başlangıçta veya ortada ekleme ve silme zamanla doğrusaldır.
    dizilerden farklı olarak, büyüklükleri dinamik olarak değişebilir 
    ve depoları konteyner tarafından otomatik olarak işlenir.

    Diğer dinamik sıra kapları (deque, list ve forward_lists) 
    ile karşılaştırıldığında, vektörler, elemanlarına (tıpkı array gibi) 
    erişmede çok verimli ve sonundan eleman ekleme veya çıkarma açısından 
    nispeten verimli. Son dışındaki konumlara eleman eklemeyi veya kaldırmayı 
    içeren işlemler için, diğerlerinden daha kötü performans gösterirler ve 
    listelere ve forward_lists göre daha az tutarlı iteratörler ve 
    referanslara sahiptirler.


   ## list : 

    Listeler, bitişik olmayan bellek tahsisine izin veren sıralı konteynırlardır. 
    Veriler çift bağlantılı liste halinde saklanır. Verilere arişmek için liste 
    başından başlamak gerekir. Vektöre kıyasla listenin geçişi yavaştır, ancak 
    bir konum bulunduğunda, ekleme ve silme hızlıdır. Normalde bir Liste dediğimizde, 
    çift bağlantılı listeden söz ederiz. Tekil bağlantılı bir liste uygulamak için 
    forward_list kullanıyoruz. 
    Çift bağlantılı listeler, içerdikleri öğelerin her birini farklı ve ilgisiz 
    depolama konumlarında saklayabilir. 
    Forward_list'e çok benzerler: Temel fark, forward_list nesnelerinin tek bağlantılı
     listeler olması ve bu nedenle, biraz daha küçük ve daha verimli olmaları karşılığında 
     yalnızca ileriye doğru yinelenebilmeleridir.
    Diğer temel standart sıra kapları (array, vector ve deque) ile karşılaştırıldığında, 
    listeler genellikle bir iteratörün zaten elde edilmiş olduğu kap içindeki herhangi 
    bir konuma eleman ekleme, çıkarma ve hareket ettirmede ve dolayısıyla yoğun kullanım 
    yapan algoritmalarda daha iyi performans gösterir. örneğin, sıralama algoritmaları.
    
    Listelerin ve ileri-listelerin bu diğer dizi kapları ile karşılaştırıldığında 
    ana dezavantajı, konumlarına göre elemanlara doğrudan erişimlerinin olmamasıdır; 
    Örneğin, bir listedeki altıncı öğeye erişmek için, bilinen bir konumdan 
    (başlangıç ​​veya son gibi), aralarındaki mesafede doğrusal zaman alan o konuma 
    yineleme yapmak gerekir. Ayrıca, her bir öğeyle ilişkili bağlantı bilgilerini 
    tutmak için fazladan bellek tüketirler (bu, küçük boyutlu öğelerin büyük 
    listeleri için önemli bir faktör olabilir).

   ## deque : 

   ## arrays : 

   ## forward_list( Introduced in C++11) : 

