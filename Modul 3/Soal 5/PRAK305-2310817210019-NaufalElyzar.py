detik = int(input())

jam = detik // 3600  
sisa = detik % 3600
menit = sisa // 60  
sisa_detik = sisa % 60

if jam > 24:
    hari = jam // 24
    jam = jam % 24
    print(f"{hari} hari {jam:02}:{menit:02}:{sisa_detik:02}")
else:
    print(f"{jam:02}:{menit:02}:{sisa_detik:02}")
