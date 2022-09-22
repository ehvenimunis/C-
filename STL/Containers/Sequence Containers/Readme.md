 # Sequence Containers: 
  Sıralı bir şekilde erişilebilen veri yapılarını uygular. Verilere sırayla erişilir. 
  Sıralı kaplardaki öğeler kesin bir doğrusal sırayla sıralanır. Bu sıradaki konumlarına göre tek tek öğelere erişilir.

   ## vector : 

    Vektörler, bir öğe eklendiğinde veya silindiğinde kendini otomatik olarak 
    yeniden boyutlandırma yeteneğine sahip dinamik dizilerle aynıdır ve depoları 
    container tarafından otomatik olarak işlenir. Dinamik boyutlu dizi taşıyıcısıdır.
    (Array ise sabit boyutlu dizi taşıyıcısıydı.)
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

    Yapısı vektör yapısına benzer, vektörden farkı hem önüne hemde sonuna 
    veri eklenebiliyor ve alınabiliyor olmasıdır. Ancak, vektörlerin aksine, dekorların 
    tüm öğelerini bitişik depolama konumlarında saklaması garanti edilmez: bir 
    göstericideki öğelere bir işaretçiyi başka bir öğeye kaydırarak erişmek tanımsız 
    davranışa neden olur. deque (genellikle "deck" olarak okunur), 
    çift uçlu kuyruğun düzensiz bir kısaltmasıdır. Çift uçlu kuyruklar (double-ended queue), 
    her iki ucunda da (önünde veya arkasında) genişletilebilen veya daraltılabilen dinamik boyutlara 
    sahip sequence containers'lardır.
    
    ![resim](https://user-images.githubusercontent.com/43637760/191761949-17c8ec94-9297-436e-99c4-7a34c9c3d80d.png)

    Öğelerin başlangıç ​​veya son dışındaki konumlarda sık sık eklenmesini veya 
    kaldırılmasını içeren işlemler için, deque daha kötü performans gösterir 
    ve listelerden ve forward listelerden daha az tutarlı iteratörler 
    ve referanslara sahiptir.

    Ortaya ekleme veya ortadan silme işlemi yavaştır
    Ekleme ve silme işlemlerinin genellikle uçtan yapılmadığı durumlarda list ve 
    forward list’ler deque’lere göre daha iyi performans gösterecektir.

   ## arrays : 

    Sabit bouytlu dizi taşıyıcısıdır. Kliasik tanımından farklı olarak dizi boyutu, dizi 
    doldurma ve STL içerisindeki algortimalarda kullanmaya izin verir. 

    Dizi sınıfları kendi boyutunu bilir, oysa C tarzı dizilerde bu özellik yoktur. 
    Dolayısıyla işlevlere geçerken, Array boyutunu ayrı bir parametre olarak geçirmemize gerek yoktur.
    Dizi sınıfları genellikle C tarzı dizilerden daha verimli, hafif ve güvenilirdir.
    Diğer standart kaplardan farklı olarak, diziler sabit bir boyuta sahiptir ve bir 
    ayırıcı aracılığıyla elemanlarının tahsisini yönetmezler: sabit boyutlu bir eleman 
    dizisini kapsayan bir toplu tiptirler. Bu nedenle, dinamik olarak genişletilemez 
    veya daraltılamazlar (genişletilebilen benzer bir kap için vektöre bakın).

    Sıfır boyutlu diziler geçerlidir, ancak bunlara referans verilmemelidir 

    Dizi kaplarının diğer benzersiz özelliği, bunların demet nesneleri olarak ele alınabilmeleridir:
    <array> başlığı, dizi öğelerine bir demetmiş gibi erişmek için get işlevini ve ayrıca özelleştirilmiş 
    tuple_size ve tuple_element türlerini aşırı yükler.


   ## forward_list( Introduced in C++11) : 
    Veriler tek bağlantılı liste biçiminde saklanır. 
    Veri taşıyıcının başına eklenir. Sıranın herhangi bir yerinde sabit zamanlı ekleme ve 
    silme işlemlerine izin veren sıra kapsayıcılarıdır.

    Tekil bağlantılı listeler, içerdikleri her bir öğeyi farklı ve ilgisiz depolama konumlarında 
    saklayabilir. Sıra, sıradaki öğeye bir bağlantı ilişkilendirilerek tutulur.

    Bir forward_list kapsayıcısı ile bir liste kapsayıcısı arasındaki ana tasarım farkı, birincinin 
    dahili olarak bir sonraki elemana bir bağlantı tutması ve ikincisinin eleman başına iki bağlantı 
    tutmasıdır: biri sonraki elemana ve diğeri öncekine, verimli her iki yönde de yineleme, ancak öğe 
    başına ek depolama alanı tüketir ve öğelerin eklenmesi ve çıkarılmasıyla biraz daha yüksek bir 
    zamana sahiptir. forward_list nesneleri bu nedenle liste nesnelerinden daha etkilidir, ancak bunlar 
    yalnızca ileriye doğru yinelenebilir.

    Diğer temel standart sıra kapsayıcıları (dizi, vektör ve deque) ile karşılaştırıldığında forward_list, 
    elemanların kap içinde herhangi bir konuma eklenmesinde, çıkarılmasında ve taşınmasında ve dolayısıyla 
    sıralama algoritmaları gibi bunları yoğun şekilde kullanan algoritmalarda genellikle daha iyi performans 
    gösterir.

    Ana dezavantajı, konumlarına göre öğelere doğrudan erişimlerinin olmamasıdır; Örneğin, bir forward_list 
    içinde altıncı öğeye erişmek için, bir kişinin başlangıçtan o konuma yinelemesi gerekir, bu da aralarındaki 
    mesafede doğrusal zaman alır. Ayrıca, her bir öğeyle ilişkili bağlantı bilgilerini tutmak için fazladan 
    bellek tüketirler (bu, küçük boyutlu öğelerin büyük listeleri için önemli bir faktör olabilir).

    Bir forward_list nesnesinin boyutunu elde etmek için, doğrusal zaman alan bir işlem olan başlangıç ​​ve 
    bitişiyle uzaklık algoritmasını kullanabilirsiniz.

    Forward liste yalnızca sonraki öğenin konumunu takip ederken, list hem sonraki hem de önceki öğelerin kaydını 
    tutması ve böylece her öğeyi depolamak için gereken depolama alanını artırması gerçeğiyle farklıdır. 
    İleri listenin dezavantajı, geriye doğru yinelenememesi ve tek tek öğelerine doğrudan erişilememesidir.

   



References:
    http://en.cppreference.com/w/cpp
    http://cs.stmarys.ca/~porter/csc/ref/stl/headers.html
    http://www.cplusplus.com/reference/stl/
