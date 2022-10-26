Kelompok 4 : 
- Dian Lies Seviona Dabukke
- Shafa Nabilah Hanin

# Praktikum Komputasi Numerik E
## Metode Bolzano

Metode bolzano disebut juga metode setengah interval, metode bagi dua, metode biseksi, atau metode pemotongan biner.
Langkah-langkah yang harus dilakukan pada metode bolzano yaitu:
1. Menghitung fungsi pada interval yang sama dari hingga terjadi perubahan tanda
2. Estimasi pertama dari akar persamaan didapat dari titik tengah dari kedua titik yang mengalami perubahan tanda. 
Hal tersebut dapat diperoleh melalui x3=(x1+x2)/2
3. Tingkat akurasi dapat ditentukan sesuai arahan dengan menetapkan berapa angka di belakang koma
4. Untuk mengetahui berada di interval manakah akar persamaan berada, ada beberapa ketentuan, yaitu:
	a. jika f(x3)=0, maka akar persamaan adalah x3 dan hitungan selesai
	b. jika f(x1)*f(x3)>0, maka x3=x1 dan kembali menghitung perkiraan akar baru
	c. jika f(x1)*f(x3)<0, maka x3=x2 dan kembali menghitung perkiraan akar baru
5. Jika nilai yang didapat sesuai dengan batasan yang ditetnukan, maka proses selesai dan x3 adalah akar persamaan yang dicari

![Screenshot (626)](https://user-images.githubusercontent.com/90541607/198072278-72dc4514-35f9-45c4-88b3-00511b4a5cb7.png)
![Screenshot (627)](https://user-images.githubusercontent.com/90541607/198072311-3a46ecd5-7e39-48a5-b23d-a085306b1737.png)
