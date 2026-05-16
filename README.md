
# MP3 Tag Reader and Editor

A command-line based MP3 Tag Reader and Editor developed in C for viewing and modifying ID3 metadata tags such as Title, Artist, Album, Year, Genre, and Comments without affecting the original audio data.

---

##  Features

* View MP3 metadata tags
* Edit ID3 tags safely
* Supports:

  * Title
  * Artist
  * Album
  * Year
  * Genre
  * Comment
* Binary file handling
* Endian conversion
* Preserves original MP3 audio data
* Temporary file handling for safe editing

---

##  Technologies Used

* C Programming
* File Handling
* Pointers
* Structures
* Dynamic Memory Allocation
* Bitwise Operations
* Binary File Processing

---

##  Project Structure

```text
├── main.c
├── view.c
├── edit.c
├── header.h
├── Sample.mp3
└── README.md
```

---

##  Compilation

Use GCC compiler:

```bash
gcc main.c view.c edit.c -o mp3_tag_editor
```

---

##  Execution

### View MP3 Tags

```bash
./mp3_tag_editor -v Sample.mp3
```

### Edit MP3 Tags

```bash
./mp3_tag_editor -e <option> <new_value> Sample.mp3
```

Example:

```bash
./mp3_tag_editor -e -t "New Song" Sample.mp3
```

---

##  Edit Options

| Option | Description  |
| ------ | ------------ |
| `-t`   | Edit Title   |
| `-a`   | Edit Artist  |
| `-A`   | Edit Album   |
| `-y`   | Edit Year    |
| `-c`   | Edit Comment |
| `-g`   | Edit Genre   |

---

##  Sample Output

### Viewing Tags

```text
TITLE   : Sample Song
ARTIST  : Unknown Artist
ALBUM   : Demo Album
YEAR    : 2025
GENRE   : Pop
COMMENT : Test File
```

---

##  Concepts Used

* ID3 Tag Parsing
* Metadata Frame Processing
* Endian Conversion
* File Copy Operations
* Dynamic Memory Allocation
* Command-Line Argument Handling

---

##  Future Improvements

* Support for all ID3 frames
* UTF-8 text support
* Album art extraction
* Better error handling
* Interactive menu interface
* Backup file creation

---

## 👨‍💻 Author

Bhuvaneshwaran

---

