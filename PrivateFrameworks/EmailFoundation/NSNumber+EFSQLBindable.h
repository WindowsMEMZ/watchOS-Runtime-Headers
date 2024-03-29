//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef NSNumber_EFSQLBindable_h
#define NSNumber_EFSQLBindable_h
@import Foundation;

@interface NSNumber (EFSQLBindable) <EFSQLBindable, EFSQLValueExpressable>
/* instance methods */
- (id)ef_SQLExpression;
- (void)ef_renderSQLExpressionInto:(id)into;
- (id)ef_SQLIsolatedExpression;
- (id)ef_SQLBinding;
@end

#endif /* NSNumber_EFSQLBindable_h */
