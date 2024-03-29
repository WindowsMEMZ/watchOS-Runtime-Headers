//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMCharacteristic_h
#define HMCharacteristic_h
@import Foundation;

#include "HMCharacteristicMetadata.h"
#include "HMObjectMerge-Protocol.h"
#include "HMService.h"
#include "NSSecureCoding-Protocol.h"
#include "_HMContext.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, NSUUID;

@interface HMCharacteristic : NSObject<NSSecureCoding, HMObjectMerge> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy) NSDictionary *serializedDictionaryRepresentation;
@property (retain, nonatomic) _HMContext *context;
@property (readonly, nonatomic) NSNumber *instanceID;
@property (weak, nonatomic) HMService *service;
@property (copy, nonatomic) NSUUID *cachedServiceUniqueIdentifier;
@property (copy, nonatomic) NSString *characteristicType;
@property (copy, nonatomic) NSArray *properties;
@property (nonatomic) BOOL requiresDeviceUnlock;
@property (copy, nonatomic) id value;
@property (nonatomic) BOOL notificationEnabledByThisClient;
@property (nonatomic) BOOL notificationEnabled;
@property (copy, nonatomic) NSDate *valueUpdatedTime;
@property (copy, nonatomic) NSDate *notificationEnabledTime;
@property BOOL hasAuthorizationData;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) HMCharacteristicMetadata *metadata;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)characteristicWithSerializedDictionaryRepresentation:(id)representation home:(id)home;
+ (id)characteristicWithCharacteristicReference:(id)reference home:(id)home;
+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
+ (id)_characteristicTypeAsString:(id)string;
+ (id)localizedDescriptionForCharacteristicType:(id)type;
+ (id)__localizedDescriptionForCharacteristicType:(id)type;

/* instance methods */
- (id)init;
- (id)initWithInstanceID:(id)id characteristicType:(id)type metadata:(id)metadata;
- (BOOL)isEqual:(id)equal;
- (void)__configureWithContext:(id)context service:(id)service;
- (void)_unconfigureContext;
- (void)_unconfigure;
- (BOOL)isNotificationEnabled;
- (void)setValueUpdateTime:(id)time;
- (id)logIdentifier;
- (id)propertiesFromHAPProperties:(long long)happroperties;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)mergeFromNewObject:(id)object;
- (void)_updateValue:(id)value updateTime:(id)time messageSentDate:(id)date;
- (void)writeValue:(id)value completionHandler:(id /* block */)handler;
- (void)_writeValue:(id)value completionHandler:(id /* block */)handler;
- (void)readValueWithCompletionHandler:(id /* block */)handler;
- (void)_readValueWithCompletionHandler:(id /* block */)handler;
- (void)enableNotification:(BOOL)notification completionHandler:(id /* block */)handler;
- (void)_enableNotification:(BOOL)notification completionHandler:(id /* block */)handler;
- (void)updateAuthorizationData:(id)data completionHandler:(id /* block */)handler;
- (void)_updateAuthorizationData:(id)data completionHandler:(id /* block */)handler;
- (id)_characteristicTypeDescription;
@end

#endif /* HMCharacteristic_h */
