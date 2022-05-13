function event1(){
    for(var i=1;i<=500;i++){
        var t=i+"px";
        setTimeout(move1(t), 5000);
    }
}
function move1(x){
    document.getElementById('shape').style.top = x;
}
// document.getElementById("shape").style.top = "60px";
// 未完成