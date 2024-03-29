//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDLegacyDTController_h
#define IMDLegacyDTController_h
@import Foundation;

#include "IDSServiceDelegate-Protocol.h"

@class IDSService, NSString;

@interface IMDLegacyDTController : NSObject<IDSServiceDelegate>

@property (retain, nonatomic) IDSService *dtService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)_senderIDFromToken:(id)token;
- (void)service:(id)service account:(id)account incomingData:(id)data fromID:(id)id context:(id)context;
@end

#endif /* IMDLegacyDTController_h */
