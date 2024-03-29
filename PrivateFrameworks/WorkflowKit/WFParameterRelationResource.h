//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFParameterRelationResource_h
#define WFParameterRelationResource_h
@import Foundation;

#include "WFResource.h"
#include "WFAction.h"
#include "WFActionEventObserver-Protocol.h"

@class NSString;

@interface WFParameterRelationResource : WFResource<WFActionEventObserver>

@property (weak, nonatomic) WFAction *action;
@property (readonly, nonatomic) NSString *parameterKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)mustBeAvailableForDisplay;

/* instance methods */
- (id)initWithParameterKey:(id)key parameterValues:(id)values relation:(id)relation;
- (id)comparedValues;
- (void)setupWithAction:(id)action;
- (void)refreshAvailability;
- (void)action:(id)action parameterStateDidChangeForKey:(id)key;
@end

#endif /* WFParameterRelationResource_h */
