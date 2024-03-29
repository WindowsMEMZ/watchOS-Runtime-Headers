//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPProtocolMessages_h
#define HAPProtocolMessages_h
@import Foundation;

#include "HMFObject.h"

@interface HAPProtocolMessages : HMFObject
/* class methods */
+ (id)constructTokenRequest:(id)request outTID:(char *)tid;
+ (id)constructInfoRequest:(id)request outTID:(char *)tid;
+ (id)constructInfoRequest:(id)request serviceUUID:(id)uuid outTID:(char *)tid;
+ (id)constructTokenUpdateRequest:(id)request token:(id)token outTID:(char *)tid;
+ (id)constructRequestHeaderFor:(unsigned long long)for instanceID:(id)id outTID:(char *)tid;
+ (BOOL)parseTokenResponse:(id)response expectedTID:(unsigned char)tid withHeader:(BOOL)header outToken:(id *)token outUUID:(id *)uuid;
+ (BOOL)_parseEmptyResponse:(id)response expectedTID:(unsigned char)tid withHeader:(BOOL)header;
+ (BOOL)parseTokenUpdateResponse:(id)response expectedTID:(unsigned char)tid withHeader:(BOOL)header;
+ (id)parseInfoResponse:(id)response expectedTID:(unsigned char)tid withHeader:(BOOL)header;
+ (id)constructAuthChallengeRequest:(id)request nonce:(id)nonce outTID:(char *)tid;
+ (BOOL)parseAuthChallengeResponse:(id)response expectedTID:(unsigned char)tid outChallengeResponse:(id *)response outMFICert:(id *)mficert withHeader:(BOOL)header;
+ (id)logCategory;
@end

#endif /* HAPProtocolMessages_h */
