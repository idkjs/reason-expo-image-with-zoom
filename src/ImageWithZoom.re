open ReactNative;

let styles =
  Style.(
    StyleSheet.create({
      "image": style(~width=400.->dp, ~height=400.->dp, ()),
    })
  );
  /**
   * Pass in an image size which is passed to the `uri` variable. Whatever the image size it will be scaled to the `width` and `height` defined in the `styles##image` property.
   * Each time this component is called, a diffent image from `https://picsum.photos/`is retrieved.
   */
[@react.component]
let make = (~size=?) => {
  <Image
    style=styles##image
    source={Image.Source.fromUriSource(
      Image.uriSource(~uri={j|https://picsum.photos/$size/$size|j}, ()),
    )}
  />;
};