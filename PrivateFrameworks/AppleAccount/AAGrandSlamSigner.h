//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AAGrandSlamSigner_h
#define AAGrandSlamSigner_h
@import Foundation;

@class ACAccount, ACAccountStore, NSString;

@interface AAGrandSlamSigner : NSObject {
  /* instance variables */
  NSString *_appTokenID;
}

@property (readonly, nonatomic) ACAccount *grandSlamAccount;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) BOOL useAltDSID;
@property (retain, nonatomic) NSString *headerFieldKey;

/* instance methods */
- (id)initWithAccountStore:(id)store grandSlamAccount:(id)account appTokenID:(id)id;
- (id)initWithAppleAccount:(id)account grandSlamAccount:(id)account accountStore:(id)store appTokenID:(id)id;
- (BOOL)signURLRequest:(id)urlrequest;
- (BOOL)signURLRequest:(id)urlrequest isUserInitiated:(BOOL)initiated;
@end

#endif /* AAGrandSlamSigner_h */
