//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDiscoveryCardViewTemplateInformation_h
#define PKDiscoveryCardViewTemplateInformation_h
@import Foundation;

@interface PKDiscoveryCardViewTemplateInformation : NSObject

@property (nonatomic) long long cardSize;
@property (nonatomic) long long displayType;

/* instance methods */
- (id)initWithCardSize:(long long)size displayType:(long long)type;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)updateCardSize:(long long)size;
@end

#endif /* PKDiscoveryCardViewTemplateInformation_h */
