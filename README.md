# Basic Epoch Time Apps

Bu proje, C programlama dilinde yazılmış, epoch zaman hesaplamaları yapan iki temel uygulamayı içermektedir. Uygulamalar, tarihler arası zaman farklarını hesaplamak ve doğum günü hesaplamaları yapmak için kullanılabilir.

## Proje İçeriği

Proje iki ana dosyadan oluşmaktadır:

1. `epoch_time_calculation.c`: İki tarih arasındaki zaman farkını hesaplayan program
2. `calculating_difference_between_birth_days_epoch_calculation.c`: Doğum günü hesaplamaları ve tarih farklarını hesaplayan interaktif program

## Özellikler

### epoch_time_calculation.c

- İki farklı tarih ve saat girişi yapabilme
- Girilen tarihler için epoch zamanı hesaplama
- İki tarih arasındaki farkı aşağıdaki birimlerde hesaplama:
  - Saniye
  - Dakika
  - Saat
  - Gün

### calculating_difference_between_birth_days_epoch_calculation.c

- Kullanıcı dostu menü arayüzü
- İki farklı mod:
  1. İki tarih arası hesaplama
  2. Doğum günü hesaplama (güncel tarihle karşılaştırma)
- Sonuçları şu formatlarda gösterme:
  - Epoch zamanı (saniye)
  - Gün sayısı
  - Yıl sayısı

## Kurulum ve Çalıştırma

### Gereksinimler

- C derleyici (GCC önerilir)
- Standard C kütüphanesi

### Derleme

```bash
# epoch_time_calculation.c için
gcc epoch_time_calculation.c -o epoch_calc

# calculating_difference_between_birth_days_epoch_calculation.c için
gcc calculating_difference_between_birth_days_epoch_calculation.c -o birth_calc
```

### Çalıştırma

```bash
# Epoch zaman hesaplayıcı için
./epoch_calc

# Doğum günü hesaplayıcı için
./birth_calc
```

## Kullanım Örnekleri

### epoch_time_calculation.c

```
Birinci tarih ve saati girin (gg aa yyyy ss dd sn): 1 1 2024 0 0 0
Ikinci tarih ve saati girin (gg aa yyyy ss dd sn): 2 1 2024 0 0 0
```

### calculating_difference_between_birth_days_epoch_calculation.c

```
Tarih Farki Hesaplayici

1. Iki tarih arasi hesaplama
2. Dogum gunu hesaplama
3. Cikis

Seciminiz: 2

Dogum tarihinizi giriniz
Gun: 1
Ay: 1
Yil: 2000
```

## Notlar

- Tarih girişlerinde geçerli tarih formatlarına dikkat edilmelidir
- Ay değerleri 1-12 arasında olmalıdır
- Program negatif tarih farklarını otomatik olarak pozitife çevirir
- Doğum günü hesaplaması sistem saatini kullanır

## Katkıda Bulunma

1. Bu depoyu fork edin
2. Yeni bir branch oluşturun (`git checkout -b feature/yeniOzellik`)
3. Değişikliklerinizi commit edin (`git commit -am 'Yeni özellik eklendi'`)
4. Branch'inizi push edin (`git push origin feature/yeniOzellik`)
5. Pull Request oluşturun
