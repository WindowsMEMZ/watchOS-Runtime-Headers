//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef THAButton_h
#define THAButton_h
@import Foundation;

@interface THAButton : NSObject

@property (nonatomic) unsigned char identifier;
@property (nonatomic) unsigned long long type;

/* instance methods */
- (id)initWithType:(unsigned long long)type identifier:(unsigned char)identifier;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* THAButton_h */
