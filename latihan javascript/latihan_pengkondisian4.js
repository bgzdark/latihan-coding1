 var s = '';
 for(var i = 0; i < 10; i++)
 {
    for(var j = 0; j <= i ; j++ )
    {
        s +='*';
    }
    
        s +='\n'; 
   
 } 
 for(var k = 10; k > 0; k-- )
{
        for(var l = 0; l < k ; l++ )
    {
        s +='*';
    }   
        s +='\n';
}
 console.log(s);

//  var s = '';
//  // Buat Baris
//  for (var baris = 0; baris < 5; baris++) {
//      // Buat Spasi
//      for (var spasi = 10; spasi > baris; spasi--) {
//          s += ' '
//      }
//      // Buat Bintang
//      for (var bintang = 0; bintang <= baris; bintang++) {
//          if (baris >= 1) {
//              for (var b = 0; b < baris; b++) {
//                  s += '*' + '*'
//              }
//          }
//          s += '*'
//          break
//      }
//      s += '\n'
//  }

//  console.log(s)



 var string = '';
 //membuat baris
for( var i=10; i>=0; i--)
{
    // membuat spasi
    for(var k=15; k>=i; k--)
    {
        string += ' ' ;
    }
    // membuat bintang disetiap kolom
    for( var j=0; j<i; j++){
        
        string += '*';
        if(j>=1)
        {
           string += '*';
        }
    
    }
    // memberi jarak 1 baris per bintang
    string += '\n';
}

// cetak 
console.log(string);