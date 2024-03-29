//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 936.60.10.0.0
//
#ifndef MAAutoAssetSetAtomicEntry_h
#define MAAutoAssetSetAtomicEntry_h
@import Foundation;

#include "MAAutoAssetSelector.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString, NSURL;

@interface MAAutoAssetSetAtomicEntry : NSObject<NSSecureCoding>

@property (readonly, retain, nonatomic) MAAutoAssetSelector *fullAssetSelector;
@property (readonly, retain, nonatomic) NSString *assetID;
@property (readonly, retain, nonatomic) NSURL *localContentURL;
@property (readonly, retain, nonatomic) NSDictionary *assetAttributes;
@property (nonatomic) BOOL inhibitedFromEmergencyRemoval;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithFullAssetSelector:(id)selector withAssetID:(id)id withLocalContentURL:(id)url withAssetAttributes:(id)attributes inhibitedFromEmergencyRemoval:(BOOL)removal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copy;
- (id)description;
- (id)summary;
@end

#endif /* MAAutoAssetSetAtomicEntry_h */
