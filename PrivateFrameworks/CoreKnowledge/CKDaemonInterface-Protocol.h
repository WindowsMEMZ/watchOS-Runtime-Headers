//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef CKDaemonInterface_Protocol_h
#define CKDaemonInterface_Protocol_h
@import Foundation;

@protocol CKDaemonInterface <NSObject>
/* instance methods */
- (void)keysInStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)keysMatchingCondition:(id)condition inStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)valueForKey:(id)key inStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)valuesInStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)valuesForKeysMatchingCondition:(id)condition inStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)valuesForKeys:(id)keys inStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)keysAndValuesInStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)keysAndValuesForKeysMatchingCondition:(id)condition inStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)triplesComponentsMatching:(id)matching inStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)saveKeysAndValues:(id)values toStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)saveKeysAndValues:(id)values toSynchedStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)removeValueForKey:(id)key fromStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)removeValueForKey:(id)key fromSynchedStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)removeValuesForKeys:(id)keys fromStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)removeValuesForKeys:(id)keys fromSynchedStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)removeValuesMatchingCondition:(id)condition fromStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)removeValuesMatchingCondition:(id)condition fromSynchedStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)removeAllValuesFromStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)removeAllValuesFromSynchedStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)setWeightForLinkWithLabel:(id)label betweenSubject:(id)subject andObject:(id)object toValue:(long long)value inStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)increaseWeightForLinkWithLabel:(id)label betweenSubject:(id)subject andObject:(id)object inStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)decreaseWeightForLinkWithLabel:(id)label betweenSubject:(id)subject andObject:(id)object inStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)dropLinkWithLabel:(id)label betweenSubject:(id)subject andObject:(id)object inStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)dropLinksWithLabel:(id)label fromSubject:(id)subject inStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)dropLinksBetweenSubject:(id)subject andObject:(id)object inStoreWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)disableSyncAndDeleteCloudDataWithCompletionHandler:(id /* block */)handler;
@end

#endif /* CKDaemonInterface_Protocol_h */
