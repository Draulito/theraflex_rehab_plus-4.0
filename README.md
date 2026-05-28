# TheraFlex EMG — Interfaz final

Versión con identidad visual basada en la interfaz propuesta:

- Nombre oficial: **TheraFlex EMG**.
- Sidebar oscuro + dashboard claro.
- 3 terapias.
- 2 modos por terapia: Arcade y Terapéutico.
- 3 niveles progresivos.
- Calibración, demo mouse, sensor EMG real, logros, dolor/fatiga, descanso y resumen.

## Arduino

El Arduino debe enviar valores numéricos por Serial a 9600 baudios.

```cpp
const int PIN_EMG = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valorEMG = analogRead(PIN_EMG);
  Serial.println(valorEMG);
  delay(10);
}
```

## GitHub Pages

Sube `index.html` a la raíz del repositorio y espera el despliegue.
