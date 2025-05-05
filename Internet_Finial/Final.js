let images = ["https://cdn.aarp.net/content/dam/aarp/travel/destinations/2021/07/1140-bryce-canyon-hero.imgcache.rev.web.1914.1100.jpg", "https://www.reneeroaming.com/wp-content/uploads/2022/06/Bryce-Canyon-Guide-Inspiration-Point-1.jpg","https://th-thumbnailer.cdn-si-edu.com/prCcoKOQiPkBi5QvIyWHEQVIltE=/fit-in/1600x0/https://tf-cmsv2-journeys-media.s3.amazonaws.com/filer/d2/52/d252f665-21c6-4daa-b163-8911ddd0d383/ut_bryce_hoodoos_sunset_ist_176984017.jpg"]
let counter = 0

function change(){
    if (counter < images.length){
        document.getElementById("image").src = images[counter]
        counter += 1
    }else{
        counter = 0
        document.getElementById("image").src = images[counter]
    }

}

function myFunction() {
    var x = document.getElementById("myDIV");
    if (x.style.display === "none") {
      x.style.display = "block";
    } else {
      x.style.display = "none";
    }
  }