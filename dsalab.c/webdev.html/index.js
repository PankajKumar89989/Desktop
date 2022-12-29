let inputField =document.getElementById('inputField');
let toDoContainer =document.getElementById('toDoContainer');
let addToDo =document.getElementById('addToDo');

addToDo.addEventListener('click',function(){
    var paragraph = document.createElement('p');
    paragraph.innerText = inputField.value;

    toDoContainer.appendChild(paragraph);
    console.log(toDoContainer)

    inputField.value = '';
    paragraph.addEventListener('click', function(){
        paragraph.style.textDecoration = 'line-through';
    })
    paragraph.addEventListener('dblclick', function(){
        paragraph.style.textDecoration = 'line-through';
    })
})