var jmlAngkot = 10;
var angkotBeroperasi = 6;
for(var noAngkot = 1; noAngkot <= jmlAngkot; noAngkot++)
{
    if(noAngkot <= angkotBeroperasi)
    {
        console.log('Angkot No. '+ noAngkot +' berjalan dengan baik.')
    }else{
        console.log('Angkot No. '+ noAngkot +' sedang tidak beropersi.')
    }
}