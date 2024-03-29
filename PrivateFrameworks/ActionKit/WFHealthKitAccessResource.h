//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFHealthKitAccessResource_h
#define WFHealthKitAccessResource_h
@import Foundation;

#include "WFAccessResource.h"

@class HKHealthStore;

@interface WFHealthKitAccessResource : WFAccessResource {
  /* instance variables */
  unsigned long long _status;
}

@property (readonly, nonatomic) HKHealthStore *healthStore;

/* class methods */
+ (BOOL)alwaysMakeAvailable;
+ (BOOL)isSystemResource;

/* instance methods */
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (id)initWithDefinition:(id)definition;
- (id)objectTypesForAccessType:(id)type;
- (id)objectTypes;
- (id)readTypes;
- (id)writeTypes;
- (id)readableUnauthorizedResourceDescription;
- (void)refreshAvailability;
- (void)makeAvailableWithUserInterface:(id)interface completionHandler:(id /* block */)handler;
- (id)errorReasonForStatus:(unsigned long long)status;
- (id)localizedErrorReasonForStatus:(unsigned long long)status;
- (id)importErrorReasonForStatus:(unsigned long long)status;
- (id)localizedImportErrorReasonForStatus:(unsigned long long)status;
- (id)errorRecoveryOptionsForStatus:(unsigned long long)status;
- (void)attemptRecoveryFromErrorWithOptionIndex:(unsigned long long)index userInterface:(id)interface completionHandler:(id /* block */)handler;
- (unsigned long long)status;
@end

#endif /* WFHealthKitAccessResource_h */
