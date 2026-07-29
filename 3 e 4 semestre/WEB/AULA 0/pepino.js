import contatos from './db.js';
import express from 'express';

const app = express();
const port = 3000;

app.use(express.json());

app.get('/contatos', (req, res) => {
  res.json(contatos);
});

app.get("/:id", (req, res) => {
  const id = parseInt(req.params.id);
  const contato = contatos.find(c => c.id === id);
  if (!contato) 
    res.status(404).json({ error: "Contato não encontrado" }); return
    res.status(200).json(contato);
});

app.post('/contatos', (req, res) => {
  const { nome, email, telefone } = req.body;
  const novoContato = {
    id: contatos.length + 1,
    nome,
    email,
    telefone,
  };
  contatos.push(novoContato);
  res.status(201).json(novoContato);
});

app.delete('/:id', (req, res) => {
  const id = parseInt(req.params.id);
  const index = contatos.findIndex(c => c.id === id);
  if (index === -1) {
    res.status(404).json({ error: "Contato não encontrado" });
  } else {
    contatos.splice(index, 1);
    res.status(204).send();
  }
});

app.listen(port, () => {
  console.log(`Servidor rodando em http://localhost:${port}`);
});