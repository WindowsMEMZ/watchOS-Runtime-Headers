//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLFileThumbnailRequest_h
#define QLFileThumbnailRequest_h
@import Foundation;

@class NSDictionary, NSString, NSURL;

@interface QLFileThumbnailRequest : NSObject

@property (nonatomic) struct CGSize { double x0; double x1; } maximumSize;
@property (nonatomic) struct CGSize { double x0; double x1; } minimumSize;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSURL *fileURL;
@property (nonatomic) unsigned long long badgeType;
@property (retain, nonatomic) NSDictionary *generationData;
@property (copy, nonatomic) NSString *contentType;
@property int iconFlavor;
@property (nonatomic) int interpolationQuality;
@property (nonatomic) BOOL wantsLowQuality;

/* instance methods */
- (id)initWithMaximumSize:(struct CGSize { double x0; double x1; })size minimumSize:(double)size scale:(double)scale badgeType:(unsigned long long)type iconFlavor:(int)flavor contentType:(id)type fileURL:(id)url generationData:(id)data interpolationQuality:(int)quality wantsLowQuality:(BOOL)quality;
- (id)description;
@end

#endif /* QLFileThumbnailRequest_h */
