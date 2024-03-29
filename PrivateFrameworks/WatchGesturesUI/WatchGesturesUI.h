//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 114.2.2.0.0
//
#ifndef WatchGesturesUI_h
#define WatchGesturesUI_h

#import "WAGUIAutoreversingClientSideAnimation.h"
#import "WAGUIBSActionProxyClient.h"
#import "WAGUIBSActionProxyClientXPCConnection.h"
#import "WAGUIBSActionProxyServer.h"
#import "WAGUIBackdropView.h"
#import "WAGUIClientSideAnimation.h"
#import "WAGUICrownPressAction.h"
#import "WAGUIDebugGestureEventAction.h"
#import "WAGUIDebuggingFooterView.h"
#import "WAGUIDebuggingGesturesView.h"
#import "WAGUIDebuggingOverlayWindow.h"
#import "WAGUIDoublePinchInteraction.h"
#import "WAGUIDoublePinchNegativeInteraction.h"
#import "WAGUIDoublePinchViewInteraction.h"
#import "WAGUIDoublePinchViewInteractionConfiguration.h"
#import "WAGUIDroppedHIDEventManager.h"
#import "WAGUIGestureIndicatorView.h"
#import "WAGUIGestureInteraction.h"
#import "WAGUIGestureInteractionBarButtonItemHandler.h"
#import "WAGUIGestureInteractionCollectionViewCellHandler.h"
#import "WAGUIGestureInteractionCollectionViewHandler.h"
#import "WAGUIGestureInteractionControlHandler.h"
#import "WAGUIGestureInteractionHandler.h"
#import "WAGUIGestureInteractionTableViewHandler.h"
#import "WAGUIGestureInteractionViewHandler.h"
#import "WAGUIGestureRecognizerInstaller.h"
#import "WAGUIGradientView.h"
#import "WAGUIHighlightingEffectContext.h"
#import "WAGUIHighlightingEffectCurtainWindow.h"
#import "WAGUIHighlightingEffectEnvironment.h"
#import "WAGUIHighlightingEffectHostView.h"
#import "WAGUIHighlightingEffectMaskContentView.h"
#import "WAGUIHighlightingEffectMaskContentViewConfiguration.h"
#import "WAGUIHighlightingEffectMaskShape.h"
#import "WAGUIHighlightingEffectPortalView.h"
#import "WAGUIHighlightingEffectShapeView.h"
#import "WAGUIHighlightingEffectWindow.h"
#import "WAGUIHighlightingViewObserverInteraction.h"
#import "WAGUIHostedSceneRequestGestureEventAction.h"
#import "WAGUIHostedSceneRequestScrollAction.h"
#import "WAGUIHostedSceneRequestedGestureActionHost.h"
#import "WAGUIHostedSceneRequestedGestureActionHostKey.h"
#import "WAGUIHostedSceneRequestedGestureActionHostStore.h"
#import "WAGUIInteractionAction.h"
#import "WAGUIMomentaryActionOverlayView.h"
#import "WAGUINegativeAction.h"
#import "WAGUINegativeActionHostView.h"
#import "WAGUIPrimaryActionAnimation.h"
#import "WAGUIPrimaryActionDeactiveAnimation.h"
#import "WAGUIPrimaryActionDefaultAction.h"
#import "WAGUIPrimaryActionDefaultHostView.h"
#import "WAGUIPrimaryActionHighlightingView.h"
#import "WAGUIPrimaryActionMomentaryAction.h"
#import "WAGUIPrimaryActionOverlayView.h"
#import "WAGUIPrimaryActionSpotlightView.h"
#import "WAGUIPrimaryGestureInteraction.h"
#import "WAGUIPrimaryGestureNegativeInteraction.h"
#import "WAGUIPrimaryGestureSceneHostInteraction.h"
#import "WAGUIPrimaryGestureViewInteraction.h"
#import "WAGUIPrimaryGestureViewInteractionConfiguration.h"
#import "WAGUIProgressView.h"
#import "WAGUIRepeatingClientSideAnimation.h"
#import "WAGUIReversableAnimation.h"
#import "WAGUIRingView.h"
#import "WAGUIScrollingDestination.h"
#import "WAGUIScrollingProviderScrollView.h"
#import "WAGUISpringClientSideAnimation.h"
#import "_$s15WatchGesturesUI32WAGUIDebuggingLiveOnAnnotateViewCN.h"
#import "_TtC15WatchGesturesUI38WAGUIDebuggingLiveOnAnnotateButtonCell.h"
#import "_TtC15WatchGesturesUIP33_4C3620B8D68E4530A8F7F6F3799A21C119ResourceBundleClass.h"
#import "_WatchCompanionClientSideAnimationEngine.h"
#import "BSXPCSecureCoding-Protocol.h"
#import "CAAnimationDelegate-Protocol.h"
#import "CSLPIButtonObserver-Protocol.h"
#import "CSLPISensorActivityIndicatorObserver-Protocol.h"
#import "CSLSSensitiveUIMonitoring-Protocol.h"
#import "FBSceneObserver-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIInteraction-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WAGBacklightStateObserver-Protocol.h"
#import "WAGDebuggingInformationManagerObserver-Protocol.h"
#import "WAGUIBSActionProxyClientInterface-Protocol.h"
#import "WAGUIBSActionProxyClientXPCConnectionDelegate-Protocol.h"
#import "WAGUIBSActionProxyServerInterface-Protocol.h"
#import "WAGUIDebuggingContentView-Protocol.h"
#import "WAGUIGestureInteractionHandleable-Protocol.h"
#import "WAGUIGestureInteractionHandlerProtocol-Protocol.h"
#import "WAGUIGestureRecognizerInstallerDelegate-Protocol.h"
#import "WAGUIHighlightingEffectHostViewDelegate-Protocol.h"
#import "WAGUIHighlightingEffectMaskShapeProvider-Protocol.h"
#import "WAGUIHighlightingEffectOverlay-Protocol.h"
#import "WAGUIHighlightingViewObserverInteractionDelegate-Protocol.h"
#import "WAGUIPrimaryActionSpotlightViewDelegate-Protocol.h"
#import "WAGUISceneHostInteractionProtocol-Protocol.h"
#import "WAGUIScrollingProvider-Protocol.h"
#import "_UISceneComponentProviding-Protocol.h"
#import "CAMediaTimingFunction+PUICAdditions.h"
#import "UIBarButtonItem+WAGUIGestureInteraction.h"
#import "UIWindowScene+WAGUIHighlightingEffect.h"
#import "BSAction+WAGUIInteractions.h"
#import "_TtC15WatchGesturesUI32WAGUIDebuggingLiveOnAnnotateView+WatchGesturesUI.h"

#endif /* WatchGesturesUI_h */
