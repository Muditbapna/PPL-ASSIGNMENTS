(defun nth2 (n lst)
  (print lst)
  (if (zerop n)
    (car lst)
    (nth2 (1- n) (cdr lst))))
(print (nth2 2 '(1 3 5)))