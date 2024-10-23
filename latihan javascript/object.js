// Nama
// Jenis
// Penambahan
// Pengurangan

let kalkulator = {
    nama: "kalkulator A",
    jenis: "jadul",
    penambahan: function(a,b) {return a+b},
    pengurangan: function(a,b) {return a-b}
}
console.log(kalkulator["penambahan"](4,7))
// console.log(kalkulator.penambahan(2,3))
//  bisa melakukan object dalam object dan seterus nya tetapi kurang efektif,
// nama dan pendingin dan seterus nya itu disebut object
let kulkas = {
    nama: "kulkas A",
    pendingin:{
        nama: "pendingin A",
        dinginin: function() {console.log("dinginnnn...")}
    }
}

console.log(kulkas.pendingin.nama)