//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AALoginResponseiCloudTokens_h
#define AALoginResponseiCloudTokens_h
@import Foundation;

@class NSString;

@interface AALoginResponseiCloudTokens : NSObject

@property (readonly, nonatomic) NSString *authToken;
@property (readonly, nonatomic) NSString *fmipAuthToken;
@property (readonly, nonatomic) NSString *fmipAppToken;
@property (readonly, nonatomic) NSString *fmipLostModeToken;
@property (readonly, nonatomic) NSString *fmipSiriToken;
@property (readonly, nonatomic) NSString *fmfToken;
@property (readonly, nonatomic) NSString *fmfAppToken;
@property (readonly, nonatomic) NSString *cloudKitToken;
@property (readonly, nonatomic) NSString *mdmServerToken;
@property (readonly, nonatomic) NSString *mapsToken;
@property (readonly, nonatomic) NSString *searchPartyToken;
@property (readonly, nonatomic) NSString *keyTransparencyToken;

/* instance methods */
- (id)initWithTokens:(id)tokens;
@end

#endif /* AALoginResponseiCloudTokens_h */
