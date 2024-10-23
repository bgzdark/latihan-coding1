var jmlAngkot = 10;
var angkotBeroperasi = 6;
var angkotLembur = 8;


for(var noAngkot = 1; noAngkot <= jmlAngkot; noAngkot++)
{
    if(noAngkot <= angkotBeroperasi && noAngkot !== 5)
    {
        console.log('Angkot No. '+ noAngkot +' berjalan dengan baik.')
    }else if(noAngkot === angkotLembur || noAngkot === 10 || noAngkot === 5) { 
        console.log('Angkot No. '+ noAngkot +' sedang lembur.')
    // }else if(noAngkot === 5){
    //     console.log('Angkot No. ' + noAngkot + ' sedang lembur')
    }else{
        console.log('Angkot No. ' + noAngkot+ ' sedang tidak beroperasi')
    }
}