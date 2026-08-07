import { livros } from "../db/bancoinsano.js";

async function deleteLivro(req, res) {
    const { id } = req.params;
    const index = livros.findIndex((livro) => livro.id === parseInt(id));
    if (index === -1) {
        return res.status(404).json({ message: 'Livro não encontrado' });
    }
    livros.splice(index, 1);
    res.json({ message: 'Livro deletado com sucesso' });
}

export { deleteLivro };