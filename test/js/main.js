var he = 11;
mid=(he+1)/2;//6
var n;
for (var line = 1; line <= he; line++) {
    var temp=line;
    if(line>mid){
        temp=mid*2-line;//将后半部分当作前半部分完成
    }
    for(n=1;n<=mid-temp;n++){
        document.write("&nbsp;&nbsp;");
    }
    for(n=1;n<=temp*2-1;n++){
        document.write("*");
    }
    document.write("<br>");
}

function bt_click(){
    alert("按钮被点击");
}
