//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef NSItemProvider_LPExtras_h
#define NSItemProvider_LPExtras_h
@import Foundation;

@interface NSItemProvider (LPExtras)
/* class methods */
+ (id)_lp_itemProviderWithData:(id)data MIMEType:(id)mimetype;

/* instance methods */
- (void)_lp_loadFirstDataRepresentationMatchingMIMETypePredicate:(id /* block */)predicate completionHandler:(id /* block */)handler;
@end

#endif /* NSItemProvider_LPExtras_h */
