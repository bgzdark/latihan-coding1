var tanya = true;
while( tanya ){
// pemilihan dari player
var p = prompt('pilih : gajah, semut, orang');

// pemilihan dari computer
// membangkitkan bilangan random
var comp = Math.random();
if( comp < 0.34)
{
    comp = 'gajah';
}else if(comp >= 0.34 && comp <0.67)
{
    comp = 'orang';
}else
{
    comp = 'semut';
}

var hasil = '';
// menentukan rules
if(p == comp)
{
    hasil= ' seri';
}else if( p == 'gajah')
{
    // if(comp == 'orang')
    // {
    //     hasil='menang';
    // }else{
    //     hasil='kalah';
    // }
    hasil = ( comp == 'orang') ? 'menang' : 'kalah';
}else if( p == 'orang'){
    hasil = ( comp == 'gajah') ? 'kalah' : 'menang';
}else if( p == 'semut'){
    hasil = ( comp == 'gajah') ? 'menang' : 'kalah';
}else{
    hasil = ' memasukan pilihan yang salah'
}
// tampilkan hasil nya
alert(' kamu memilih ' + p + 'dan komputer memilih ' + comp + "\n maka kamu = " + hasil +"!")
tanya = confirm('ulangi!')
}
alert('terima kasih telah bermain')
