//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPRecord_Protocol_h
#define PPRecord_Protocol_h
@import Foundation;

@protocol PPRecord 

@property (readonly, nonatomic) PPSource *source;
@property (readonly, nonatomic) double initialScore;
@property (readonly, nonatomic) NSString *extractionOsBuild;
@property (readonly, nonatomic) unsigned int extractionAssetVersion;

/* instance methods */
- (id)identifier;
@end

#endif /* PPRecord_Protocol_h */
