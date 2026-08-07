import { users } from "../db/bancoinsano.js";

async function atualizarUser(req, res) {
  const { id } = req.params;
  const dados = req.body?.user || req.body;
  if (!dados || Object.keys(dados).length === 0) {
    return res.status(400).json({ message: 'Dados do usuário não fornecidos' });
  }
  const index = users.findIndex((u) => u.id === parseInt(id));
  if (index === -1) {
    return res.status(404).json({ message: 'Usuário não encontrado' });
  }
  users[index] = { ...users[index], ...dados };
  res.json(users[index]);
}

export { atualizarUser };