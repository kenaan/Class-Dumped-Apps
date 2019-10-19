//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEYGLayout, NSArray;
@protocol AWEYGViewProtocol;

@protocol AWEYGViewProtocol <NSObject>
@property(readonly, copy, nonatomic) NSArray *yg_childrens;
@property(nonatomic) __weak id <AWEYGViewProtocol> yg_parent;
@property(nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGRect frame;
@property(readonly, nonatomic) _Bool yg_isYogaEnabled;
@property(readonly, nonatomic) AWEYGLayout *yg_yoga;
- (_Bool)yg_hasRealView;
- (void)yg_applyChildsLayoutToViewHierarchy;
- (void)yg_applyLayoutToViewHierarchy:(_Bool)arg1;
- (void)yg_configureLayoutWithBlock:(void (^)(AWEYGLayout *))arg1;
- (void)yg_applyLayoutPreservingOrigin:(_Bool)arg1 dimensionFlexibility:(long long)arg2;
- (void)yg_applyLayoutPreservingOrigin:(_Bool)arg1;
- (void)yg_removeChild:(id <AWEYGViewProtocol>)arg1;
- (void)yg_sendChildToBack:(id <AWEYGViewProtocol>)arg1;
- (void)yg_bringChildToFront:(id <AWEYGViewProtocol>)arg1;
- (void)yg_insertChild:(id <AWEYGViewProtocol>)arg1 aboveChild:(id <AWEYGViewProtocol>)arg2;
- (void)yg_insertChild:(id <AWEYGViewProtocol>)arg1 belowChild:(id <AWEYGViewProtocol>)arg2;
- (void)yg_addChild:(id <AWEYGViewProtocol>)arg1;
- (void)yg_insertChild:(id <AWEYGViewProtocol>)arg1 atIndex:(long long)arg2;
- (void)yg_removeFromParent;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@end

