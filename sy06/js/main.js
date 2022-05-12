// BY Chenx221(chenx221@yandex.com)
// Last-Modified:2022/5/12

// 个人中心的二级菜单的显示与隐藏
function usermenu(e1, e2) {
    if (e2 == "show") {
        e1.style.display = "block";
    }
    else {
        e1.style.display = "none";
    }
}
function show_usermenu(obj) {
    var obj_child = obj.getElementsByClassName("usermenu")[0];
    usermenu(obj_child, "show");

    obj.style.backgroundColor = "white";
    obj.style.border = "1px solid #f1f1f1";

    obj_child.style.border = "1px solid #f1f1f1";
    obj_child.style.backgroundColor = "white";
    obj_child.style.position = "absolute";

}
function hide_usermenu(obj) {
    var obj_child = obj.getElementsByClassName("usermenu")[0];
    usermenu(obj_child, "hidden");

    obj.style.backgroundColor = "";
}
// BY Chenx221(chenx221@yandex.com)
