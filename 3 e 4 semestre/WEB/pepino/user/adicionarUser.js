import { users } from "../db/bancoinsano.js";

async function adicionarUser(req, res) {
  const { nome, cpf, email, senha } = req.body;
  const novoUser = {
    id: users.length + 1,
    nome,
    cpf,
    email,
    senha,
  };
  users.push(novoUser);
  res.status(201).json(novoUser);
}

export { adicionarUser };