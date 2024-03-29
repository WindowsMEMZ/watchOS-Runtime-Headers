//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSMediaRequestEncoder_h
#define AMSMediaRequestEncoder_h
@import Foundation;

#include "AMSBagConsumer-Protocol.h"
#include "AMSBagProtocol-Protocol.h"
#include "AMSMediaTokenServiceProtocol-Protocol.h"
#include "AMSProcessInfo.h"
#include "AMSRequestEncoding-Protocol.h"
#include "AMSResponseDecoding-Protocol.h"
#include "AMSURLRequestEncoder.h"

@class ACAccount, NSString;

@interface AMSMediaRequestEncoder : NSObject<AMSBagConsumer, AMSRequestEncoding>

@property (readonly, nonatomic) AMSURLRequestEncoder *requestEncoder;
@property (nonatomic) BOOL disableAccountMediaTypeComponent;
@property (nonatomic) BOOL URLKnownToBeTrusted;
@property (retain, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (nonatomic) BOOL disableResponseDecoding;
@property (retain, nonatomic) NSString *gsTokenIdentifier;
@property (retain, nonatomic) NSString *logKey;
@property long long requestEncoding;
@property (retain, nonatomic) NSObject<AMSResponseDecoding> *responseDecoder;
@property (readonly, nonatomic) NSObject<AMSMediaTokenServiceProtocol> *tokenService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

/* instance methods */
- (id)initWithTokenService:(id)service bag:(id)bag;
- (id)requestWithComponents:(id)components;
- (id)requestWithURL:(id)url;
- (id)requestByEncodingRequest:(id)request parameters:(id)parameters;
@end

#endif /* AMSMediaRequestEncoder_h */
