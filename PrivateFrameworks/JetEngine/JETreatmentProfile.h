//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7.2.9.0.0
//
#ifndef JETreatmentProfile_h
#define JETreatmentProfile_h
@import Foundation;

@class NSArray;

@interface JETreatmentProfile : NSObject {
  /* instance variables */
  NSArray *_treatments;
}

/* class methods */
+ (id)treatmentProfileWithConfiguration:(id)configuration;
+ (id)treatmentProfileWithConfiguration:(id)configuration topic:(id)topic;

/* instance methods */
- (id)initWithConfigDictionary:(id)dictionary topic:(id)topic;
- (id)performTreatments:(id)treatments;
@end

#endif /* JETreatmentProfile_h */
