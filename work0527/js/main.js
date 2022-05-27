// By Chenx221
//sort_item项目填充
var sort_items = ["JavaEE", "Android", "PHP", "UI", "iOS", "前端与移动开发", "C/C++", "网络营销", "Python", "云计算值大数据"];
var add_txt = "培训";

document.getElementById("sort_tb").innerHTML = "<tr><td>" + sort_items[sort_items.length - 1] + add_txt + "</td><td>></td></tr>" + document.getElementById("sort_tb").innerHTML;
for (var i = sort_items.length - 2; i >= 0; i--) {
    document.getElementById("sort_tb").getElementsByTagName("tbody")[0].innerHTML = "<tr><td>" + sort_items[i] + add_txt + "</td><td>></td></tr>" + document.getElementById("sort_tb").getElementsByTagName("tbody")[0].innerHTML;
}

for (var i = 0; i < sort_items.length; i++) {
    if ((i + 1) % 2 == 1) {
        document.getElementById("sort_tb").getElementsByTagName("tr")[i].style.backgroundColor = "#0572b6";
    }
    else {
        document.getElementById("sort_tb").getElementsByTagName("tr")[i].style.backgroundColor = "#055c92";
    }
}
//调整距离
var max_num = document.getElementById("sort_tb").getElementsByTagName("td").length;
for (var i = 1; i <= max_num / 2; i++) {
    document.getElementById("sort_tb").getElementsByTagName("td")[i * 2 - 1].style.paddingRight = "35px";
    document.getElementById("sort_tb").getElementsByTagName("td")[i * 2 - 2].style.paddingLeft = "30px";
}

//填充link_item项目
for (var i = 1; i <= 4; i++) {
    document.getElementsByClassName("link_item")[i - 1].style.background = "url(img/tu0" + i + ".jpg) no-repeat";
    document.getElementsByClassName("guanggao_item")[i - 1].getElementsByTagName("img")[0].src = "img/tu0" + (i + 4) + ".jpg";
    if (i == 1) {
        document.getElementsByClassName("link_item")[i - 1].style.marginLeft = "1px";
        document.getElementsByClassName("guanggao_item")[i - 1].style.marginLeft = "1px";
    }
    else {
        document.getElementsByClassName("link_item")[i - 1].style.marginLeft = "10px";
        document.getElementsByClassName("guanggao_item")[i - 1].style.marginLeft = "10px";
    }
}
// By Chenx221