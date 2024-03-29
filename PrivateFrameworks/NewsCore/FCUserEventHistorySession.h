//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCUserEventHistorySession_h
#define FCUserEventHistorySession_h
@import Foundation;

@class NSData, NSDate, NSNumber, NSString;

@interface FCUserEventHistorySession : NSObject

@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSNumber *sizeNumber;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) long long size;

/* class methods */
+ (id)dateFromSessionID:(id)id;

/* instance methods */
- (id)initWithSessionID:(id)id path:(id)path;
- (id)compressedData;
- (id)description;
@end

#endif /* FCUserEventHistorySession_h */
