open ReactNative;
/** https://github.com/browniefed/KenWheelerReasonZoom/blob/master/re/root.re */
let styles =
  Style.(
    StyleSheet.create({
      "container": style(~flex=1., ()),
      "content":
        style(~flex=1., ~justifyContent=`center, ~alignItems=`center, ()),
      "image": style(~width=400.->dp, ~height=400.->dp, ()),
    })
  );
[@react.component]
let app = () => {
  <ScrollView
    style=styles##container
    contentContainerStyle=styles##content
    maximumZoomScale=9.
    minimumZoomScale=1.>
    <Image
      style=styles##image
      source={Image.Source.fromUriSource(
        Image.uriSource(
          ~uri=
            "https://picsum.photos/400/400",
          (),
        ),
      )}
    />
  </ScrollView>;
};