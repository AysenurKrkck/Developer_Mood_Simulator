# arduino-dev-dilemma-lcd

# Developer-Mood-Simulator_Arduino-I2C-LCD

# Developer Mood Simulator (v1.0.0)

[🇹🇷 Türkçe Açıklama İçin Tıklayın](#-türkçe-içindekiler) | [🇺🇸 Click For English Description](#-english-table-of-contents)

---

## 🇹🇷 Türkçe İçindekiler
- [Proje Hakkında](#proje-hakkında)
- [Özellikler (v1.0.0)](#özellikler-v100)
- [Özel Karakterler (CGRAM) ve Durumlar](#özel-karakterler-cgram-ve-durumlar)
- [Şema ve Pin Bağlantıları](#şema-ve-pin-bağlantıları)
- [Kurulum ve Çalıştırma](#kurulum-ve-çalıştırma)

### Proje Hakkında
Bu proje, bir yazılımcının kodlama sürecindeki ruh hallerini ve meşhur döngülerini mizahi bir dille simüle eden Arduino tabanlı interaktif bir istasyondur. Potansiyometre vasıtasıyla analog sinyaller ($0 - 1023$) okunarak farklı geliştirici aşamaları (stages) tetiklenir ve bu durumlar I2C 16x2 LCD ekrana yansıtılır.

### Özellikler (v1.0.0)
- **Özel Piksel Tasarımları:** LCD ekranın hafıza slotlarına (CGRAM) kaydedilen el yapımı Üzgün Surat `:(`, Kalp `<3` ve Kilit `🔒` ikonları.
- **Dinamik Aşama Kontrolü:** Potansiyometre yardımıyla geliştiricinin anlık modunu canlı olarak haritalama ve değiştirme.
- **Gelişmiş Donanım Sürücüsü:** Standart kütüphaneler yerine otomatik adres keşfi yapabilen, kararlı ve hızlı `hd44780` kütüphanesi kullanımı.
- **Evrensel Kod Standartları:** Küresel standartlara uyum amacıyla değişken ve nesne isimlerinin temiz dille yapılandırılması.

### Özel Karakterler (CGRAM) ve Durumlar

| Aşama (Stage) | LCD Satır 1 (Mesaj + İkon) | LCD Satır 2 | Karşılık Gelen Mod |
| :---: | :--- | :--- | :--- |
| **Aşama 0** | `Code won't work` 😢 | `But why?!!` | Beklenmedik hatalarla karşılaşma anındaki evrensel çaresizlik. |
| **Aşama 1** | `Code is working` ❤️ | `But why?!!` | Kodun ilk seferde hatasız çalışmasının yarattığı şüpheci şaşkınlık. |
| **Aşama 2** | `Don't touch it!` 🔒 | `It will break..` | Çalışan prodüksiyon koduna dokunulmaması gerektiğini hatırlatan evre. |

### Pin Bağlantıları
- **I2C LCD SCL:** Arduino A5
- **I2C LCD SDA:** Arduino A4
- **I2C LCD VCC:** Arduino 5V
- **I2C LCD GND:** Arduino GND
- **Potansiyometre Sinyal (Orta Pin):** Arduino A0 (Analog Giriş)
- **Potansiyometre Besleme (Sağ Pin):** Arduino 5V
- **Potansiyometre Toprak (Sol Pin):** Arduino GND

### Kurulum ve Çalıştırma
1. Arduino IDE kütüphane yöneticisini (Library Manager) açın.
2. Bill Perry tarafından geliştirilen `hd44780` kütüphanesini aratıp yükleyin.
3. Repodaki kaynak kodu kopyalayıp Arduino IDE'ye yapıştırın, kartınızı seçip yükleme işlemini tamamlayın.

---

## 🇺🇸 English Table of Contents
- [About the Project](#about-the-project-1)
- [Features (v1.0.0)](#features-v100-1)
- [Custom Characters (CGRAM) & Stages](#custom-characters-cgram--stages)
- [Schematic and Pin Configuration](#schematic-and-pin-configuration-1)
- [Installation and Setup](#installation-and-setup-1)

### About the Project
This project is an interactive, Arduino-based simulator that humorously reflects the emotional rollercoaster and internal states of a software developer. By reading analog signals ($0 - 1023$) from a potentiometer, the system shifts between various developer mindsets and projects them onto an I2C 16x2 LCD screen.

### Features (v1.0.0)
- **Custom Pixel Art:** Hand-crafted Sad Face `:(`, Heart `<3`, and Lock `🔒` icons directly registered to the LCD's internal CGRAM memory slots.
- **Dynamic State Mapping:** Smoothly maps potentiometer positions into active developer realities in real-time.
- **Optimized Hardware Layer:** Built utilizing the modern `hd44780` library, which auto-detects I2C addresses and improves rendering performance.
- **Clean Architecture:** Refactored object schemas and clean-code naming standards for universal clarity.

### Custom Characters (CGRAM) & Stages

| Stage | LCD Line 1 (Message + Icon) | LCD Line 2 | Psychological Phase |
| :---: | :--- | :--- | :--- |
| **Stage 0** | `Code won't work` 😢 | `But why?!!` | The classic despair of encountering unexpected compilation bugs. |
| **Stage 1** | `Code is working` ❤️ | `But why?!!` | The deep suspicion and anxiety when code miraculously works on trial one. |
| **Stage 2** | `Don't touch it!` 🔒 | `It will break..` | The golden rule of fragile production systems that are working fine. |

### Pin Configuration
- **I2C LCD SCL:** Arduino A5
- **I2C LCD SDA:** Arduino A4
- **I2C LCD VCC:** Arduino 5V
- **I2C LCD GND:** Arduino GND
- **Potentiometer Signal (Center Pin):** Arduino A0 (Analog Input)
- **Potentiometer VCC (Right Pin):** Arduino 5V
- **Potentiometer GND (Left Pin):** Arduino GND

### Installation and Setup
1. Launch your Arduino IDE and open the Library Manager.
2. Search for and install the `hd44780` package authored by Bill Perry.
3. Paste the project source code into your sketch editor, select your board target (e.g., Arduino Uno), and compile/upload.
