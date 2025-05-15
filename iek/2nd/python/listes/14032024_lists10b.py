import tkinter as tk
from tkinter import simpledialog, messagebox

def calculate_final_grade():
    # Λήψη βαθμών από το χρήστη και υπολογισμός του τελικού βαθμού
    grades = []
    for i in range(16):
        grade = simpledialog.askinteger("Βαθμολογία", f"Δώσε τον {i+1}ο βαθμό:")
        grades.append(grade)
    grades.sort(reverse=True)
    final_grade = sum(grades[:5]) / 5
    return final_grade

def submit_candidate():
    # Υποβολή νέου υποψηφίου και ενημέρωση της λίστας
    candidate_name = candidate_name_entry.get()
    if candidate_name == "ΤΕΛΟΣ":
        # Εμφάνιση του υποψηφίου με τον μεγαλύτερο τελικό βαθμό
        if candidates:
            top_candidate = max(candidates, key=candidates.get)
            messagebox.showinfo("Αποτελέσματα", f"Υποψήφιος με τον μεγαλύτερο βαθμό: {top_candidate} με βαθμό: {candidates[top_candidate]}")
        else:
            messagebox.showwarning("Προειδοποίηση", "Δεν υπάρχουν υποψήφιοι.")
        root.destroy()
    else:
        final_grade = calculate_final_grade()
        candidates[candidate_name] = final_grade
        messagebox.showinfo("Υποβολή Επιτυχής", f"Ο τελικός βαθμός του {candidate_name} είναι {final_grade}")
        candidate_name_entry.delete(0, tk.END)

# Δημιουργία της βασικής διεπαφής
root = tk.Tk()
root.title("Επιλογή Ιατρικής Ομάδας")

candidates = {}

# Πεδίο για την εισαγωγή του ονόματος του υποψηφίου
candidate_name_entry = tk.Entry(root)
candidate_name_entry.pack()

# Κουμπί για την υποβολή του υποψηφίου
submit_btn = tk.Button(root, text="Υποβολή Υποψηφίου", command=submit_candidate)
submit_btn.pack()

root.mainloop()
