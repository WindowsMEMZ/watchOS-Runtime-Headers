//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef NSURLResponse_SafariCoreExtras_h
#define NSURLResponse_SafariCoreExtras_h
@import Foundation;

@interface NSURLResponse (SafariCoreExtras)
/* instance methods */
- (BOOL)safari_hasAttachment;
- (long long)safari_statusCodeGroup;
- (id)safari_decodeJSONData:(id)jsondata expectingRootClass:(Class)class error:(id *)error;
@end

#endif /* NSURLResponse_SafariCoreExtras_h */
