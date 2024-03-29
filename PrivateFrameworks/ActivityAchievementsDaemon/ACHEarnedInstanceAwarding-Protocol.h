//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 573.2.0.0.0
//
#ifndef ACHEarnedInstanceAwarding_Protocol_h
#define ACHEarnedInstanceAwarding_Protocol_h
@import Foundation;

@protocol ACHEarnedInstanceAwarding <ACHDataStorePropertyProviding, NSObject>

@property (readonly, nonatomic) NSString *uniqueName;

/* instance methods */
- (id)earnedInstancesForHistoricalInterval:(id)interval error:(id *)error;
- (id)earnedInstancesForHistoricalInterval:(id)interval databaseContext:(id)context;
@end

#endif /* ACHEarnedInstanceAwarding_Protocol_h */
