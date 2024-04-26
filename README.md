# ***Kaiser's Shark*** 

## **Introduction** 

+ Họ và tên: Nguyễn Đức Anh - K68CB - UET

+ Mã sinh viên: 23020007

+ Bài tập lớn: **Kaiser's Shark** (INT2215_50 - Lập trình nâng cao)
# Phụ lục
- [Description](#description)
  * [Game description and instruction](#game-description-and-instruction)
  * [Control](#control)
  * [Preview](#preview)
- [Objects In game](#objects-in-game)
- [Cách tải](#Cách-tải)
- [Play Game](#play-game)
- [Kỹ thuật](#Kỹ-thuật)
  * [Các kỹ thuật sử dụng](#các-kỹ-thuật-sử-dụng)
  * [Các nguồn tham khảo](#các-nguồn-tham-khảo)
- [Source Code Game](#source-code-game)
- [Conclusion](#conclusion)
  * [Điều tâm đắc](#điều-tâm-đắc)
  * [Hạn chế](#hạn-chế)
  * [Hướng phát triển](#hướng-phát-triển)
- [A Special Thanks To](#a-special-thanks-to)
- [Mức điểm tự đánh giá](#mức-điểm-tự-đánh-giá)

## **Description** 
### *Game description and instruction* 
- Đây là một trò chơi được lập trình với ngôn ngữ C++ và thư viện SDL2. Trò chơi được lấy ý tưởng từ game cá lớn nuốt cá bé xong được phát triển nhiều tính năng và nhiều chế độ chơi mới khác lạ và thú vị hơn.
- Khác với cách chơi truyền thống, Kaiser's Shark có nhiều tính năng và chế độ chơi mới lạ như:
 + Chế độ chơi 1: (chế độ đánh boss) người chơi sẽ nhập vai vào một con cá mập đi ăn những con cá bé hơn và đến khi đủ sức mạnh có thể đánh nhau với Boss - một con tàu bắn ra những viên đạn để giết cá mập.
 + Chế độ chơi 2: Nhập vai vào con tàu để săn bắt cá. Người chơi sẽ được cung cập một số đạn nhất định và phải dùng số đạn đó để đoạt được số cá được quy định.
 + Chế dộ chơi 3: Chế độ basic nhập vai vào cá mập và đi ăn những con cá nhỏ hơn, tiến hóa dần khi đạt đủ số cá. Nếu khi đang nhỏ và đâm phải cá lớn hơn thì sẽ thua.
- Có âm thanh sống động khi chơi.
- Trong phần option, người chơi có thể tùy chỉnh bật/tắt âm thanh. Ngoài ra còn có thể chọn tàu chiến và loại đạn nhằm kiến cho người chơi không bị nhàm chán.
- Game còn hỗ trợ người chơi dùng trò chơi, chơi lại game và thoát game.
- Kaiser's Shark chắn chắn sẽ không khiến người chơi thất vọng.
- Video demo: https://youtu.be/D3W3us82lJY

### *Control* 

- Dùng chuột trái để di chuyển cá
- Chế độ chơi 1: dùng chuột phải để dùng ultimate
- Chế độ 2 : dùng chuột để diều kiển hướng của đạn

### *Preview*
- Bắt đầu chơi sẽ xuất hiện màn hình như sau:
![Screenshot 2024-04-25 220816](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/2ceabf8c-107f-4e69-8cc1-15b7995965f6)
- Khi ấn vào mục OPTIONS sẽ có màn hình như sau:
![Screenshot 2024-04-25 220836](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/f3c39ada-3bc5-4908-b9c7-6ad2cd42b6a8)
- Khi ấn vào PLAY sẽ xuất hiện màn hình như sau:
![Screenshot 2024-04-25 220826](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/70e4776f-679d-4a9f-9a5e-78956c0687bc)
- Khi ấn vào chế độ chơi chế độ chơi 1 sẽ có các màn hình như sau:
![Screenshot 2024-04-25 221201](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/dbee0172-e571-4c56-8a18-0a84ce748119)
![Screenshot 2024-04-25 222651](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/2c6cd6c6-1ce3-4bf6-b20a-2fd36f2205e5)
- Khi ấn vào chế độ chơi 2 sẽ có như sau:
![Screenshot 2024-04-25 221507](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/cf962536-89ea-4454-a29b-fb09b0310e6d)
- Khi ấn vào chế độ 3 sẽ có như sau:
![Screenshot 2024-04-25 221705](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/d3bb0c24-9d5b-460b-b755-fd2da36f2334)
- Khi ấn pause se xuất hiện màn hình như sau:
![Screenshot 2024-04-25 222710](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/64f598ce-aa87-4e98-8223-03d37c538e34)
- Khi thắng sẽ có màn hình như sau:
![Screenshot 2024-04-25 222700](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/291bf26f-f979-4e58-a19c-d88e1142f31b)
- Khi thua sẽ có màn hình như sau:
![Screenshot 2024-04-25 221207](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/fa2c05c3-2bbd-4565-bfb2-aea6a5766509)

## **Objects In game**
|                                         | Mô tả                                                                                        |
|-----------------------------------------|--------------------------------------------------------------------------------------------------|
|![ca_map](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/dee4ba55-e0cd-44d8-831e-62187fb16ebe)| Nhân vật chính của game|
|![iconsmall](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/34695daf-6b3f-422e-b824-cdc83f2148ae)| Cá nhỏ có thể ăn được ngay khi vừa bắt đầu|
|![iconmidfish](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/0c9fcbea-2b52-49e6-859d-1268c17d1b23)| Cá vừa có thể ăn được khi đặt level2|
|![iconbigfish](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/1f96706a-4183-4462-bcc2-51790433373e)| Cá to có thể ăn được khi đạt level3|
|![item_music_turnon](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/7a541b33-7091-4568-98a6-96e122d41c88)| Hiển thị âm thanh bật|
|![item_music_turnoff](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/acbb48c3-ec9c-4501-a4a2-6decac75aaca)| hiển thị âm thanh tắt|
|![mui_ten](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/a7a5fee5-fb38-4836-b4c0-bc0d49ed10c1)| Nút quay lại|
|![pausebutton](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/e2b61380-9203-43df-a8e1-9899c5434c6e)| Nút dừng game|
|![taungamoke](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/cb6d740f-0287-430d-95ad-7837738dc6f3)| Các loại tàu|
|![tau_ngam_2](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/ddd9bcea-462e-4e16-983d-a1233a131420)| Các loại tàu|
|![tau_ngam_3](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/978b2226-97c6-4e0f-b17f-7c8e851ff3be)| Các loại tàu|
|![tau_ngam_4](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/493a7151-710e-4f4c-8e4a-f2df21e1c1cd)| Các loại tàu|
|![bullet0](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/93c15097-905d-41eb-ad1e-2bd5766f7138)| Các loại đạn|
|![bullet1](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/535d99a1-62fa-4400-8c13-1b093c11ea50)| Các loại đạn|
|![bullet2](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/d49f9a5b-33fd-4aec-87ae-6f51702c65d4)| Các loại đạn|
|![bullet3](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/fbbfb92d-1019-46ad-9ecc-8ebbbf330766)| Các loại đạn|
|![ultimate_](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/7316b3a2-0fa7-46c3-908e-7b16d4f63113)| Skill của cá|

## **Play-Game**
- Khi vào chế độ 1: người chơi sẽ điều kiển cá bằng chuột và khi đạt đủ điều kiện người chơi có thể click chuột phải để dùng skill và win game
![Screenshot 2024-04-25 221201](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/dbee0172-e571-4c56-8a18-0a84ce748119)
![Screenshot 2024-04-25 222651](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/2c6cd6c6-1ce3-4bf6-b20a-2fd36f2205e5)
- Khi vào chế độ chơi 2 người chơi sẽ điều kiển hướng đạn của một con tàu. Con tàu được mặc định là 50 viên nếu không đạt được 100 điểm trước khi hết đạn sẽ thua
![Screenshot 2024-04-25 221507](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/cf962536-89ea-4454-a29b-fb09b0310e6d)
- Khi vào chế dộ chơi 3 người chơi chơi như game cá bình thường khi đạt đủ 100 điểm thì sẽ chiến thắng
![Screenshot 2024-04-25 221705](https://github.com/danhnahh/Kaiser-s-Shark/assets/161802978/d3bb0c24-9d5b-460b-b755-fd2da36f2334)

## **Cách tải**
- Lưu ý phải chạy game trên Visual Studio 2022
- Yêu cầu có C++ compiler
  + Tạo một folder và git clone https://github.com/danhnahh/Kaiser-s-Shark.git
  + Vào file main.exe và chạy chương trình
  + Tải xuống trực tiếp file .zip từ Github
- Có vấn đề gì vui lòng liên hệ qua email : 23020007@vnu.edu.vn

## **Kỹ thuật**
### *Các kỹ thuật sử dụng*
- Thư viện SDL2
- Sử dụng nhiều class, vector, tách file, con trỏ, xâu chuỗi,biến, vòng lặp, cấu trúc rẽ nhánh, mảng, ...
- Xử lý thao tác chuột, âm thanh, hình ảnh, chữ.
- Tạo menu và các nút ấn di chuyển giữa các menu.
- Tạo Option khi chơi : pause game, tắt/bật âm thanh, chọn các chế độ khác nhau, 
- Sử dụng photoshop, paint để edit các ảnh dựa vào một số mẫu ảnh từ các nguồn khác.
- Có sử dụng kiến thức về khoảng cách để tính toán va chạm của các đối tượng.

### *Các nguồn kham khảo*
- Cài đặt và setup SDL2 từ LazyFoo và các bạn, ngoài ra còn học qua kênh youtube: Phát Triển Phần Mềm 123A-Z
- Học cách sử dụng SDL2:
  + Học từ LazyFoo
  + Qua các bài giảng của TS. Lê Đức Trọng
  + Qua các bài giảng của CN. Trần Trường Thủy
  +  Qua kênh youtube: Phát Triển Phần Mềm 123A-Z
- Hình ảnh từ các nguồn trên google, pinterest
https://www.pinterest.com/search/pins/?q=Fish%20animation&rs=srs&b_id=BGqUcd3DbxgxAAAAAAAAAAD9lsmEQmj9iVbAyMqSrccKa8xckJOz9Jgp0A_s4yjBKXBgbjVnItvW&source_id=rlp_ICQCPKfK
- Âm thanh được dùng từ tựa game: Feeding Frenzy 2, chỉnh sủa âm thanh đượ dùng từ: Free Wav Sound Effects Download
https://pixabay.com/sound-effects/search/wav/

## **Source Code Game**
- Folder picture: chứa tất cả các hình ảnh sử dụng
- Folder music: chứa tất cả âm thanh được sử dụng
- Folder font: chứa font chữ sử dụng
- .gitignore: để chứa các file lớn
- CommnonFunc.h: để khởi tạo các biến
- mainFunc.h: xử lí các hình ảnh, âm nhạc, font
- Text.h: khai báo để sử dụng font ( tham khảo của kênh youtube: Phát Triển Phần Mềm 123A-Z)
- main.cpp: logic chính của chương trình

##  **Conclusion**
### **Điều tâm đắc**
- Hiểu được mô hình vận hành của một chương trình hoàn chỉnh
- Biết được cách sử dụng Github
- Biết được cách sử dụng các phần mềm chỉnh sửa cắt ghép ảnh
- Biết được cách chỉnh sửa âm thanh
- Học được cách setup môi trường, sử dụng thư viện ngoài (SDL2, SDL2_ttf, SDL2_mixer, SDL2_image, ...)
- Học được kỹ thuật duyệt mảng, sinh số ngẫu nhiên

### **Hạn chế**
- Chưa chia được file
- Code có vài chỗ hơi khó hiểu

### **Hướng Phát triển**
- Tạo thêm nhiều loại cá hơn nữa và có các chức năng khác nhau
- Lưu tên người chơi
- Thêm chế độ đếm giờ
- Tạo thêm nhiều skills
- Thêm chế độ 2 người chơi
- Thêm chế độ mua đồ, nạp tiền
- Thêm chế độ bảng xếp hạng

## **A Special Thanks To**
- TS. Lê Đức Trọng : Giảng viên
- CN. Trần Trường Thủy : Giảng viên
- SV. Nguyễn Hoàng Dương : Mentor
- D3.214 Team






















