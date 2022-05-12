// BY Chenx221(chenx221@yandex.com)
// Last-Modified:2022/5/12

// 设置购票区域奇偶行背景色 放在body尾部防止出错
for (var i = 1; i <= 4; i++) {
    var tb = document.getElementsByClassName("ticket_content")[i - 1];
    if (i % 2 != 0) {
        tb.setAttribute("style", "background-color: #ffe8c8");
        // tb.style.backgroundColor = "#ffe8c8";
    }
    else {
        tb.style.backgroundColor = "#fff5e6";
        // document.getElementsByClassName("ticket_content")[i].style.backgroundColor = "#fff5e6";
    }
}
// BY Chenx221(chenx221@yandex.com)