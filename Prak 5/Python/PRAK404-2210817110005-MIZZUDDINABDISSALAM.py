a = 1
while a != 5 :
        print("Pilih program \n1. Penjumlahan \n2. Pengurangan \n3. Perkalian \n4. Pembagian \n5. Exit\n");
        p = float(input("Masukkan Pilihan : "))
        if p == 5 :
            print("Terimakasih, telah menggunakan kalkulator M Izzuddin Abdis Salam\n\n")
            break
        elif p < 0 or p > 5 : print("Input anda salah, silahkan coba lagi.\n\n")
        else : 
            np = float(input("Masukkan nilai pertama : "))
            nk = float(input("Masukkan nilai kedua   : "))
            if p == 1 : 
                hl = np + nk 
                print("Hasil Penjumlalahan antara %.2f dengan %.2f adalah %.2f\n\n"%(np, nk, hl))
            elif p == 2 : 
                hl = np - nk 
                print("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n\n"%(np, nk, hl))
            elif p == 3 : 
                hl = np * nk 
                print("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n\n"%(np, nk, hl))
            else : 
                hl = np / nk 
                print("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n\n"%(np, nk, hl))