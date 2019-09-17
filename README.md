# Zooms an image to size passed into component

## ImageWithZoom Module

Pass in an image size which is passed to the `uri` variable. Whatever the image size it will be scaled to the `width` and `height` defined in the `styles##image` property.
Each time this component is called, a diffent image from `https://picsum.photos/`is retrieved.

```reason
let styles =
  Style.(
    StyleSheet.create({
      "image": style(~width=400.->dp, ~height=400.->dp, ()),
    })
  );

[@react.component]
let make = (~size=?) => {
  <Image
    style=styles##image
    source={Image.Source.fromUriSource(
      Image.uriSource(~uri={j|https://picsum.photos/$size/$size|j}, ()),
    )}
  />;
};
```

## notetoself about generating `rei` file

Run `node_modules/bs-platform/lib/bsc -bs-re-out lib/bs/src/MyModule.cmi`;

This somehow get the program to not compile after adding the `rei` file. Need to get a better hold on that.

## Resources

[picsum.photos](ttps://picsum.photos)

[original repo](https://github.com/browniefed/KenWheelerReasonZoom/blob/master/re/root.re) via [@browniefed](https://twitter.com/browniefed)
