//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 685.60.2.0.0
//
#ifndef TKSEPClientTokenSession_h
#define TKSEPClientTokenSession_h
@import Foundation;

#include "TKClientTokenSession.h"
#include "TKTokenID.h"

@interface TKSEPClientTokenSession : TKClientTokenSession

@property (readonly, nonatomic) TKTokenID *tokenID;

/* instance methods */
- (BOOL)forceSystemSession;
- (id)initWithToken:(id)token LAContext:(id)lacontext parameters:(id)parameters error:(id *)error;
- (id)createObjectWithAttributes:(id)attributes error:(id *)error;
- (id)objectForObjectID:(id)id error:(id *)error;
@end

#endif /* TKSEPClientTokenSession_h */
