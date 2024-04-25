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
- [Setup](#setup)
- [Play Game](#play-game)
- [See also](#see-also)
  * [Các kỹ thuật sử dụng](#các-kỹ-thuật-sử-dụng)
  * [Các nguồn tham khảo](#các-nguồn-tham-khảo)
- [Conclusion](#conclusion)
  * [Điều tâm đắc](#điều-tâm-đắc)
  * [Hạn chế](#hạn-chế)
  * [Hướng phát triển](#hướng-phát-triển)
- [A Special Thanks To](#a-special-thanks-to)
- [Mức điểm tự đánh giá](#mức-điểm-tự-đánh-giá)

## **Description** 
### *Game description and instruction* 
- Đây là một trò chơi được lập trình với ngôn ngữ C++ và thư viện SDL2. Trò chơi được lấy ý tưởng từ game cá lớn nuốt cá bé xong được phát triển nhiều tính năng và nhiều chế độ chơi mới khác lạ và thú vị hơn.
- Khác với cách chơi truyền thống Kaiser's Shark có nhiều tính năng và chế độ chơi mới lạ như:
 + Chế độ chơi 1: (chế độ đánh boss) người chơi sẽ nhập vai vào một con cá mập đi ăn những con cá bé hơn và đến khi đủ sức mạnh có thể đánh nhau với Boss - một con tàu bắn ra những viên đạn để giết cá mập.
 + Chế độ chơi 2: Nhập vai vào con tàu để săn bắt cá. Người chơi sẽ được cung cập một số đạn nhất định và phải dùng số đạn đó để đoạt được số cá được quy định.
 + Chế dộ chơi 3: Chế độ basic nhập vai vào cá mập và đi ăn những con cá nhỏ hơn, tiến hóa dần khi đạt đủ số cá. Nếu khi đang nhỏ và đâm phải cá lớn hơn thì sẽ thua.
- Có âm thanh sống động khi chơi.
- Trong phần option, người chơi có thể tùy chỉnh bật/tắt âm thanh. Ngoài ra còn có thể chọn tàu chiến và loại đạn nhằm kiến cho người chơi không bị nhàm chán.
- Game còn hỗ trợ người chơi dùng trò chơi, chơi lại game và thoát game.
- Kaiser's Shark chắn chắn sẽ không khiến người chơi thất vọng.
- Video demo:

### *Control* 

- Dùng chuột trái để di chuyển cá
- Chế độ chơi 1: dùng chuột phải để dùng ultimate

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












