//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 105.150.0.0.0
//
#ifndef CVNLPTextDecodingContext_h
#define CVNLPTextDecodingContext_h
@import Foundation;

@class NSString;

@interface CVNLPTextDecodingContext : NSObject

@property (readonly, nonatomic) NSString *history;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } activeRange;

/* instance methods */
- (id)initWithHistory:(id)history activeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)initWithHistory:(id)history;
- (id)activeSubstring;
- (id)inactiveSubstring;
@end

#endif /* CVNLPTextDecodingContext_h */
