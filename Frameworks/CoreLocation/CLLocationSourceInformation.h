//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CLLocationSourceInformation_h
#define CLLocationSourceInformation_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface CLLocationSourceInformation : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) BOOL isSimulatedBySoftware;
@property (readonly, nonatomic) BOOL isProducedByAccessory;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSoftwareSimulationState:(BOOL)state andExternalAccessoryState:(BOOL)state;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CLLocationSourceInformation_h */
