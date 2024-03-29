//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MLObjectBoundingBoxOutputDescription_h
#define MLObjectBoundingBoxOutputDescription_h
@import Foundation;

@class NSArray, NSString;

@interface MLObjectBoundingBoxOutputDescription : NSObject

@property int format;
@property (retain) NSString *confidenceFeatureName;
@property (retain) NSString *coordinatesFeatureName;
@property (retain) NSArray *labelNames;

/* instance methods */
@end

#endif /* MLObjectBoundingBoxOutputDescription_h */
