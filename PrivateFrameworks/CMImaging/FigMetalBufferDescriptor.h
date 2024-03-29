//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 470.14.3.0.0
//
#ifndef FigMetalBufferDescriptor_h
#define FigMetalBufferDescriptor_h
@import Foundation;

@class NSString;

@interface FigMetalBufferDescriptor : NSObject

@property (retain, nonatomic) NSString *label;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long options;
@property (nonatomic) int allocationHint;

/* instance methods */
- (id)init;
- (void)initFromDescriptor:(id)descriptor;
@end

#endif /* FigMetalBufferDescriptor_h */
