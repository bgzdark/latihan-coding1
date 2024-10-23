// var mamat = ['juleha',[4,5,3]] // terdapat array 2 dimensi yaitu ada arrau dalam array
// console.log(mamat[1][1])
// Manipulasi array
// cara menambahkan isi array
// var arr = [0] = 'syech';
// arr = [1] = 'smith';
// arr = [2] = 'yoai';
// console.log(arr);

//cara menghapus isi array
// var arr = ['syech', 'smith', 'mamat']
// arr [1] = undefined;
// console.log(arr);


//array method dari javascript :
// .lenght
// .join, menampilkan isi array dengan rapih
// .push, menambahkan isi array pada sisi akhir
// .pop, menghapus isi array pada isi akhir
// .unshift dan shift, menambahkan dan menghapus isi array pada isi awal
// .slice, mengambil beberapa array
// .splice, menyambung beberapa array
// .forRach dan map, sama seperti looping
// .sort, menyusun isi array
//cara menampilkan isi array
// var arr = ['syech', 'smith', 'mamat'];
// for( var i = 0; i < 3; i++)
// {
//     console.log('mahasiswa ke-' + '' + arr[i]);
// }

// var arr = ['syech', 'smith', 'mamat'];
// arr.push('udin', 'junaedi');
// arr.pop();
// arr.unshift('rahman', 'rahmat');
// arr.shift();
// console.log(arr.join(' '))

// var arr = ['syech', 'smith', 'mamat'];
// // rumus = splice(indexAwal, mauDihapusBerapa,elemenBaru1,elemenBaru2,..)
// arr.splice(1, 2 ,'kambing');
// console.log(arr.join(' '));

// var arr = ['syech', 'smith', 'mamat'];
// //rumus = slice(awal,batas akhir);
// var arr2 = arr.slice(1,3)
// console.log(arr.join(' '))

// var angka = [1,2,3,4,5,6,7,8,9];
// angka.forEach(function(e)
// {
//     console.log(e);
// });

// var nama = ['syech', 'smith', 'mamat'];
// nama.forEach(function(e,i)
// {
//     console.log('mahasiswa ke-' + (i=1) + 'adalah' + e);
// })

// var angka = [1,2,3,4,5,6,7,8,9];
// var angka2 = angka.map(function(e)
// {
//     return e * 2;
// })
// console.log(angka2.join(' - '))

var angka = [1,6,9,4,3,8,20,30,2,7,5];
console.log(angka.join(' - '))
angka.sort(function(a,b)
{
    return a-b;
});
console.log(angka.join(' - '))