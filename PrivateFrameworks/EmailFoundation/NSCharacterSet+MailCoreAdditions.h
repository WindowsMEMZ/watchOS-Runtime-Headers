//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef NSCharacterSet_MailCoreAdditions_h
#define NSCharacterSet_MailCoreAdditions_h
@import Foundation;

@interface NSCharacterSet (MailCoreAdditions)
/* class methods */
+ (id)ef_unsafeDomainNameCharacterSet;
+ (id)ef_unsafeAddressLocalPartCharacterSet;
+ (id)ef_asciiAlphaNumericCharacterSet;
+ (id)ef_rfc6376WhitespaceCharacterSet;
@end

#endif /* NSCharacterSet_MailCoreAdditions_h */
