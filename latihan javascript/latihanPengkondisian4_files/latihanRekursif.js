// Base case

// function cetakAngka(n)
// {
//     if (n === 100)return;
//     console.log(n);
//     cetakAngka(n+1);
// }
// cetakAngka(1);

function faktorial(m)
{
    if (m === 0) return 1;
    return m * faktorial(m-1);
}
var hasil = faktorial(5);
console.log(hasil);
