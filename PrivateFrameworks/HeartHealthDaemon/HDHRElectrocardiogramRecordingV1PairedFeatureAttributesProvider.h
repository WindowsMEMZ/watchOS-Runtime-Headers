//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDHRElectrocardiogramRecordingV1PairedFeatureAttributesProvider_h
#define HDHRElectrocardiogramRecordingV1PairedFeatureAttributesProvider_h
@import Foundation;

#include "HDPairedFeatureAttributesProviding-Protocol.h"

@class HKPairedFeatureAttributes, NSString;
@protocol HDPairedDeviceCapabilityProviding;

@interface HDHRElectrocardiogramRecordingV1PairedFeatureAttributesProvider : NSObject<HDPairedFeatureAttributesProviding> {
  /* instance variables */
  NSObject<HDPairedFeatureAttributesProviding> *_attributesProvider;
  NSObject<HDPairedDeviceCapabilityProviding> *_pairedDeviceProvider;
}

@property (readonly, copy, nonatomic) HKPairedFeatureAttributes *currentPairedFeatureAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPairedFeatureAttributesProvider:(id)provider pairedDeviceCapabilityProvider:(id)provider;
@end

#endif /* HDHRElectrocardiogramRecordingV1PairedFeatureAttributesProvider_h */
