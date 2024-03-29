//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSURLRequestProperties_h
#define AMSURLRequestProperties_h
@import Foundation;

#include "AMSBagProtocol-Protocol.h"
#include "AMSKeychainOptions.h"
#include "AMSProcessInfo.h"
#include "AMSPurchaseInfo.h"
#include "AMSResponseDecoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class ACAccount, NSDictionary, NSMutableDictionary, NSString;

@interface AMSURLRequestProperties : NSObject<NSCopying>

@property (copy, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSDictionary *additionalMetrics;
@property (nonatomic) long long anisetteType;
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (nonatomic) long long dialogOptions;
@property (nonatomic) BOOL disableBiometricsResponseHandling;
@property (nonatomic) BOOL disableLoadURLMetrics;
@property (nonatomic) BOOL disableResponseDecoding;
@property (retain, nonatomic) NSString *gsTokenIdentifier;
@property (retain, nonatomic) AMSKeychainOptions *keychainOptions;
@property (nonatomic) BOOL knownToBeTrusted;
@property (copy, nonatomic) NSString *logUUID;
@property (nonatomic) long long maxRetryCount;
@property (nonatomic) long long mescalType;
@property (retain, nonatomic) AMSPurchaseInfo *purchaseInfo;
@property (nonatomic) BOOL remoteSecuritySigningEnabled;
@property (retain, nonatomic) NSObject<AMSResponseDecoding> *responseDecoder;
@property (nonatomic) long long reversePushType;
@property (nonatomic) BOOL shouldSetCookiesFromResponse;
@property (nonatomic) BOOL shouldSetStorefrontFromResponse;
@property (retain, nonatomic) NSMutableDictionary *userInfo;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* AMSURLRequestProperties_h */
