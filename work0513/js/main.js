//20220513 By Chenx221
//实现年龄拖条数值的实时预览
function age_change(){
    var age = document.getElementById("age").value;
    document.getElementById("age_output").innerHTML = age;
}
//文本靠右
var test1 =document.getElementById("reg_content1");
for(var i=test1.getElementsByTagName("span").length-1;i>=0;i--){
    test1.getElementsByTagName("span")[i].parentElement.style.textAlign="right";
}
var test2 =document.getElementById("reg_content2");
for(var i=test2.getElementsByTagName("span").length-1;i>=0;i--){
    test2.getElementsByTagName("span")[i].parentElement.style.textAlign="right";
}

