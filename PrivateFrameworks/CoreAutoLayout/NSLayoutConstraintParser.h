//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 32.0.0.0.0
//
#ifndef NSLayoutConstraintParser_h
#define NSLayoutConstraintParser_h
@import Foundation;

@class NSDictionary, NSMutableArray, NSString;
@protocol NSLayoutItem;

@interface NSLayoutConstraintParser : NSObject {
  /* instance variables */
  NSString *_line;
  const char * _lineChars;
  unsigned long long _lineLength;
  unsigned long long _opts;
  BOOL _useHorizontalArrangement;
  NSDictionary *_metrics;
  NSDictionary *_views;
  NSObject<NSLayoutItem> *_containerView;
  NSMutableArray *_constraints;
  NSMutableArray *_unflushedWidthConstraints;
  NSMutableArray *_alignmentConstraints;
  unsigned long long _currentCharacter;
  NSMutableArray *_incompleteConstraints;
  NSObject<NSLayoutItem> *_parsedLeftView;
  NSObject<NSLayoutItem> *_parsedRightView;
  NSObject<NSLayoutItem> *_parsedConstrainedWidthView;
}

/* class methods */
+ (id)constraintsWithVisualFormat:(id)format options:(unsigned long long)options metrics:(id)metrics views:(id)views;

/* instance methods */
- (id)initWithFormat:(id)format options:(unsigned long long)options metrics:(id)metrics views:(id)views;
- (void)dealloc;
- (id)constraints;
- (id)description;
- (void)failWithDescription:(id)description;
- (void)parse;
- (id)parseView;
- (void)flushWidthConstraints;
- (void)parseConnection;
- (void)parsePredicateWithParentheses;
- (void)parsePredicateList;
- (void)parsePredicate;
- (double)parseConstant;
- (void)parseOp;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfName;
- (void)findContainerView;
- (void)finishConstraint;
@end

#endif /* NSLayoutConstraintParser_h */
