import { users } from "../db/bancoinsano.js";

async function deleteUser(req, res) {
    const { id } = req.params;
    const index = users.findIndex((user) => user.id === parseInt(id));
    if (index === -1) {
        return res.status(404).json({ message: 'Usuário não encontrado' });
    }
    users.splice(index, 1);
    res.json({ message: 'Usuário deletado com sucesso' });
}

export { deleteUser };