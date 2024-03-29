//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNContactVerifier_h
#define CNContactVerifier_h
@import Foundation;

@interface CNContactVerifier : NSObject
/* class methods */
+ (id)os_log;
+ (BOOL)isValidContact:(id)contact error:(id *)error;
+ (BOOL)arePropertiesOfContact:(id)contact authorizedForSavingWithContext:(id)context error:(id *)error;
@end

#endif /* CNContactVerifier_h */
