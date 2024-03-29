//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDConceptResolutionConfiguration_h
#define HDConceptResolutionConfiguration_h
@import Foundation;

@class NSString;

@interface HDConceptResolutionConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) long long recordCategoryType;
@property (readonly, nonatomic) unsigned long long options;

/* instance methods */
- (id)init;
- (id)initWithCountryCode:(id)code recordCategoryType:(long long)type options:(unsigned long long)options;
- (id)initWithCountryCode:(id)code;
- (id)description;
@end

#endif /* HDConceptResolutionConfiguration_h */
