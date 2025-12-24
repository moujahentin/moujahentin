// Collapsible για CV ή άλλες περιοχές
var coll = document.getElementsByClassName("collapsible");
var i;

for (i = 0; i < coll.length; i++) {
  coll[i].addEventListener("click", function() {
    this.classList.toggle("active");
    var content = this.nextElementSibling;
    if (content.style.display === "block") {
      content.style.display = "none";
    } else {
      content.style.display = "block";
    }
  });
} 

// Dropdown menu
function myFunction() {
  document.getElementById("myDropdown").classList.toggle("show");
}

window.onclick = function(event) {
  if (!event.target.matches('.dropbtn')) {
    var dropdowns = document.getElementsByClassName("dropdown-content");
    for (var i = 0; i < dropdowns.length; i++) {
      var openDropdown = dropdowns[i];
      if (openDropdown.classList.contains('show')) {
        openDropdown.classList.remove('show');
      }
    }
  }
}

var dropbtn = document.querySelector('.dropbtn');
if(dropbtn) {
  dropbtn.addEventListener('click', myFunction);
}

// Lessons Filter
async function loadLessons() {
  try {
    const semPromise = await fetch("../lessons.json");
    const sems = await semPromise.json();

    const template = document.querySelector("#lessons-card");
    const wrapper = document.createElement("div");

    function decideAgeText(age) {
      if (!age) return "Less than a year old";
      return age > 1 ? `${age} years old` : "1 year old";
    }

    sems.forEach(sem => {
      const clone = template.content.cloneNode(true);
      clone.querySelector("h3").textContent = sem.name;

      const img = clone.querySelector("img");
      img.src = sem.photo;
      img.alt = `${sem.Semester} ${sem.name}`;

      const age = new Date().getFullYear() - sem.created;
      clone.querySelector(".age").textContent = decideAgeText(age);

      clone.querySelector(".Semester").textContent = sem.Semester;
      clone.querySelector(".description").textContent = sem.description;
      clone.querySelector(".name").textContent = sem.name;
      clone.querySelector(".primary-btn").href = `https://github.com/moujahentin/moujahentin/tree/main/iek/${sem.Semester}/${sem.id}/`;

      wrapper.appendChild(clone);
    });

    document.querySelector(".semesters").appendChild(wrapper);

    const filterButtons = document.querySelectorAll(".filter-nav a");
    filterButtons.forEach(el => el.addEventListener("click", handleFilterClick));

    function handleFilterClick(e) {
      let target = e.target;

      if (e.target.classList.contains("only-large-screen")) {
        target = e.target.closest("a");
      }

      e.preventDefault();
      filterButtons.forEach(el => el.classList.remove("active"));
      target.classList.add("active");

      filterSemester(target.dataset.filter);
    }

    function filterSemester(Semester) {
      const allSemest = document.querySelectorAll(".lessons-card");
      if (Semester === "all") {
        allSemest.forEach(el => (el.style.display = ""));
      } else {
        allSemest.forEach(el => {
          el.style.display = el.querySelector(".Semester").textContent === Semester ? "" : "none";
        });
      }
    }

  } catch (error) {
    console.error("Failed to load lessons.json:", error);
  }
}

// Εκκίνηση μόνο αν υπάρχει το container
if(document.querySelector(".semesters")) {
  loadLessons();
}
