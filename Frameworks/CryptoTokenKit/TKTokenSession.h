//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 685.60.2.0.0
//
#ifndef TKTokenSession_h
#define TKTokenSession_h
@import Foundation;

#include "TKToken.h"
#include "TKTokenSessionDelegate-Protocol.h"

@class LAContext, NSDictionary, NSNumber, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, TKTokenSessionPrivateDelegate;

@interface TKTokenSession : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) id keepAlive;
@property (readonly, nonatomic) LAContext *LAContext;
@property (retain, nonatomic) NSDictionary *parameters;
@property (nonatomic) struct { unsigned int x0[8] } creatorAuditToken;
@property (readonly, nonatomic) NSXPCConnection *caller;
@property (retain, nonatomic) NSNumber *callerPID;
@property (readonly, nonatomic) NSObject<TKTokenSessionPrivateDelegate> *privateDelegate;
@property (readonly) TKToken *token;
@property (weak) NSObject<TKTokenSessionDelegate> *delegate;

/* class methods */
+ (id)_localizedString:(id)string value:(id)value;

/* instance methods */
- (id)initWithToken:(id)token;
- (void)getAttributesOfObject:(id)object isCertificate:(BOOL)certificate reply:(id /* block */)reply;
- (void)beginAuthForOperation:(long long)operation constraint:(id)constraint reply:(id /* block */)reply;
- (BOOL)checkOperation:(long long)operation usingKey:(id)key algorithm:(id)algorithm parameters:(id)parameters;
- (void)signData:(id)data usingKey:(id)key algorithm:(id)algorithm reply:(id /* block */)reply;
- (void)decryptData:(id)data usingKey:(id)key algorithm:(id)algorithm parameters:(id)parameters reply:(id /* block */)reply;
- (void)performKeyExchangeWithPublicKey:(id)key usingKey:(id)key algorithm:(id)algorithm parameters:(id)parameters reply:(id /* block */)reply;
- (void)attestKey:(id)key usingKey:(id)key nonce:(id)nonce reply:(id /* block */)reply;
- (void)bumpKey:(id)key reply:(id /* block */)reply;
- (void)commitKey:(id)key reply:(id /* block */)reply;
- (void)createObjectWithAttributes:(id)attributes reply:(id /* block */)reply;
- (void)deleteObject:(id)object reply:(id /* block */)reply;
- (void)beginRequest;
- (void)endRequest;
- (void)evaluateAuthOperation:(id)operation tokenOperation:(long long)operation reply:(id /* block */)reply;
- (void)auditAuthOperation:(id)operation auditToken:(struct { unsigned int x0[8] })token success:(BOOL)success;
- (void)finalizeAuthOperation:(id)operation evaluatedAuthOperation:(id)operation reply:(id /* block */)reply;
- (void)evaluateAuthOperation:(id)operation tokenOperation:(long long)operation retry:(BOOL)retry reply:(id /* block */)reply;
- (void)evaluateAccessControl:(id)control forOperation:(id)operation reply:(id /* block */)reply;
- (id)errorWithResult:(id)result operation:(id)operation forError:(id)error;
- (void)objectID:(id)id operation:(long long)operation inputData:(id)data algorithms:(id)algorithms parameters:(id)parameters reply:(id /* block */)reply;
- (void)getAdvertisedItemsWithReply:(id /* block */)reply;
- (void)terminate;
@end

#endif /* TKTokenSession_h */
