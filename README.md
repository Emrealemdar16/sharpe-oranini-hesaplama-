Bu proje, finansal yatırım performansını objektif olarak değerlendirmek için geliştirilmiş bir C programıdır. Geliştirilen uygulama, yatırımın getirisini aldığı riske göre ayarlayarak Sharpe Oranı'nı hesaplar ve sonucu finansal piyasa standartlarına göre yorumlar.



Amaç: Bir yatırımın risk-ayarlı getirisini (Risk-Adjusted Return) ölçmek ve risk-getiri dengesini objektif verilere dayanarak analiz etmektir.

Nicel Analiz: Bu çalışma, yatırım kararlarını desteklemek için veri ve matematiksel tekniklerin kullanıldığı Nicel Analiz alanına bir giriş niteliğindedir.

Program, Sharpe Oranı'nın temel formülünü kullanır: Sharpe Oranı eşittir (Yatırım Getirisi eksi Risksiz Faiz Oranı) bölü Standart Sapma.

Hata Kontrolü: Sıfıra bölme hatasını önlemek amacıyla, kullanıcı Standart Sapmayı sıfır olarak girdiğinde programı uyarı mesajı vererek güvenli bir şekilde sonlandıran bir kontrol mekanizması eklenmiştir.

Kullanıcı Girişi Netleştirme: Printf fonksiyonunda ekrana yüzde karakterini yazdırmak için C dilinin kuralı gereği çift yüzde işareti (%%) kullanılarak kullanıcıdan beklenen format netleştirilmiştir.

Program, hesaplanan Sharpe Oranı değerini finansal piyasa standartlarına uygun, sıralı koşul yapısı (if-else if) kullanarak yorumlar. Yorumlama en iyiden en kötüye doğru kurulmuştur:

3.0 ve Üzeri: MÜKEMMEL. Risk karşılığında çok güçlü getiri.

2.0 ile 3.0 Arası: ÇOK İYİ. Güçlü, üstün risk-ayarlı performans.

1.0 ile 2.0 Arası: İYİ. Riske göre kabul edilebilir getiri.

0.0 ile 1.0 Arası: ZAYIF. Alınan riske göre fazladan getiri yetersizdir.

0.0'dan Küçük (Negatif): COK ZAYIF. Getiri, risksiz faiz oranının bile altındadır. Kritik uyarı.
