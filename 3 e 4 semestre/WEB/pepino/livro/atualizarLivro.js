import { livros } from "../db/bancoinsano.js";

async function atualizarLivro(req, res) {
  const { id } = req.params;
  const dados = req.body?.livro || req.body;
  if (!dados || Object.keys(dados).length === 0) {
    return res.status(400).json({ message: 'Dados do livro não fornecidos' });
  }
  const index = livros.findIndex((item) => item.id === parseInt(id));
  if (index === -1) {
    return res.status(404).json({ message: 'Livro não encontrado' });
  }
  livros[index] = { ...livros[index], ...dados };
  res.json(livros[index]);
}

export { atualizarLivro };