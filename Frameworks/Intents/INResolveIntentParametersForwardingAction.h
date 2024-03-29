//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INResolveIntentParametersForwardingAction_h
#define INResolveIntentParametersForwardingAction_h
@import Foundation;

#include "INIntentForwardingAction.h"

@class NSArray;

@interface INResolveIntentParametersForwardingAction : INIntentForwardingAction

@property (readonly, nonatomic) BOOL resolvesAllParameters;
@property (readonly, nonatomic) NSArray *parameterNames;

/* class methods */
+ (Class)responseClass;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIntent:(id)intent parameterNames:(id)names;
- (id)initWithIntent:(id)intent parameterName:(id)name;
- (BOOL)executeRemotelyWithVendorRemote:(id)remote completionHandler:(id /* block */)handler;
- (void)executeLocallyWithIntentDeliverer:(id)deliverer completionHandler:(id /* block */)handler;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id /* block */)_completionHandlerForMultipleParametersWithActionCompletionHandler:(id /* block */)handler;
- (id /* block */)_completionHandlerForSingleParameterNamed:(id)named withActionCompletionHandler:(id /* block */)handler;
@end

#endif /* INResolveIntentParametersForwardingAction_h */
