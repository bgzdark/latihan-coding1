// Membuat dan menjalankan function

// var a = prompt('masukan nilai = ');
// var b = prompt('masukan nilai = ');
// var voulmeA;
// var volumeB;
// volumeA = a*a*a;
// volumeB = b*b*b;
// total = volumeA + volumeB;
// console.log(total);

// Dipersingkat nilai di atas
function jumlahVolumeKubus(a,b)
{ 
    return a*a*a + b*b*b;
}
var a = prompt('masukan nilai = ');
var b = prompt('masukan nilai =');
var hasil = jumlahVolumeKubus(a,b);
console.log(hasil);