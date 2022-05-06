// var login_state = 0;//0:未登录 1:已登录 未实现
var username1 = "admin";
var password1 = "admin";

document.write("默认用户名:admin");
document.write("默认密码:admin");

function login_event() {
    alert("登录中");
    if (document.getElementById("username").value == username1 && document.getElementById("password").value == password1) {
        alert("登录成功");
        document.getElementById("signout").disabled = 0;
        document.getElementById("login").disabled = 1;
        document.getElementById("username").disabled = 1;
        document.getElementById("remember").disabled = 1;
        document.getElementById("password").disabled = 1;
        document.getElementById("remember2").disabled = 1;
        document.getElementById("forget_change").value = "修改密码";
    }
    else {
        alert("密码错误");
        clear_username_password();
    }
}
function fc_event() {
    if (document.getElementById("forget_change").value == "修改密码") {
        document.getElementById("main").hidden = 1;
        change_password(document.getElementById("username").value, document.getElementById("password").value)
    }
    else if (document.getElementById("forget_change").value == "忘记密码") {
        alert("功能尚未实现，请联系管理员");
    }
}
function change_password(username, old_password) {
    document.getElementById("change").hidden = 0;
    document.getElementById("cusername").value = username;
    document.getElementById("old_password").value = old_password;
    document.getElementById("cusername").disabled=1;
}
function sb1() {
    if(new_password_check(document.getElementById("old_password").value,document.getElementById("new_password").value)){
        password1 = document.getElementById("new_password").value;
        alert("修改成功");
        document.getElementById("new_password").value="";
        document.getElementById("change").hidden = 1;
        document.getElementById("main").hidden = 0;
        signout_event();
        document.getElementById("password").value = "";
    }
}
function new_password_check(oldp,newp){
    if(oldp==''){
        alert("旧密码不能为空");
        document.getElementById("new_password").value="";
        return false;
    }
    else if(oldp==newp){
        alert("新密码与旧密码相同");
        document.getElementById("new_password").value="";
        return false;
    }
    else if(oldp!=password1){
        alert("旧密码错误");
        document.getElementById("old_password").value="";
        document.getElementById("new_password").value="";
        return false;
    }
    else if(newp==""){
        alert("新密码不能为空");
        return false;
    }
    else{
        return true;
    }

}
function bc1(){
    alert("密码没有改变");
    document.getElementById("change").hidden = 1;
    document.getElementById("main").hidden = 0;
}
function signout_event() {
    alert("退出中");
    document.getElementById("signout").disabled = 1;
    document.getElementById("login").disabled = 0;
    clear_username_password();
    document.getElementById("username").disabled = 0;
    document.getElementById("remember").disabled = 0;
    document.getElementById("password").disabled = 0;
    document.getElementById("remember2").disabled = 0;

}
function clear_username_password() {
    if (document.getElementById("remember").checked != 1) {
        document.getElementById("username").value = "";
    }
    if (document.getElementById("remember2").checked != 1) {
        document.getElementById("password").value = "";
    }
}
function rem_event() {
    if (document.getElementById("remember2").checked == 1) {
        document.getElementById("remember").checked = 1;
    }
}
function rem_event2() {
    if (document.getElementById("remember").checked == 0) {
        document.getElementById("remember2").checked = 0;
    }
}
function reg_event(){
    alert("还没做");
    document.getElementById("reg").disabled=1;
}