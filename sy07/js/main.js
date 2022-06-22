// By Chenx221
var pause_tese_img = false; // 对手动变化的图片进行暂停
var pause_envir_img = false; // 对横向滚动的图片进行暂停
var speed = 1; //envir 变速
var pause_img = false;

// 环境展示 变速
var base = document.getElementById("envir");
base.innerHTML += base.innerHTML; //复制所有Li元素
base.style.width = base.getElementsByTagName("li").length * base.getElementsByTagName("li")[0].offsetWidth + "px"; //计算ul的宽度
base.style.left = "0px"; //好像没什么卵用
var envir_timer = setInterval(function () { // 定时器，一半宽度为一轮
    if (pause_envir_img == false) { base.style.left = parseInt(base.style.left) - 1 + "px"; }
    if ((parseInt(base.style.left) * -1) > (parseInt(base.style.width) / 2)) {
        base.style.left = 0;
        console.log("1 loop completed"); // debug
    }
}, 30 / speed);

function aevent(){
    window.scrollTo({
        top: 0,
        behavior: 'smooth'
        //实现平滑滚动
    })
}

var n = 1;
var src_array = ["img/01.jpg", "img/02.jpg", "img/03.jpg"];
var banner_image = setInterval(function () {
    if (n < 0 || n > 2) { n = 0; }
    if (!pause_img) {
        document.getElementById("banner_img").src = src_array[n];// 如果暂停，则不变换
        clean_b();
        document.getElementById("b"+(n+1)).style.backgroundColor = "rgb(227,122,122,50%)";
    }
    n++;
}, 5000 / speed);
function clean_b(){
    document.getElementById("b1").style.backgroundColor = "rgba(240, 240, 240,0.5)";
    document.getElementById("b2").style.backgroundColor = "rgba(240, 240, 240,0.5)";
    document.getElementById("b3").style.backgroundColor = "rgba(240, 240, 240,0.5)";
}
function show_img(n) {
    pause_img = true;
    document.getElementById("banner_img").src = "img/0" + n + ".jpg";
    clean_b();
    document.getElementById("b"+(n)).style.backgroundColor = "rgb(227,122,122,50%)";
}
function unshow_img() {
    pause_img = false;
}

// 图片手动变化，以及对pause_tese_img的更改
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

//图像定时变换
var n2 = 1;
var src2_array = ["img/111.jpg", "img/222.jpg", "img/333.jpg"];
var tese_img = setInterval(function () {
    if (n2 < 0 || n2 > 2) { n2 = 0; }
    console.log("tese_img current:" + n2); //debug
    if (pause_tese_img == false) { document.getElementById("img-left").src = src2_array[n2]; }// 如果暂停，则不变换
    else { console.log("手动选择中，图片变化暂停"); }
    n2++;
}, 4000 / speed);

// function pause_envir() to change pause_envir value to true
function pause_envir() {
    pause_envir_img = true;
    // console.log("pause_envir:true"); 暂不启用
    console.log("pause_envir_img:true");
}
// function resume_envir() to change pause_envir value to false
function resume_envir() {
    pause_envir_img = false;
    // console.log("pause_envir:false"); 暂不启用
}

// By Chenx221