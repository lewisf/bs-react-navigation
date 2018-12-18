open BsReactNative;

module Styles = {
  open Style;

  let container =
    style([
      marginTop(Pt(50.0)),
      alignItems(Center),
      justifyContent(Center),
    ]);
};

let component = ReasonReact.statelessComponent("App");

let make =
    (~navigation: Config.navigationProp, ~text: string="Hi!", _children) => {
  ...component,
  render: _self =>
    <SafeAreaView>
      <View style=Styles.container>
        <Text> {ReasonReact.string(text)} </Text>
        <Button
          title="Go to details screen "
          onPress={() => navigation.push(UserDetails("Mike Grabowski"))}
        />
        <Button
          title="Go to Tab Navigator example"
          onPress={() => navigation.push(Config.TabNavigator)}
        />
      </View>
    </SafeAreaView>,
};