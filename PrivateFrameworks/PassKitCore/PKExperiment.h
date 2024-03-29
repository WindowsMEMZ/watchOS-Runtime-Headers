//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKExperiment_h
#define PKExperiment_h
@import Foundation;

@interface PKExperiment : NSObject

@property (readonly, nonatomic) BOOL isExposed;

/* instance methods */
- (id)namespaceName;
- (id)init;
- (id)description;
- (id)experimentDetails;
- (void)trackExperimentExposure;
- (void)refresh;
- (id)filePathForFactor:(id)factor;
- (id)stringForFactor:(id)factor;
- (BOOL)booleanForFactor:(id)factor;
- (id)metadataForFactor:(id)factor;
- (BOOL)isTaggedForFactor:(id)factor;
@end

#endif /* PKExperiment_h */
