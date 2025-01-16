# Последовательности комплексных чисел
***Определение***:
Определение последовательности комплексных чисел аналогично определению последовательности действительных чисел
$\{z_{n}\}, z_{n} \in \mathbb{C}$ связанные последовательности действительных чисел
$\{Rez_{n}\}=\{x_{n}\}, \space \{{\mathrm{Im}}z_{n}\}=\{y_{n}\}, \space \{|z_{n}|\}, {Argz_{n}}$

Определение предела последовательности не изменяется
$$
\lim_{ n \to \infty } z_{n} = A, \text{ Если } \forall \epsilon > 0 \space \exists n_{\epsilon} \in \mathbb{N}: \forall n \geq n_{\epsilon} \text{ выполняется } |z_{n}-a| < \epsilon
$$
---
<u>Теорема</u> (о связи сходимости $\{z_{n}\}$ со сходимостью $\{\mathrm{Re}z_{n}\}, \{\mathrm{Im}z_{n}\}$) ($\mathrm{Re}z_{n}=x_{n}, \mathrm{Im}z_{n}=y_{n}$):
$$
\exists \lim_{ n \to \infty } z_{n} = A = \alpha + i\beta \Leftrightarrow \left\{\begin{array}{l}
\exists \lim_{ n \to \infty } x_{n} = \alpha \\
\exists \lim_{ n \to \infty } y_{n} = \beta
\end{array} \right.
$$
***Доказательство***:
$$
\begin{gathered}
\text{а) } \exists \lim_{ n \to \infty } z_{n} = \alpha + i \beta \implies \forall \epsilon > 0 \space \exists n_{\epsilon} \in \mathbb{N} \space \forall n \geq n_{\epsilon} \text{ выполняется } |z_{n}-(\alpha + i \beta)| < \epsilon \Leftrightarrow \\
\Leftrightarrow |(x_{n}-\alpha) + i(y_{n}-\beta)| < \epsilon \\
|x_{n}-\alpha| \leq |(x_{n}-\alpha)+i(y_{n}-\beta)| = \sqrt{ (x_{n} - \alpha)^2 + (y_{n} - \beta)^2 } \\
\text{И } |y_{n}-\beta| \leq |(x_{n}-\alpha)+i(y_{n}-\beta)| \\
\implies  \forall \epsilon > 0 \space \exists n_{\epsilon} \in \mathbb{N}: \forall n \geq n_{\epsilon} \text{ выполняется} \\
\left.\begin{array}{l}
|x_{n}-\alpha|<\epsilon \\
|y_{n}-\beta|<\epsilon
\end{array}\right| \implies \begin{array}
\exists \lim_{ n \to \infty } x_{n} = \alpha \\
\exists \lim_{ n \to \infty } y_{n} = \beta
\end{array} \\
\text{б) Пусть } \exists \lim_{ n \to \infty } x_{n} = \alpha \text{ и } \exists \lim_{ n \to \infty } y_{n = \beta} \implies^{\text{(по определению)}} \space \forall \epsilon > 0  \begin{array}
\exists n_{1} \in \mathbb{N} \\
\exists n_{2} \in \mathbb{N}
\end{array} \\
\forall n_{1} \text{ выполняется } |x_{n}-\alpha| < \epsilon \\
\forall n_{2} \text{ выполняется } |y_{n}-\beta| < \epsilon \\
\text{Тогда } \forall n \geq n_{3}: \space n_{3}=max(n_{1}, n_{2}) - \text{оба неравенства выполняются} \\
\text{Рассмотрим } |z_{n}-A| = \sqrt{ (x_{n} - \alpha)^2 + (y_{n}-\beta)^2 }  \space \space \space ^{\forall n \geq n_{3}} < \epsilon \sqrt{ 2 } = \epsilon^* \\
\implies \forall \epsilon^* > 0 \space \exists n_{\epsilon^*} = n_{3} \in \mathbb{N}: \space \forall n \geq n_{\epsilon^*} \text{ выполняется } |z_{n}-A| < \epsilon \\
\end{gathered}
$$
---
<u>Теорема</u> (о связи сходимости $\{z_{n}\}$ и $\{|z_{n}|\}$):
$$
\text{Если } \exists \lim_{ n \to \infty } z_{n} = A \implies \exists \lim_{ n \to \infty } |z_{n}| = |A|
$$
***Доказательство***:
$$
\begin{gathered}
\exists \lim_{ n \to \infty } z_{n} = A \implies \forall \epsilon > 0 \space \exists n_{\epsilon} \in \mathbb{N}: \forall n \geq n_{\epsilon} \text{ выполняется } \\
||z_{n}|-|A|| ^\triangle\leq |z_{n} - A| < \epsilon \implies \lim_{ n \to \infty } |z_{n}| = |A|
\end{gathered}
$$
---
<u>Замечание</u>:
Без дополнительных условий для последовательности $Argz_{n}$ такой же вывод неверен
![[График 1]]
$$
\begin{gathered}
z_{n} = (-1)^n - \frac{i}{n} \to_{n \to \infty} 0 \\
Arg z_{2k} = \frac{\pi}{2} \to_{n \to \infty} \frac{\pi}{2} \\
Arg z_{2k+1} = - \frac{\pi}{2} \to_{n \to \infty} -\frac{\pi}{2} \\
argz_{n} - \text{не сходится}
\end{gathered}
$$
---
<u>Замечание</u>:
Без изменения остаётся справедливость свойств сходящихся последовательностей, за исключением 3-его, 6-го и 7-ого свойств, отсутствуют понятия верхнего и нижнего пределов, критерий Коши остаётся неизменным

# Последовательности векторов $\mathbb{R}^m$
***Определение***:
Последовательность векторов пространства $R_m$ также определяется аналогично и также с ней связаны последовательности компонент-векторов
$$
\begin{gathered}
\{u_{n}\}, u_{n} \in R^m \space \space \space \space U_{n} = (U^{(1)}_{n}, U^{(2)}_{n}, \dots, U^{(m)}_{n}) \\
\{u_{n}^{(k)}\} = k = \overline{1, m}
\end{gathered}
$$
---
<u>Теорема</u> (о связи сходимости $\{u_{n}\}$ со сходимостью $\{u_{n}^{(k)}\}$)
$$
\begin{gathered}
\lim_{ n \to \infty } U_{n} = A \space \space \space \space (A=(A_{1}, \dots, A_{m})) \\
\forall k = \overline{1, m} \space \space \space \space \forall \lim_{ n \to \infty } u_{m}^{(k)} = A_{k}
\end{gathered}
$$
*Доказательство*:
$$
\begin{gathered}

\end{gathered}
$$
---
<u>Замечание</u>:
Свойства остаются справедливыми, за исключением тех, что связаны с операциями сравнения $(>, <)$ и деления
