<h1 align = "left" id="NI">Numerical Integration in 1-Dimension</h1>
<p align = "center">
<img src="https://img.shields.io/badge/-Numerical Integration-blue.svg?style=for-the-badge&logoColor=white">
<img src="https://img.shields.io/badge/-Monte Carlo-blue.svg?style=for-the-badge&logoColor=white">
<img src="https://img.shields.io/badge/-Mid point-blue.svg?style=for-the-badge&logoColor=white">
<img src="https://img.shields.io/badge/-Trapezoidal-blue.svg?style=for-the-badge&logoColor=white">
<img src="https://img.shields.io/badge/-Simpson-blue.svg?style=for-the-badge&logoColor=white">
<img src="https://img.shields.io/badge/Language-C-blue.svg?style=for-the-badge&logoColor=white">
<img src="https://img.shields.io/badge/Language-Python-blue.svg?style=for-the-badge&logoColor=white">
</p>

<h2>Brief summary</h2>

<p>Integration is not only the fundamental concept of mathematics, but also an essential tool for science and engineering. Unlike derivatives, integrals are difficult and sometimes almost impossible to solve analytically. In such situations, definite integral can be calculated numerically. This repository contains <em>from-zero</em> implementation of popularly used methods of numerical integration for 1-dimension in <em>C & python</em>.</p>

Following are the abbreviations used in the formulas below:

| Abbreviation   | Expansion      |
|----------------------|:------------------------------------|
| <b>l<sub>i</sub></b> |Lower end of i<sup>th</sup> partition|
| <b>u<sub>i</sub></b> |Upper end of i<sup>th</sup> partition|
| <b>m<sub>i</sub></b> |Mid point of i<sup>th</sup> partition|
|<b>n</b>              |    Number of partitions|
|<b>h</b> = <b>u<sub>i</sub> - l<sub>i</sub></b>|    Width of i<sup>th</sup> partition | 

 

<h2>Mid-Point Integral</h2>
<p align = "center">
<img src="https://latex.codecogs.com/svg.latex?\large&space;I\approx\sum\limits_{i=1}^{n}h{f(m_i)}" title="Mid point integral" />
</p>

<h2>Simpson Integral</h2>
<ul>
<li>Simpson 1/3
<p align = "center">
<img src="https://latex.codecogs.com/svg.latex?\large&space;I\approx\sum\limits_{i=1}^{n}\frac{h}{6}{(f(l_i)+4f(m_i)+f(u_i))}" title="simpsin1/3" />
</p>
</li>

<li>Simple 3/8
<p align = "center">
<img src="https://latex.codecogs.com/svg.latex?\large&space;I\approx\sum\limits_{i=1}^{n}\frac{h}{8}{(f(l_i)+3f((2l_i+u_i)/3)+3f((l_i+2u_i)/3)+f(u_i))}" title="simpsin3/8" />
</p>
</li>
</ul>

<h2>Trapezoidal Integral</h2>
<p align = "center">
<img src="https://latex.codecogs.com/svg.latex?\large&space;I\approx\sum\limits_{i=1}^{n}\frac{h}{2}{(f(l_i)+f(u_i))}" title="Trapezoidal integral" />
</p>

<h2>Monte-Carlo Integral</h2>
<p align="center">
<img src="https://latex.codecogs.com/svg.latex?\large&space;I\approx<f(x)>(upperlimit-lowerlimit)" title="monte carlo integral" />
<br>
<img src="https://latex.codecogs.com/svg.latex?\large&space;<f(x)>\approx\frac{1}{N}\sum\limits_{i=1}^{N}f(r_i)" title="Average of the function" />
</p>
N = Number of iterations & r<sub>i</sub> ∈  [lowerlimit upperlimit[

<h2>Integrand</h2>
Integrand, function which has to integrated, must be <em>hard-wired</em> in the program. By default, these programs are wired for x^2, but in general they can be used to calculated other 1-dimensional definite integrals as well.

```c
double function(double x){
	return(x*x);
}
```

```python
function = lambda x : x**2

```
<h2>Usage</h2>
<ul>
<li>Step by step usage in <b>python</b>


<ol>
<li>Run the program

```bash
Linux@Linux:~$ python3 Midpoint.py
```
</li>

<li>
Enter the number of partitions

```bash
Linux@Linux:~$ python3 Midpoint.py
Linux@Linux:~$ Partitions : 

```
</li>


<li>
Enter the Lower limit

```bash
Linux@Linux:~$ python3 Midpoint.py
Linux@Linux:~$ Partitions : 10
Linux@Linux:~$ Lower limit :
```
</li>

<li>
Enter the upper limit 

```bash
Linux@Linux:~$ python3 Midpoint.py
Linux@Linux:~$ Partitions : 10
Linux@Linux:~$ Lower limit : 1
Linux@Linux:~$ Upper limit :
```

</li>

<li>

```bash
Linux@Linux:~$ python3 Midpoint.py
Linux@Linux:~$ Partitions : 10
Linux@Linux:~$ Lower limit : 1
Linux@Linux:~$ upper limit : 5
Linux@Linux:~$ Value : 41.28
```

</li>
</ol>


</li>

<li>Step by step usage in <b>C</b>

<ol>
<li>

Compiling the program

```bash
Linux@Linux:~$ g++ Mid-point.c
```
</li>

<li>
Run the object file

```bash
Linux@Linux:~$ ./a.out
```

</li>

<li>
Enter the number of partitions

```bash
Linux@Linux:~$ ./a.out
Linux@Linux:~$ Partitions :
```

</li>

<li>
Enter the Lower limit

```bash
Linux@Linux:~$ ./a.out
Linux@Linux:~$ Partitions : 10
Linux@Linux:~$ Lower limit : 1 
```
</li>

<li>
Enter the Upper limit

```bash
Linux@Linux:~$ ./a.out
Linux@Linux:~$ Partitions : 10
Linux@Linux:~$ Lower limit : 1 
Linux@Linux:~$ Upper limit : 
```
</li>


<li>

```bash
Linux@Linux:~$ ./a.out
Linux@Linux:~$ Partitions : 10
Linux@Linux:~$ Lower limit : 1
Linux@Linux:~$ Upper limit : 5
Linux@Linux:~$ Value : 41.280000
```
</li>




In the case of Monte-Carlo, iterations are provided instead of partitions and the rest remains the same.

<li>

```bash
Linux@Linux:~$ ./a.out
Linux@Linux:~$ Iterations : 100000
Linux@Linux:~$ Lower limit : 1
Linux@Linux:~$ Upper limit : 5
Linux@Linux:~$ Value : 41.450602
```
Due to inherent randomness in Monte-carlo, answer is bound to differ.
</li>
</li>
</ol>

<h2 id="Connect">Connect</h2>

<a href="https://twitter.com/hamiltonianaman" > <img src="https://img.shields.io/badge/Twitter-blue.svg?style=for-the-badge&logo=twitter&logoColor=white" title="twitter.com/hamiltonianaman"></a>
<a href="https://github.com/zoologistaman" > <img  src="https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white" title="github.com/zoologistaman"></a> 


<h2 id="License">License</h2>
Distributed under <a href="https://github.com/git/git-scm.com/blob/main/MIT-LICENSE.txt">MIT License</a>
