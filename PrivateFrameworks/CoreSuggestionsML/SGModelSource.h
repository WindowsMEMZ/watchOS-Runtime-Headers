//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef SGModelSource_h
#define SGModelSource_h
@import Foundation;

@class PMLSessionDescriptor;

@interface SGModelSource : NSObject

@property (retain, nonatomic) PMLSessionDescriptor *sessionDescriptor;
@property (retain, nonatomic) Class modelClass;

/* instance methods */
- (id)initWithSessionDescriptor:(id)descriptor modelClass:(Class)class;
@end

#endif /* SGModelSource_h */
