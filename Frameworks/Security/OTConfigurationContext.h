//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 61040.64.1.0.0
//
#ifndef OTConfigurationContext_h
#define OTConfigurationContext_h
@import Foundation;

#include "CKKSControl.h"
#include "OTControl.h"

@class NSString;

@interface OTConfigurationContext : NSObject

@property (copy, nonatomic) NSString *context;
@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSString *dsid;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *authenticationAppleID;
@property (copy, nonatomic) NSString *passwordEquivalentToken;
@property (nonatomic) BOOL overrideEscrowCache;
@property (nonatomic) long long escrowFetchSource;
@property (nonatomic) BOOL octagonCapableRecordsExist;
@property (nonatomic) BOOL overrideForSetupAccountScript;
@property (nonatomic) BOOL overrideForJoinAfterRestore;
@property (copy, nonatomic) NSString *flowID;
@property (copy, nonatomic) NSString *deviceSessionID;
@property (retain) OTControl *otControl;
@property (retain) CKKSControl *ckksControl;
@property (retain) id sbd;

/* instance methods */
- (id)makeOTControl:(id *)otcontrol;
- (id)makeCKKSControl:(id *)ckkscontrol;
- (id)init;
- (id)description;
@end

#endif /* OTConfigurationContext_h */
