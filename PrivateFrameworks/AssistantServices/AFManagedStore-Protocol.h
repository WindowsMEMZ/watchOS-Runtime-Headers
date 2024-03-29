//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFManagedStore_Protocol_h
#define AFManagedStore_Protocol_h
@import Foundation;

@protocol AFManagedStore <NSObject>
/* instance methods */
- (id)domainObjectForKey:(id)key;
- (void)setDomainObject:(id)object forKey:(id)key;
- (id)dataForKey:(id)key inKnowledgeStoreWithName:(id)name;
- (void)setData:(id)data forKey:(id)key inKnowledgeStoreWithName:(id)name;
- (void)resetKnowledgeStoreWithName:(id)name;
@end

#endif /* AFManagedStore_Protocol_h */
