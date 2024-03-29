//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MSVSegmentedCodingPackage_h
#define MSVSegmentedCodingPackage_h
@import Foundation;

@class NSDictionary, NSMutableDictionary, NSURL;

@interface MSVSegmentedCodingPackage : NSObject {
  /* instance variables */
  BOOL _needsInfoDictionaryUpdate;
}

@property (copy, nonatomic) NSURL *packageURL;
@property (retain, nonatomic) NSMutableDictionary *segmentEncoderMap;
@property (retain, nonatomic) NSMutableDictionary *infoDictionary;
@property (retain, nonatomic) Class archivedClass;
@property (readonly, nonatomic) NSDictionary *allVersions;

/* class methods */
+ (id)packageTypeIdentifier;

/* instance methods */
- (id)initWithURL:(id)url;
- (id)coderTypeForSegment:(id)segment;
- (void)reset;
- (void)setNeedsInfoDictionaryUpdate;
- (BOOL)writeWithError:(id *)error;
- (id)encoderForSegment:(id)segment version:(long long)version;
- (id)decodersWithError:(id *)error;
- (BOOL)saveWithError:(id *)error;
- (BOOL)deleteWithError:(id *)error;
@end

#endif /* MSVSegmentedCodingPackage_h */
