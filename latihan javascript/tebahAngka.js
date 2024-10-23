var tanya = true;
// pemilihan dari player
while(tanya){
alert('tebak angka dari 1-10');
var p = prompt('masukan angka :');

// pemilihan dari computer
// membangkitkan bilangan random

var comp = Math.random();
console.log(comp);
if  (comp <= 0.10)
{
    comp = '1';
}else if( comp >=0.10 && comp <=0.20)
{
    comp = '2';
}else if(comp >= 0.20 && comp <=0.30)
{
    comp = '3';
}else if(comp >= 0.30 && comp <=0.40)
{
    comp = '4';
}else if(comp >= 0.40 && comp <=0.50)
{
    comp = '5';
}else if(comp >= 0.50 && comp <= 0.60)
{
    comp = '6';
}else if(comp >= 0.60 && comp <= 0,70)
{
    comp = '7';
}else if(comp >= 0.70 && comp <= 0.80)
{
    comp = '8';
}else if(comp >= 0.80 && comp <=0.90)
{
    comp = '9';
}else
{
    comp = '10';
}
// menentukan rules
var hasil = '';

if(p == comp)
{
    hasil='anda benar';
}else if(p >= comp)
{
    hasil='terlalu tinggi';
}else if(p <= comp)
{
    hasil='terlalu rendah';
}else{
    hasil='memasukan angka yang salah';
}
// } kesempatan = confirm('masih ada kesempatan');

// tampilkan hasil nya

alert( 'jawaban anda '+ hasil + '\n angka yang dicari ' + comp)
tanya = confirm('ulang?')
}
alert('terima kasih telah bermain')