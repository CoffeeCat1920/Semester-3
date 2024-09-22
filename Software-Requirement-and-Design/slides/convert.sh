#!/bin/bash

# Create a folder for the output PDFs
mkdir -p pdfs

# Loop through all .ppt and .pptx files in the current directory
for file in *.ppt *.pptx; do
  if [ -f "$file" ]; then
    # Convert each file to PDF using LibreOffice
    libreoffice --headless --convert-to pdf "$file"
    echo "Converted $file to PDF."
    
    # Move the converted PDF to the pdfs folder
    mv "${file%.*}.pdf" pdfs/
  fi
done
