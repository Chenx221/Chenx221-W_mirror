var pause_tese_img = false;

function ir1() {
    document.getElementById("img-right1").src = "img/txt_111.jpg";
    document.getElementById("img-left").src = "img/111.jpg";
    pause_tese_img = true;
}
function un_ir1() {
    document.getElementById("img-right1").src = "img/txt_111_1.jpg";
    pause_tese_img = false
}
function ir2() {
    document.getElementById("img-right2").src = "img/txt_222.jpg";
    document.getElementById("img-left").src = "img/222.jpg";
    pause_tese_img = true;
}
function un_ir2() {
    document.getElementById("img-right2").src = "img/txt_222_2.jpg";
    pause_tese_img = false
}
function ir3() {
    document.getElementById("img-right3").src = "img/txt_333.jpg";
    document.getElementById("img-left").src = "img/333.jpg";
    pause_tese_img = true;
}
function un_ir3() {
    document.getElementById("img-right3").src = "img/txt_333_3.jpg";
    pause_tese_img = false
}

var n = 1;
var src_array = ["img/111.jpg", "img/222.jpg", "img/333.jpg"];
var tese_img = setInterval(function () {
    if (n < 0 || n > 2) { n = 0; }
    console.log("tese_img current:" + n); //debug
    if (pause_tese_img == false) { document.getElementById("img-left").src = src_array[n]; }
    else { console.log("手动选择中，图片变化暂停"); }
    n++;
}, 4000);