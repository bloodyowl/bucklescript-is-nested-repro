# Basic Reason Template

Hello! This project allows you to quickly get started with Reason and BuckleScript. If you wanted a more sophisticated version, try the `react` template (`bsb -theme react -init .`).

# Build
```
npm run build
```

# Build + Watch

```
npm run start
npm run server
```

And go to http://localhost:8000/src


You can comment the:

```reason
switch (iframe) {
| Some(iframe) => Js.log(contentWindow(iframe))
| None => ()
};
```

to see the second error.

Both use `Caml_option.some`, the second example is just here to show that it's not only an issue with `@bs.return nullable`

# Editor
If you use `vscode`, Press `Windows + Shift + B` it will build automatically
