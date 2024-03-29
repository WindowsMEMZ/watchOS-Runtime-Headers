//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 12563.0.0.0.0
//
#ifndef ABSVCardRecord_h
#define ABSVCardRecord_h
@import Foundation;

@interface ABSVCardRecord : NSObject

@property (readonly, nonatomic) void * record;

/* instance methods */
- (id)initWithVCardRepresentation:(id)representation;
- (id)initWithRecord:(void *)record;
- (void)dealloc;
@end

#endif /* ABSVCardRecord_h */
