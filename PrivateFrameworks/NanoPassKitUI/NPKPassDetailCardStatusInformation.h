//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPassDetailCardStatusInformation_h
#define NPKPassDetailCardStatusInformation_h
@import Foundation;

@class NSString;

@interface NPKPassDetailCardStatusInformation : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) unsigned long long iconStyle;

/* instance methods */
- (id)initWithTitle:(id)title message:(id)message iconStyle:(unsigned long long)style;
- (BOOL)isEqual:(id)equal;
@end

#endif /* NPKPassDetailCardStatusInformation_h */
