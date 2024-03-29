//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.0.0.0.0
//
#ifndef SCKRecordFieldSchema_h
#define SCKRecordFieldSchema_h
@import Foundation;

@class NSString;

@interface SCKRecordFieldSchema : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) Class valueClass;
@property (nonatomic) BOOL required;
@property (readonly, nonatomic) BOOL encrypted;

/* instance methods */
- (id)initWithName:(id)name valueClass:(Class)class required:(BOOL)required encrypted:(BOOL)encrypted;
- (BOOL)isValidRecord:(id)record;
- (BOOL)isEncrypted;
- (BOOL)isRequired;
@end

#endif /* SCKRecordFieldSchema_h */
