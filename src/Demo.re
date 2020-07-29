open Webapi.Dom;

let iframe = Document.querySelector("#iframe", document);

[@bs.return nullable] [@bs.get]
external contentWindow: Element.t => option(Window.t_window) =
  "contentWindow";

// First error kind
switch (iframe) {
| Some(iframe) => Js.log(contentWindow(iframe))
| None => ()
};

[@bs.get]
external contentWindow2: Element.t => Window.t_window = "contentWindow";

let maybeDoSomethingWithWindow = (~window=?, ()) => {
  Js.log(window);
};

// Second error kind
switch (iframe) {
| Some(iframe) =>
  maybeDoSomethingWithWindow(~window=contentWindow2(iframe), ())
| None => ()
};
