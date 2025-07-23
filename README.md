# Computer Setup

**Automates the installation and configuration of essential Windows software via a USB runner.**

---

## 📋 Overview

This tool provides a user-friendly, console‐based setup for Windows machines. It:

* Elevates itself to administrator (UAC) and relaunches if necessary.
* Displays ASCII art branding in bold green.
* Reads a global `Software_List` (name, download URL, silent flags) from `Constants.h`.
* Checks if each app is already installed via registry (`Software_Checker`).
* Prompts the user to include/exclude each missing application.
* Downloads installers (URLDownloadToFile), skipping cached files.
* Runs each installer silently (`Installer::install`) with preconfigured flags.
* Logs every step with colored levels (INFO, ERROR, WARN).

## ⚙️ Prerequisites

* **Windows 10 or later** (32‑bit or 64‑bit).
* **Visual Studio 2022** with C++ workload.
* **Administrator** privileges for UAC elevation.
* Internet access to download installers.

## 🛠️ Build Instructions

1. Clone the repo:

    ```bash
    git clone [https://github.com/yourusername/computer-setup.git](https://github.com/Sinless777/Computer-Setup.git)
    ```
2. Open the solution in Visual Studio 2022.
3. Ensure all `.cpp` files are included under **Source Files**.
4. Build in **x64** or **x86** Debug/Release.


## 🚀 Usage

Run the compiled `Computer Setup.exe` (or debug via Visual Studio):

1. The tool will UAC‑prompt and relaunch elevated.
2. Navigate the menu with **1–3**:
- **1**: Edit `Constants.h` to modify `Software_List`.
- **2**: Download & install selected software.
- **3**: Exit.
3. For option **2**, answer (Y/N) per application. Default installers run silently.
4. Logs remain on‐screen for copy/paste; console only clears before showing the menu.


## 🛠 Configuration

- **`Constants.h`**
- Modify the `Software_List` vector to add or remove apps.
- Each entry: `{ name, URL, silentFlags }`.

- **`Installer.h/.cpp`**
- Customize silent installation commands per application.

- **`Helper.h/.cpp`**
- Utility functions for file I/O, console styling, UAC elevation, etc.


## 📝 License

Unless otherwise noted, this project is licensed under the **MIT License**. See [LICENSE](LICENSE) for details.

---

*Happy setting up!*

```
