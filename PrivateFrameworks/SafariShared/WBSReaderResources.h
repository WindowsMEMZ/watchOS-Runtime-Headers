//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSReaderResources_h
#define WBSReaderResources_h
@import Foundation;

@interface WBSReaderResources : NSObject
/* class methods */
+ (id)readerHTMLSourceURL;
+ (id)localizedStringsScriptURL;
+ (struct OpaqueJSScript *)articleFinderScriptForContext:(struct OpaqueJSContext *)context;
+ (struct OpaqueJSScript *)sharedUIScriptForContext:(struct OpaqueJSContext *)context;
+ (struct OpaqueJSScript *)sharedUINormalWorldScriptForContext:(struct OpaqueJSContext *)context;
@end

#endif /* WBSReaderResources_h */
