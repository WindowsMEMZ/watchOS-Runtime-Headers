//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef _MSMessageComposeHostProtocol_Protocol_h
#define _MSMessageComposeHostProtocol_Protocol_h
@import Foundation;

@protocol _MSMessageComposeHostProtocol <NSObject>
/* instance methods */
- (void)_stageAppItem:(id)item skipShelf:(BOOL)shelf completionHandler:(id /* block */)handler;
- (void)_stageMediaItem:(id)item skipShelf:(BOOL)shelf forceStage:(BOOL)stage completionHandler:(id /* block */)handler;
- (void)_stageRichLink:(id)link skipShelf:(BOOL)shelf completionHandler:(id /* block */)handler;
- (void)_startDragMediaItem:(id)item frameInRemoteView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })view fence:(id)fence completionHandler:(id /* block */)handler;
- (void)_dragMediaItemMoved:(id)moved frameInRemoteView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })view rotation:(double)rotation scale:(double)scale completionHandler:(id /* block */)handler;
- (void)_dragMediaItemCanceled;
- (void)_stickerDruidDragStarted;
- (void)_stickerDruidDragEndedWithPayload:(id)payload;
- (void)_stickerDruidDragEndedWithPayload:(id)payload pluginIdentifier:(id)identifier;
- (void)_requestPresentationStyle:(unsigned long long)style;
- (void)_requestFullScreenModalPresentationWithSize:(struct CGSize { double x0; double x1; })size;
- (void)_dismiss;
- (void)_dismissAndPresentPhotosApp;
- (void)_presentAlertWithTitle:(id)title message:(id)message buttonTitle:(id)title completion:(id /* block */)completion;
- (void)_presentAlertWithTitle:(id)title message:(id)message buttonTitle:(id)title destructiveButtonTitle:(id)title completion:(id /* block */)completion;
- (void)_updateSnapshotForNextLaunch:(id)launch;
- (void)_remoteViewProvidesExplicitSizeSnapshot;
- (void)_remoteViewNeedsSizeMatchBeforeSnapshotSwap;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)_openURL:(id)url completionHandler:(id /* block */)handler;
- (void)_requestHostSceneIdentifierWithCompletion:(id /* block */)completion;
- (void)_requestStickerExtensionMetadataDictionary:(id /* block */)dictionary;
- (void)_requestPresentationWithStickerType:(id)type identifier:(id)identifier;
- (void)_showBrowserForPluginIdentifier:(id)identifier style:(unsigned long long)style completion:(id /* block */)completion;
- (void)_canShowBrowserForPluginIdentifier:(id)identifier completion:(id /* block */)completion;
@optional
/* instance methods */
- (void)_requestResize;
- (void)_contentDidLoad;
- (void)_stageAssetArchive:(id)archive skipShelf:(BOOL)shelf completionHandler:(id /* block */)handler;
- (void)_removeAssetArchiveWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)_presentAlertSheetWith:(id)with styles:(id)styles completion:(id /* block */)completion;
- (void)_presentAlertSheetWithTitle:(id)title message:(id)message buttonTitles:(id)titles styles:(id)styles completion:(id /* block */)completion;
@end

#endif /* _MSMessageComposeHostProtocol_Protocol_h */
