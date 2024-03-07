const semPromise = await fetch("lessons.json")
const sems = await semPromise.json()

const template = document.querySelector("#lessons-card")
const wrapper = document.createElement("div")

function decideAgeText(age){
if(!age){
  return "Less than a year old(kala pou to eide o filippos)"
}

return age> 1 ? `${age} years old` : "1 year old"
}

sems.forEach(sem => {
  const clone = template.content.cloneNode(true)
  clone.querySelector("h3").textContent = sem.name

  const img = clone.querySelector("img")
  img.src = sem.photo
  img.alt = `${sem.Semester} ${sem.name}`

  const age = new Date().getFullYear() - sem.created 
  const ageText = decideAgeText(age)
  clone.querySelector(".age").textContent = ageText

  clone.querySelector(".Semester").textContent = sem.Semester
  clone.querySelector(".description").textContent = sem.description
  clone.querySelector(".name").textContent = sem.name
  clone.querySelector(".primary-btn").href = `/manilas/${sem.id}/`
 
  wrapper.appendChild(clone)
  })  

document.querySelector(".semesters").appendChild(wrapper)

const filterButtons = document.querySelectorAll(".filter-nav a")
filterButtons.forEach(el =>{
el.addEventListener("click", handleFilterClick)

})

function handleFilterClick(e){
  let target = e.target 

  if(e.target.classList.contains("only-large-screen")){
    target = e.target.closest("a")
  }

  e.preventDefault()
   filterButtons.forEach(el => {
    el.classList.remove("active")
})
    target.classList.add("active")

    filterSemest(target.dataset.filter)
}

function filterSemest(Semester){
const allSemest = document.querySelectorAll(".lessons-card")
if(Semester == "all"){
  allSemest.forEach(el => {
    el.style.display = ""
})
} else {
  allSemest.forEach(el => {
    if(el.querySelector(".Semester").textContent == Semester){
     el.style.display = ""
    } else { 
     el.style.display = "none" 
    }
  })
 } 
}
