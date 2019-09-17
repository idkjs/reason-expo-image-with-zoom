open ReactNative;

let styles =
  Style.(
    StyleSheet.create({
      "container": style(~flex=1., ()),
      "content":
        style(~flex=1., ~justifyContent=`center, ~alignItems=`center, ()),
      "image": style(~width=400.->dp, ~height=400.->dp, ()),
    })
  );
  /** container to hold our images */
[@react.component]
let app = () => {
  <ScrollView
    style=styles##container
    contentContainerStyle=styles##content
    maximumZoomScale=9.
    minimumZoomScale=1.>
    <ImageWithZoom size=200/>
    <ImageWithZoom size=50/>
  </ScrollView>;
};