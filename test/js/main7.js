function clickbtn() {
    window.open("https://www.google.com/");
    location.href = "https://work.iloli.one/";
}
function show() {
    alert("Hello World");
}
setTimeout(show, 5000);
function clickkeyboard(key) {
    console.log(key.value);
    document.getElementsByClassName("kb_display")[0].innerHTML = key.value;
}