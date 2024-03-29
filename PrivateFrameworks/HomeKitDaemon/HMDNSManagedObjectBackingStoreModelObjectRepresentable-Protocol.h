//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDNSManagedObjectBackingStoreModelObjectRepresentable_Protocol_h
#define HMDNSManagedObjectBackingStoreModelObjectRepresentable_Protocol_h
@import Foundation;

@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable <NSObject>

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;

/* class methods */
+ (Class)cd_modelClass;
@optional
/* instance methods */
- (id)hmd_modelsWithChangeType:(unsigned long long)type detached:(BOOL)detached error:(id *)error;
- (id)hmd_modelsWithChangeType:(unsigned long long)type detached:(BOOL)detached createManagedObject:(BOOL)object error:(id *)error;
@end

#endif /* HMDNSManagedObjectBackingStoreModelObjectRepresentable_Protocol_h */
