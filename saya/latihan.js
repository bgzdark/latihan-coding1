const element = document.getElementById("typeEffect");
const text = "Web Developer";

function typeEffect(element, text, speed = 100){
    let index = 0;

    function type(){
        if(index < text.length){
            element.innerHTML += text.charArt(index);
            index++;
            setTimeout(type, speed);
        }else {
            setTimeout(() =>{
                element.innerHTML = "";
                typeEffect(element, text, speed);
            }, 1000);
        }
    }
    type();
}
typeEffect(element, text, 100);