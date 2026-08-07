import { locacao } from "../db/bancoinsano.js";

async function consultarLocs(req, res) {
  if (locacao.length ==0) {
    return res.status(404).json({ message: 'Nenhuma locação encontrada' });
  } 
  res.json(locacao);
}

export { consultarLocs };