# Riemann Integrator
<img width="396" height="290" alt="Down_Riemann" src="https://github.com/user-attachments/assets/0b6b4e2f-cb20-4c5e-be0a-940d15de6a00" />

A simple integrator using the rectangle approach of Riemann 
calculating the integral of a given real function, in our case we take the example of f(t) = 2t^2 -3t and using the [0;1] domain
We use f(a+k(b-a)/N) for the height and (b-a)/N for the length of the rectangle, we also treat the case were b < a, in that case we take the opposite value of the integral from b to a (instead of from a to b)
