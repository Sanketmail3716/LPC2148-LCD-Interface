# LPC2148 LCD 16x2 Interface using 4-bit Mode

This project demonstrates how to interface a 16x2 character LCD with the LPC2148 ARM7 microcontroller using 4-bit communication. It displays a single character `'A'` on the first line and the name `"Sanket Mali"` on the second line.

## 🔧 Features

- ARM7 LPC2148 microcontroller
- LCD 16x2 interfacing in 4-bit mode
- Displays custom messages on both LCD lines
- Simple delay function using nested loops

## 📁 Project Structure

Lcd_4bit_with_Files/
├── main.c
├── Lcd_4bit.h
├── Lcd_4bit.c
└── README.md


## ⚙️ How It Works

- `main.c` initializes the LCD and continuously displays:
  - `'A'` on the first line
  - `"Sanket Mali"` on the second line
- LCD is driven in 4-bit mode to reduce GPIO usage

## 🖥️ LCD Pin Mapping (Example)

| LCD Pin | Function         | LPC2148 GPIO |
|---------|------------------|--------------|
| RS      | Register Select  | P0.0         |
| EN      | Enable           | P0.1         |
| D4-D7   | Data Lines       | P0.2 - P0.5  |
| RW      | Read/Write       | GND (Write only) |

You can update `Lcd_4bit.h` to match your actual pin configuration.

## 🧪 Testing

To test this project:
1. Open the code in Keil uVision.
2. Connect LCD to the correct GPIO pins.
3. Flash the code to LPC2148 using ISP or JTAG.
4. Power the board and observe LCD output.

## 📚 Requirements

- LPC2148 ARM7 Board
- 16x2 Alphanumeric LCD
- Keil uVision
- Flashing tool (e.g., Flash Magic or USB-UART)

## 🧑‍💻 Author

**Sanket Mali**  
ARM7 & Embedded Systems Developer

## 📜 License

This project is open-source and free to use under the MIT License.
