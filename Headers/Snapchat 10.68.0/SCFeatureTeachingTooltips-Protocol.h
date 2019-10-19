//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray;
@protocol SCFeatureTeachingTooltipsDelegate, SCTeachingTooltip;

@protocol SCFeatureTeachingTooltips
@property(nonatomic) __weak id <SCFeatureTeachingTooltipsDelegate> delegate;
- (void)hideAll;
- (void)hide:(id <SCTeachingTooltip>)arg1 animated:(_Bool)arg2;
- (void)displayIfNeeded:(id <SCTeachingTooltip>)arg1 animated:(_Bool)arg2;
- (_Bool)someDisabled:(NSArray *)arg1;
- (_Bool)someEnabled:(NSArray *)arg1;
- (_Bool)someDisplayed:(NSArray *)arg1;
- (_Bool)someNotDisplayed:(NSArray *)arg1;
- (void)reset;
- (void)removeTooltip:(id <SCTeachingTooltip>)arg1;
- (void)insertTooltip:(id <SCTeachingTooltip>)arg1;
@end
