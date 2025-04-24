let images = []

function hello(){
    let name = window.prompt("What is your name")
    document.getElementByTd("title").innerHTML= "Hello" + name + "!"
}
function hover(){
    document.getElementById("img").src = "https://static01.nyt.com/images/2020/03/09/sports/09nba-topteams1/merlin_170229057_ce4be847-c57c-41fc-9a4d-70008084dff7-articleLarge.jpg?quality=75&auto=webp&disable=upscale"
}
function hidden(){
    document.getElementById("meme").style.display = "block "
}
function pop(){
    window.alert("Realy dont click that!")
}
function show(){
    document.getElementById("lost").style.display= "block"
}
function view(){
    if(document.getElementById("more").style.display === "block"){
        document.getElementById("more").style.display = "block"
        document.getElementById("shw").innerHTML = "Show More"
    }else{
        document.getElementById("more").style.display = "block"
        document.getElementById("shw").innerHTML = "Show Less"
    }
}