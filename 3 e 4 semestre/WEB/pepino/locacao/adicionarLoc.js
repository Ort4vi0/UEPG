import { locacao } from "../db/bancoinsano.js";

async function adicionarLoc(req, res) {
  const { id_user, id_livro, status } = req.body;
  const novoLoc = {
    id: locacao.length + 1,
    id_user,
    id_livro,
    status,
  };
  locacoes.push(novoLoc);
  res.status(201).json(novoLoc);
}

export { adicionarLoc };