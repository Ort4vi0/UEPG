import { livros } from "../db/bancoinsano.js";

async function adicionarLivro(req, res) {
  const { titulo, isbn, edicao, ano } = req.body;
  const novoLivro = {
    id: livros.length + 1,
    titulo,
    isbn,
    edicao,
    ano,
  };
  livros.push(novoLivro);
  res.status(201).json(novoLivro);
}

export { adicionarLivro };