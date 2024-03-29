//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 54.1.2.0.0
//
#ifndef NSString_AAAFoundation_h
#define NSString_AAAFoundation_h
@import Foundation;

@interface NSString (AAAFoundation)
/* class methods */
+ (id)URLQueryValueAllowedCharacterSet;

/* instance methods */
- (id)aaf_urlEncoded;
- (id)aaf_toBase64DecodedData;
- (id)aaf_toBase64DecodedString;
- (id)aaf_toBase64EncodedString;
- (id)aaf_base64Padded;
- (id)aaf_toSHA256Data;
- (id)aaf_toSHA256String;
@end

#endif /* NSString_AAAFoundation_h */
