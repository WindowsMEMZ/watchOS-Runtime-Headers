//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CLMiLoServiceMetaInfo_h
#define CLMiLoServiceMetaInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSNumber;

@interface CLMiLoServiceMetaInfo : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSNumber *numberOfClustersLearnedInModel;
@property (readonly, nonatomic) NSNumber *numberOfRecordingTriggersAtCurrentLocationOfInterest;
@property (readonly, nonatomic) NSNumber *numberOfInputValidFingerprints;
@property (readonly, nonatomic) NSNumber *numberOfInputValidFingerprintsLabeled;
@property (readonly, nonatomic) NSNumber *numberOfInputValidFingerprintsUnLabeled;
@property (readonly, nonatomic) NSNumber *numberOfFingerprintsBeforePruning;
@property (readonly, nonatomic) NSNumber *numberOfFingerprintsAfterPruning;
@property (readonly, nonatomic) NSNumber *numberOfWiFiAccessPoints;
@property (readonly, nonatomic) NSNumber *numberOfBLESources;
@property (readonly, nonatomic) NSNumber *numberOfUWBSources;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithNumClustersLearnedInModel:(id)model numRecordingTriggersAtCurrentLOI:(id)loi numInputValidFingerprints:(id)fingerprints numInputValidFingerprintsLabeled:(id)labeled numInputValidFingerprintsUnlabeled:(id)unlabeled numFingerprintsBeforePruning:(id)pruning numFingerprintsAfterPruning:(id)pruning numWiFiAccessPoints:(id)points numBLESources:(id)blesources numUWBSources:(id)uwbsources;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CLMiLoServiceMetaInfo_h */
