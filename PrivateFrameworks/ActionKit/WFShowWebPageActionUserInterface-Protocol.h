//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFShowWebPageActionUserInterface_Protocol_h
#define WFShowWebPageActionUserInterface_Protocol_h
@import Foundation;

@protocol WFShowWebPageActionUserInterface <WFActionRemoteUserInterface>
/* instance methods */
- (void)showURL:(id)url readerView:(BOOL)view completion:(id /* block */)completion;
- (void)showRichText:(id)text completion:(id /* block */)completion;
@end

#endif /* WFShowWebPageActionUserInterface_Protocol_h */
