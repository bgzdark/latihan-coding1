let p = document.querySelector("p")

let button = document.querySelector("button")
let input = document.querySelector("input")
// cara memasukan kata yang diketik menjadi kata dalam html
// button.addEventListener('click',function() {
//     let isi = input.value
//     p.innerHTML = isi
// })

let clickHandler = function() {
    let isi = input.value
    p.innerHTML = isi
}
// input yang dibawah berguna untuk pada saat kita mengetik pada kolom akan langsung diikuti pada bagian html nya
input.addEventListener('input', clickHandler)

button.addEventListener('click', clickHandler)