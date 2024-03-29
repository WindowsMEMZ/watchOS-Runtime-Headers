//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef CalContactsProviderDelegate_Protocol_h
#define CalContactsProviderDelegate_Protocol_h
@import Foundation;

@protocol CalContactsProviderDelegate 
/* instance methods */
- (void)contactsInserted:(id)inserted updated:(id)updated deleted:(id)deleted;
- (void)contactsReset;
@end

#endif /* CalContactsProviderDelegate_Protocol_h */
