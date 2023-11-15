# Tutorial cara make

## command cheatsheet

kalo belum pernah setup github, maka setup dulu

1. `git config --global user.name <username>`
2. `git config --global user.email <email github>`

jangan lupa juga buat aktifkan personal token di github

kalo sebelumnya belum pernah sentuh repo ini, maka lakuin

1. `git clone https://github.com/mie-intel/tugas-progdas-class.git`
2. `git pull https://github.com/mie-intel/tugas-progdas-class.git`
3. lakuin perubahan baru
4. `git add .`
5. `git commit -m "<pesan update>"`
6. `git branch -M main`
7. `git remote add origin https://github.com/mie-intel/tugas-progdas-class.git`
8. `git push -u origin main`

kalo sebelumnya udah pernah `git clone` repo ini, maka cara pakenya

1. `git pull` buat mastiin kode nya up to date
2. lakuin perubahan baru
3. `git add .` buat update
4. `git commit -m "<pesan update>"` buat commit update
5. `git push -u origin main` buat push

## struktur file

1. `/src` semua kodingan taruh sini
2. semua file bukan kodingan taruh di luar `/src`

## cara compile file c++

1. pergi ke directory `/src`
2. buka `cmd` atau apapun itu
3. compile dengan command `g++ -o app app.cpp account.cpp`
4. run program dengan comman `app`

## last but not least

kalo ada pertanyaan bilang aja
