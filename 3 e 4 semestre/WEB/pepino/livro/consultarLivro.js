import { livros } from "../db/bancoinsano.js";

async function consultarLivro(req, res) {
  const { id } = req.params;
  const livro = livros.find((livro) => livro.id === parseInt(id));
  if (!livro) {
    return res.status(404).json({ message: 'Livro não encontrado' });
  }
  res.json(livro);
}

async function consultarLivros(req, res) {
  if (livros.length === 0) {
    return res.status(404).json({ message: 'Nenhum livro encontrado' });
  }
  res.json(livros);
}

export { consultarLivro, consultarLivros };