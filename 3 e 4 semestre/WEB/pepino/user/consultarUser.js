import { users } from "../db/bancoinsano.js";

async function consultarUser(req, res) {
  const { id } = req.params;
  const user = users.find((user) => user.id === parseInt(id));
  if (!user) {
    return res.status(404).json({ message: 'Usuário não encontrado' });
  }
  res.json(user);
}

async function consultarUsers(req, res) {
  res.json(users);
}

export { consultarUser, consultarUsers };