[@bs.module "react-native"] external view : ReasonReact.reactClass = "Switch";

let make =
    (
      ~disabled: option(bool)=?,
      ~onTintColor: option(string)=?,
      ~onValueChange: option(bool => unit)=?,
      ~thumbTintColor: option(string)=?,
      ~tintColor: option(string)=?,
      ~value: option(bool)=?,
      ~accessibilityLabel=?,
      ~accessible=?,
      ~hitSlop=?,
      ~onAccessibilityTap=?,
      ~onLayout=?,
      ~onMagicTap=?,
      ~responderHandlers=?,
      ~pointerEvents=?,
      ~removeClippedSubviews=?,
      ~style=?,
      ~testID=?,
      ~accessibilityComponentType=?,
      ~accessibilityLiveRegion=?,
      ~collapsable=?,
      ~importantForAccessibility=?,
      ~needsOffscreenAlphaCompositing=?,
      ~renderToHardwareTextureAndroid=?,
      ~accessibilityTraits=?,
      ~accessibilityViewIsModal=?,
      ~shouldRasterizeIOS=?
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=view,
    ~props=
      Props.extendView(
        Js.Undefined.(
          {
            "value": fromOption(UtilsRN.optBoolToOptJsBoolean(value)),
            "disabled": fromOption(UtilsRN.optBoolToOptJsBoolean(disabled)),
            "onValueChange": fromOption(onValueChange),
            "onTintColor": fromOption(onTintColor),
            "thumbTintColor": fromOption(thumbTintColor),
            "tintColor": fromOption(tintColor)
          }
        ),
        ~accessibilityLabel?,
        ~accessible?,
        ~hitSlop?,
        ~onAccessibilityTap?,
        ~onLayout?,
        ~onMagicTap?,
        ~responderHandlers?,
        ~pointerEvents?,
        ~removeClippedSubviews?,
        ~style?,
        ~testID?,
        ~accessibilityComponentType?,
        ~accessibilityLiveRegion?,
        ~collapsable?,
        ~importantForAccessibility?,
        ~needsOffscreenAlphaCompositing?,
        ~renderToHardwareTextureAndroid?,
        ~accessibilityTraits?,
        ~accessibilityViewIsModal?,
        ~shouldRasterizeIOS?
      )
  );
