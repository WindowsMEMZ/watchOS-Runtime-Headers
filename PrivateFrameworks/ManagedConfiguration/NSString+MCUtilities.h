//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2253.0.0.0.0
//
#ifndef NSString_MCUtilities_h
#define NSString_MCUtilities_h
@import Foundation;

@interface NSString (MCUtilities)
/* class methods */
+ (id)MCMakeUUID;

/* instance methods */
- (id)MCAppendGreenteaSuffix;
- (id)MCRemoveAppExternalVersionIDParameter;
- (id)MCHashedFilenameWithExtension:(id)extension;
- (id)MCHashedFilenameWithPrefix:(id)prefix extension:(id)extension;
- (id)MCHashedIdentifier;
- (id)MCOldStyleSafeFilenameHash;
- (id)MCOldStyleSafeFilenameHashWithExtension:(id)extension;
- (id)MCSHA256DigestWithPasscodeSalt;
- (id)MCSHA256DigestWithSalt:(id)salt;
- (unsigned int)MCHash;
@end

#endif /* NSString_MCUtilities_h */
