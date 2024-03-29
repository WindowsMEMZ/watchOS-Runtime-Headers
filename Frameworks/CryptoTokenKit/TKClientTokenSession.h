//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 685.60.2.0.0
//
#ifndef TKClientTokenSession_h
#define TKClientTokenSession_h
@import Foundation;

#include "TKClientToken.h"

@class LAContext, NSArray, NSDictionary, NSString;

@interface TKClientTokenSession : NSObject

@property (retain, nonatomic) LAContext *LAContext;
@property (readonly, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) TKClientToken *token;
@property (nonatomic) BOOL authenticateWhenNeeded;
@property (readonly, nonatomic) NSArray *keys;
@property (readonly, nonatomic) NSArray *certificates;
@property (readonly, nonatomic) NSArray *identities;
@property (readonly, nonatomic) NSString *slotName;
@property (nonatomic) BOOL _testing_AuthenticateInternally;
@property (nonatomic) BOOL _testing_ForceAuthenticationNeeded;
@property (retain, nonatomic) id _testing_AuthContextUsed;

/* instance methods */
- (BOOL)isValidWithError:(id *)error;
- (id)_initWithToken:(id)token LAContext:(id)lacontext parameters:(id)parameters error:(id *)error;
- (id)initWithToken:(id)token LAContext:(id)lacontext parameters:(id)parameters error:(id *)error;
- (id)initWithTokenID:(id)id LAContext:(id)lacontext error:(id *)error;
- (BOOL)deleteObject:(id)object error:(id *)error;
- (BOOL)evaluateAccessControl:(id)control forOperation:(id)operation error:(id *)error;
- (id)objectForObjectID:(id)id error:(id *)error;
- (id)createObjectWithAttributes:(id)attributes error:(id *)error;
- (id)processObjectCreationAttributes:(id)attributes error:(id *)error;
@end

#endif /* TKClientTokenSession_h */
