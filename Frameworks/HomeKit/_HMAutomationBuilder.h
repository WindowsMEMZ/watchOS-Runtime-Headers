//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef _HMAutomationBuilder_h
#define _HMAutomationBuilder_h
@import Foundation;

#include "HMAutomationBuilderInternal-Protocol.h"
#include "HMHome.h"
#include "_HMContext.h"

@class NSString, NSUUID;

@interface _HMAutomationBuilder : NSObject<HMAutomationBuilderInternal> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  _HMContext *_context;
}

@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)adoptExternalCategoriesFromClasses:(Class)classes;

/* instance methods */
- (id)uuid;
- (id)assistantIdentifier;
- (id)initWithContext:(id)context home:(id)home;
@end

#endif /* _HMAutomationBuilder_h */
