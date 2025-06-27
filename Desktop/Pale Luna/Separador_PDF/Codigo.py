from PyPDF2 import PdfReader, PdfWriter

# Carregar o arquivo PDF
reader = PdfReader("Separador_PDF/SimuladosGIGI.pdf")
writer = PdfWriter()

# Definir o intervalo de páginas que você deseja (páginas 5 a 40, indexadas de 4 a 39)
for page_num in range(4, 40):  # A página 5 está na posição 4 e a 40 na posição 39
    writer.add_page(reader.pages[page_num])

# Salvar o novo PDF com as páginas extraídas
with open("Simulado01.pdf", "wb") as output_pdf:
    writer.write(output_pdf)

print("PDF com as páginas 5 a 40 gerado com sucesso!")
