//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 800.20.10.0.0
//
#ifndef WLKDictionaryResponseProcessor_h
#define WLKDictionaryResponseProcessor_h
@import Foundation;

@class NSString;

@interface WLKDictionaryResponseProcessor : NSObject

@property (copy, nonatomic) NSString *dictionaryKeyPath;
@property (retain, nonatomic) Class objectClass;

/* instance methods */
- (id)processResponseData:(id)data error:(id *)error;
- (id)processResponseData:(id)data options:(unsigned long long)options error:(id *)error;
@end

#endif /* WLKDictionaryResponseProcessor_h */
