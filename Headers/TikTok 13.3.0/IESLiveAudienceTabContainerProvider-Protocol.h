//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol IESLiveAudienceTabContainerProvider <NSObject>
@property(nonatomic) long long currentSelectedIndex;
@property(nonatomic) long long currentTab;
- (UIView *)fansGroupButton;
- (struct CGPoint)fansGroupTabAnimationPoint;
- (UIView *)commentViewContainer;
- (struct CGSize)scrollContainerSize;
- (UIView *)audienceTabScrollContainer;
- (UIView *)audienceTabContainer;
@end

