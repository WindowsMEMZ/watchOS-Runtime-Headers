//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKElectrocardiogramRegulatedVersion_h
#define HKElectrocardiogramRegulatedVersion_h
@import Foundation;

@class NSString;

@interface HKElectrocardiogramRegulatedVersion : NSObject

@property (readonly, copy, nonatomic) NSString *updateVersion;
@property (readonly, copy, nonatomic) NSString *featureVersion;

/* instance methods */
- (id)initWithSourceVersion:(id)version algorithmVersion:(long long)version;
- (BOOL)_validateSourceVersion:(id)version algorithmVersion:(long long)version;
- (id)_updateVersionFromSourceVersion:(id)version algorithmVersion:(long long)version;
- (id)_featureVersionFromUpdateVersion:(id)version;
@end

#endif /* HKElectrocardiogramRegulatedVersion_h */
