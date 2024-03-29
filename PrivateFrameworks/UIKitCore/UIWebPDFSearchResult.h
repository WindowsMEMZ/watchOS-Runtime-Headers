//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIWebPDFSearchResult_h
#define UIWebPDFSearchResult_h
@import Foundation;

@class NSArray, NSString;

@interface UIWebPDFSearchResult : NSObject

@property (nonatomic) unsigned long long pageIndex;
@property (retain, nonatomic) NSString *string;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingBox;
@property (retain, nonatomic) NSArray *strings;
@property (retain, nonatomic) NSArray *rects;
@property (retain, nonatomic) NSArray *rotationAngles;

/* instance methods */
- (void)dealloc;
- (id)description;
@end

#endif /* UIWebPDFSearchResult_h */
