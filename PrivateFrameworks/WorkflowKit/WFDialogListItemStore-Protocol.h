//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFDialogListItemStore_Protocol_h
#define WFDialogListItemStore_Protocol_h
@import Foundation;

@protocol WFDialogListItemStore <NSObject>
/* instance methods */
- (void)hasSubtitleForIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)hasAltTextForIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)hasImageForIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)loadSubtitleWithIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)loadAltTextWithIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)loadImageWithIdentifier:(id)identifier size:(struct CGSize { double x0; double x1; })size completion:(id /* block */)completion;
@end

#endif /* WFDialogListItemStore_Protocol_h */
