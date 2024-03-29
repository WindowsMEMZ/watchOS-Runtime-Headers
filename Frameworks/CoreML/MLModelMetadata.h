//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MLModelMetadata_h
#define MLModelMetadata_h
@import Foundation;

@class NSDictionary, NSString;

@interface MLModelMetadata : NSObject

@property (readonly) NSString *name;
@property (readonly) NSString *shortDescription;
@property (readonly) NSString *versionString;
@property (readonly) NSString *author;
@property (readonly) NSString *license;
@property (readonly) NSDictionary *creatorDefined;

/* instance methods */
- (id)initWithName:(id)name;
- (id)initWithName:(id)name shortDescription:(id)description versionString:(id)string author:(id)author license:(id)license creatorDefined:(id)defined;
- (id)debugDescription;
@end

#endif /* MLModelMetadata_h */
