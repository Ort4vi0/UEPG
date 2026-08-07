import express from 'express';
import router from './route.js';

const app = express();
const port = 3000;

app.use(express.json());
app.use(express.urlencoded({ extended: true }));

app.use('/bib', router);

app.listen(port, () => {
  console.log(`Servidor rodando em http://localhost:${port}`);
});